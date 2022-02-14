
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * usri1_script_path; int usri1_flags; int * usri1_comment; int * usri1_home_dir; int usri1_priv; int usri1_password; int usri1_name; } ;
typedef TYPE_1__ USER_INFO_1 ;
typedef int NET_API_STATUS ;
typedef int LPBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static NET_API_STATUS FUNC_1(void)
{
    USER_INFO_1 VAR_4;

    VAR_4.usri1_name = VAR_2;
    VAR_4.usri1_password = VAR_3;
    VAR_4.usri1_priv = VAR_1;
    VAR_4.usri1_home_dir = ((void*)0);
    VAR_4.usri1_comment = ((void*)0);
    VAR_4.usri1_flags = VAR_0;
    VAR_4.usri1_script_path = ((void*)0);

    return FUNC_0(((void*)0), 1, (LPBYTE)&VAR_4, ((void*)0));
}
