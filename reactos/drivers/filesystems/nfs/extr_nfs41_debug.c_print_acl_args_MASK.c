
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SECURITY_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(
    SECURITY_INFORMATION VAR_4)
{
    FUNC_0("Security query: %s %s %s\n",
        (VAR_4 & VAR_2)?"OWNER":"",
        (VAR_4 & VAR_1)?"GROUP":"",
        (VAR_4 & VAR_0)?"DACL":"",
        (VAR_4 & VAR_3)?"SACL":"");
}
