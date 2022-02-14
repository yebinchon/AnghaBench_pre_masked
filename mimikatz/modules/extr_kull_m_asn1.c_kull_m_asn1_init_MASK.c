
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;
typedef int ASN1FreeFun_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int **,int *,int ,int *) ;
 int FUNC_1 (scalar_t__,int **,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,scalar_t__,scalar_t__,int const*,int ,char) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;

BOOL FUNC_6()
{
 BOOL VAR_9 = VAR_5;
 int VAR_10;
 if((VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_0, 1, VAR_7, VAR_7, (const ASN1FreeFun_t *) VAR_7, VAR_8, 'iwik')))
 {
  VAR_10 = FUNC_1(VAR_6, &VAR_4, ((void*)0), 0, ((void*)0));
  if(FUNC_3(VAR_10))
  {
   FUNC_4(L"ASN1_CreateEncoder: %i\n", VAR_10);
   VAR_4 = ((void*)0);
  }
  else
  {
   VAR_10 = FUNC_0(VAR_6, &VAR_3, ((void*)0), 0, ((void*)0));
   if(FUNC_3(VAR_10))
   {
    FUNC_4(L"ASN1_CreateDecoder: %i\n", VAR_10);
    VAR_3 = ((void*)0);
   }
  }
 }
 else FUNC_4(L"ASN1_CreateModule\n");

 VAR_9 = VAR_6 && VAR_4 && VAR_3;
 if(!VAR_9)
  FUNC_5();
 return VAR_9;
}
