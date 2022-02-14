
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* lpBrowseInfo; int hwndTreeView; } ;
typedef TYPE_2__ browse_info ;
typedef int ULONG ;
struct TYPE_5__ {int ulFlags; } ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef int LPSTR ;
typedef int * LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef int HWND ;
typedef int HTREEITEM ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *,int,int **,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int **) ;
 int FUNC_9 (int *,int,int *,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int *,int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,int *,int *,int ,int *) ;

__attribute__((used)) static void FUNC_20( browse_info *VAR_6, IShellFolder * VAR_7,
                 LPITEMIDLIST VAR_8, HTREEITEM VAR_9, IEnumIDList* VAR_10)
{
 LPITEMIDLIST VAR_11 = 0;
 ULONG VAR_12;
 HRESULT VAR_13;
 HWND VAR_14 = FUNC_2( VAR_6->hwndTreeView );

 FUNC_19("%p %p %p %p\n",VAR_7, VAR_8, VAR_9, VAR_10);


 if (!VAR_10) return;

 FUNC_17( VAR_14 );
 FUNC_18( FUNC_12( 0, (LPSTR)VAR_1 ) );

 while (VAR_5 == FUNC_3(VAR_10,1,&VAR_11,&VAR_12))
 {
     ULONG VAR_15 = VAR_4 | VAR_3;
     IEnumIDList* VAR_16 = ((void*)0);
     IShellFolder* VAR_17 = ((void*)0);
     FUNC_9(VAR_7, 1, (LPCITEMIDLIST*)&VAR_11, &VAR_15);
     if (VAR_15 & VAR_3)
     {
         VAR_13 = FUNC_7(VAR_7,VAR_11,((void*)0),&VAR_2,(LPVOID*)&VAR_17);
         if (FUNC_16(VAR_13))
                {
             DWORD VAR_18 = FUNC_0(VAR_6->lpBrowseInfo->ulFlags);
             VAR_13 = FUNC_8(VAR_17, VAR_14, VAR_18, &VAR_16);
                    if (VAR_13 == VAR_5)
                    {
                        if ((FUNC_6(VAR_16, 1) != VAR_5) ||
                             FUNC_1(FUNC_5(VAR_16)))
                        {
                            FUNC_4(VAR_16);
                            VAR_16 = ((void*)0);
                        }
                    }
                    FUNC_10(VAR_17);
                }
     }

     if (!FUNC_11(VAR_6, VAR_7, VAR_11, VAR_8, VAR_16, VAR_9))
         goto done;
     FUNC_15(VAR_11);
     VAR_11=((void*)0);
 }

done:
 FUNC_14();
 FUNC_18(FUNC_13(0, (LPWSTR)VAR_0));
    FUNC_15(VAR_11);
}
