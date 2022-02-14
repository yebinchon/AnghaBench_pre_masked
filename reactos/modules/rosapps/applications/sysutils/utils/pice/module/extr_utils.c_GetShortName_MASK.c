
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef char* LPSTR ;


 size_t FUNC_0 (char*) ;

LPSTR FUNC_1(LPSTR VAR_0)
{
ULONG VAR_1;


 for(VAR_1=FUNC_0(VAR_0);VAR_0[VAR_1]!='\\' && &VAR_0[VAR_1]!=VAR_0;VAR_1--);

 if(&VAR_0[VAR_1]!=VAR_0)VAR_1++;


 return &VAR_0[VAR_1];
}
