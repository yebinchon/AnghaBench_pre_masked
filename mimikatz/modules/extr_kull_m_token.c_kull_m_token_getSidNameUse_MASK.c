
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SID_NAME_USE ;
typedef char* PCWCHAR ;


 char** VAR_0 ;
 int VAR_1 ;

PCWCHAR FUNC_0(SID_NAME_USE VAR_2)
{
 return (VAR_2 > 0 && VAR_2 <= VAR_1) ? VAR_0[VAR_2 - 1] : L"unk!";
}
