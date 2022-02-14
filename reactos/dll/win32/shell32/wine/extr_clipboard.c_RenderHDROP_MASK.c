
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int pFiles; int fWide; } ;
typedef int LPITEMIDLIST ;
typedef int * HGLOBAL ;
typedef TYPE_1__ DROPFILES ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (char*,int ,int *,int) ;
 int VAR_3 ;
 int FUNC_11 (int ,scalar_t__*,int) ;
 int FUNC_12 (scalar_t__*,scalar_t__*) ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (scalar_t__*,scalar_t__*) ;
 int FUNC_15 (scalar_t__*) ;

HGLOBAL FUNC_16(LPITEMIDLIST VAR_4, LPITEMIDLIST * VAR_5, UINT VAR_6)
{
 UINT VAR_7;



 int VAR_8 = 0,VAR_9 = 0;
 WCHAR VAR_10[VAR_2];

 WCHAR VAR_11[VAR_2];
 HGLOBAL VAR_12 = ((void*)0);
 DROPFILES *VAR_13;
 int VAR_14;




 FUNC_10("(%p,%p,%u)\n", VAR_4, VAR_5, VAR_6);
 VAR_9 = sizeof(DROPFILES);


 FUNC_9(VAR_4, VAR_10);
 FUNC_8(VAR_10);
 VAR_8 = FUNC_13(VAR_10);


 for (VAR_7=0; VAR_7<VAR_6;VAR_7++)
 {





   FUNC_11(VAR_5[VAR_7], VAR_11, VAR_2);
   VAR_9 += (VAR_8 + FUNC_13(VAR_11) + 1) * sizeof(WCHAR);

 }

 VAR_9 += sizeof(WCHAR);


 VAR_12 = FUNC_1(VAR_0|VAR_1, VAR_9);



 if(!VAR_12) return VAR_12;


        VAR_13 = FUNC_2(VAR_12);
 VAR_14 = (sizeof(DROPFILES) + sizeof(WCHAR) - 1) / sizeof(WCHAR);
        VAR_13->pFiles = VAR_14 * sizeof(WCHAR);
        VAR_13->fWide = VAR_3;


 FUNC_12(VAR_11, VAR_10);


 for (VAR_7=0; VAR_7<VAR_6;VAR_7++)
 {







   FUNC_11(VAR_5[VAR_7], VAR_11 + VAR_8, VAR_2 - VAR_8);
   FUNC_12(((WCHAR*)VAR_13)+VAR_14, VAR_11);
   VAR_14 += FUNC_13(VAR_11) + 1;

 }

 ((WCHAR*)VAR_13)[VAR_14] = 0;
 FUNC_3(VAR_12);







 return VAR_12;
}
