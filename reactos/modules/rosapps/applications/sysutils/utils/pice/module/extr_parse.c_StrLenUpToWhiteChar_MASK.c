
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef scalar_t__* LPSTR ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;

ULONG FUNC_1(LPSTR VAR_0,LPSTR VAR_1)
{
    ULONG VAR_2;

 for(VAR_2=0;VAR_0[VAR_2]!=0 && !FUNC_0(VAR_0[VAR_2],VAR_1);VAR_2++);

 return VAR_2;
}
