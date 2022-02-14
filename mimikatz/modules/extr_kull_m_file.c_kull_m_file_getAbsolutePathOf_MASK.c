
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int **) ;

BOOL FUNC_6(PCWCHAR VAR_3, wchar_t ** VAR_4)
{
 BOOL VAR_5 = VAR_0;
 wchar_t *VAR_6;
 *VAR_4 = (wchar_t *) FUNC_0(VAR_1, VAR_2 * sizeof(wchar_t));

 if(FUNC_4(VAR_3))
 {
  if(FUNC_5(&VAR_6))
  {
   VAR_5 = (FUNC_3(*VAR_4 , VAR_6, VAR_3) != ((void*)0));
   FUNC_1(VAR_6);
  }
 }
 else VAR_5 = FUNC_2(*VAR_4, VAR_3);

 if(!VAR_5)
  FUNC_1(*VAR_4);

 return VAR_5;
}
