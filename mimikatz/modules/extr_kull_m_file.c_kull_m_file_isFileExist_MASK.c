
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

BOOL FUNC_2(PCWCHAR VAR_4)
{
 BOOL VAR_5 = VAR_0;
 HANDLE VAR_6 = ((void*)0);

 VAR_5 = ((VAR_6 = FUNC_1(VAR_4, 0, VAR_1, ((void*)0), VAR_3, 0, ((void*)0))) && VAR_6 != VAR_2);
 if(VAR_5)
  FUNC_0(VAR_6);
 return VAR_5;
}
