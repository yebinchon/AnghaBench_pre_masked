
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_8__ {int bInitialized; int uID; int uEnumFlags; scalar_t__ pidl; int (* lpfnCallback ) (scalar_t__,int *) ;} ;
struct TYPE_7__ {int cbSize; scalar_t__ dwMenuData; void* fMask; } ;
typedef TYPE_1__ MENUINFO ;
typedef scalar_t__* LPWSTR ;
typedef int LPVOID ;
typedef int * LPITEMIDLIST ;
typedef int (* LPFNFMCALLBACK ) (scalar_t__,int *) ;
typedef TYPE_2__* LPFMINFO ;
typedef scalar_t__ LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef int HMENU ;
typedef int FMINFO ;


 int FUNC_0 () ;
 int FUNC_1 (char*,TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int,int,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 TYPE_2__* FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int *,int,int **,int*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (scalar_t__,int *) ;
 int VAR_5 ;
 int FUNC_10 (int *,int *,char*,int ) ;
 int FUNC_11 (int *,scalar_t__,int ,int *,int *) ;
 int FUNC_12 (int *,int ,int,int **) ;
 int FUNC_13 (int *,int,scalar_t__*,int*) ;
 int FUNC_14 (int *) ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__* FUNC_15 (char*) ;
 int FUNC_16 (int *,int *,int,int ,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int **) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_19 (int ,TYPE_1__*) ;
 int FUNC_20 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_21(HMENU VAR_14, LPCITEMIDLIST VAR_15)
{ IShellFolder *VAR_16, *VAR_17;
 ULONG VAR_18 = VAR_8;
 UINT VAR_19, VAR_20;
 LPFNFMCALLBACK VAR_21;
 LPCITEMIDLIST VAR_22;
 WCHAR VAR_23[VAR_6];
 int VAR_24 = 0, VAR_25;
 MENUINFO VAR_26;
 LPFMINFO VAR_27;

 FUNC_20("%p %p\n", VAR_14, VAR_15);

 VAR_26.cbSize = sizeof(MENUINFO);
 VAR_26.fMask = VAR_7;

 if (! FUNC_3(VAR_14, &VAR_26))
   return VAR_0;

 VAR_27 = (LPFMINFO)VAR_26.dwMenuData;

 if ((VAR_27 == 0) || (VAR_26.cbSize != sizeof(MENUINFO)))
 {
   FUNC_1("menudata corrupt: %p %u\n", VAR_27, VAR_26.cbSize);
   return 0;
 }

 if (VAR_27->bInitialized)
   return 0;

 VAR_22 = (VAR_15? VAR_15: VAR_27->pidl);
 if (!VAR_22)
   return 0;

 VAR_19 = VAR_27->uID;
 VAR_20 = VAR_27->uEnumFlags;
 VAR_21 = VAR_27->lpfnCallback;
 VAR_27->bInitialized = VAR_0;

 FUNC_19(VAR_14, &VAR_26);

 if (FUNC_18 (FUNC_17(&VAR_16)))
 {
   if (FUNC_18(FUNC_11(VAR_16, VAR_22,0,&VAR_4,(LPVOID *)&VAR_17)))
   {
     IEnumIDList *VAR_28 = ((void*)0);

     if (FUNC_18 (FUNC_12(VAR_17, 0, VAR_20, &VAR_28 )))
     {

       LPITEMIDLIST VAR_29 = ((void*)0);
       ULONG VAR_30;

       while ((!VAR_13) && (VAR_11 == FUNC_7(VAR_28,1,&VAR_29,&VAR_30)))
       {
  if (FUNC_18 (FUNC_13(VAR_16, 1, (LPCITEMIDLIST*)&VAR_29, &VAR_18)))
  {
    FUNC_10(((void*)0), VAR_29, VAR_23, VAR_5);
    if (! (FUNC_16(VAR_16, VAR_29, VAR_0, 0, &VAR_25)))
      VAR_25 = VAR_1;
    if ( VAR_8 & VAR_18)
    {
      LPFMINFO VAR_31;
      MENUINFO VAR_32;
      HMENU VAR_33 = FUNC_0();

      VAR_31 = FUNC_6(FUNC_5(), VAR_3, sizeof(FMINFO));

      VAR_31->pidl = FUNC_9(VAR_22, VAR_29);
      VAR_31->uEnumFlags = VAR_9 | VAR_10;

      VAR_32.cbSize = sizeof(MENUINFO);
      VAR_32.fMask = VAR_7;
      VAR_32.dwMenuData = (ULONG_PTR) VAR_31;
      FUNC_19 (VAR_33, &VAR_32);

      FUNC_2 (VAR_14, VAR_23, VAR_19, VAR_25, VAR_33, VAR_2);
    }
    else
    {
      LPWSTR VAR_34 = FUNC_15(VAR_23);
      if (VAR_34)
        *VAR_34 = 0;
      FUNC_2 (VAR_14, VAR_23, VAR_19, VAR_25, 0, VAR_2);
    }
  }

  if (VAR_21)
  {
    FUNC_20("enter callback\n");
    VAR_21 ( VAR_22, VAR_29);
    FUNC_20("leave callback\n");
  }

  VAR_24++;
       }
       FUNC_8 (VAR_28);
     }
     FUNC_14(VAR_17);
   }
   FUNC_14(VAR_16);
 }

 if ( FUNC_4 (VAR_14) == 0 )
 {
          static const WCHAR VAR_35[] = { '(','e','m','p','t','y',')',0 };
   FUNC_2 (VAR_14, VAR_35, VAR_19, VAR_1, 0, VAR_2);
   VAR_24++;
 }

 VAR_27->bInitialized = VAR_12;
 FUNC_19(VAR_14, &VAR_26);

 return VAR_24;
}
