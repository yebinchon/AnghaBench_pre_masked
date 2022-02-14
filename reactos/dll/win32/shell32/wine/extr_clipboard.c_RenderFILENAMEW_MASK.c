
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LPITEMIDLIST ;
typedef int HGLOBAL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int ,int *,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;

HGLOBAL FUNC_9 (LPITEMIDLIST VAR_3, LPITEMIDLIST * VAR_4, UINT VAR_5)
{
 int VAR_6 = 0;
 WCHAR VAR_7[VAR_2], *VAR_8;
 LPITEMIDLIST VAR_9;
 HGLOBAL VAR_10;
 BOOL VAR_11;

 FUNC_6("(%p,%p,%u)\n", VAR_3, VAR_4, VAR_5);


 VAR_9 = FUNC_3(VAR_3, VAR_4[0]);
 if (!VAR_9)
  return 0;

 VAR_11 = FUNC_5(VAR_9, VAR_7);
 FUNC_4(VAR_9);
 if (!VAR_11)
  return 0;

 VAR_6 = (FUNC_8(VAR_7)+1) * sizeof(WCHAR);


 VAR_10 = FUNC_0(VAR_0|VAR_1, VAR_6);
 if(!VAR_10) return VAR_10;
 VAR_8 = FUNC_1(VAR_10);
 FUNC_7(VAR_8, VAR_7, VAR_6);
 FUNC_2(VAR_10);

 return VAR_10;
}
