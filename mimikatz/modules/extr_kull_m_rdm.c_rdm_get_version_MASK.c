
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PSTR ;
typedef int HANDLE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,int **,int *) ;

BOOL FUNC_4(HANDLE VAR_4, PSTR *VAR_5)
{
 BOOL VAR_6 = VAR_0;
 BYTE *VAR_7, VAR_8;

 if(FUNC_3(VAR_4, VAR_2, ((void*)0), 0, &VAR_7, &VAR_8))
 {
  if(VAR_7)
  {
   if((*VAR_5 = (PSTR) FUNC_0(VAR_1, VAR_8 + 1)))
   {
    FUNC_2(*VAR_5, VAR_7, VAR_8);
    VAR_6 = VAR_3;
   }
   FUNC_1(VAR_7);
  }
 }
 return VAR_6;
}
