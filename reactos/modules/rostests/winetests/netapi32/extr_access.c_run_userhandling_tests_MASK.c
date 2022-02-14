
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* usri1_password; void* usri1_name; int * usri1_script_path; int usri1_flags; int * usri1_comment; int * usri1_home_dir; int usri1_priv; } ;
typedef TYPE_1__ USER_INFO_1 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *,int,int ,int *) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    NET_API_STATUS VAR_13;
    USER_INFO_1 VAR_14;

    VAR_14.usri1_priv = VAR_8;
    VAR_14.usri1_home_dir = ((void*)0);
    VAR_14.usri1_comment = ((void*)0);
    VAR_14.usri1_flags = VAR_7;
    VAR_14.usri1_script_path = ((void*)0);

    VAR_14.usri1_name = VAR_11;
    VAR_14.usri1_password = VAR_10;

    VAR_13 = FUNC_2(((void*)0), 1, (LPBYTE)&VAR_14, ((void*)0));
    if (VAR_13 == VAR_4 || VAR_13 == VAR_5)
    {



        FUNC_5("We are on NT4, we have to delete the user with the too long username\n");
        VAR_13 = FUNC_3(((void*)0), VAR_11);
        FUNC_1(VAR_13 == VAR_4, "Deleting the user failed : %d\n", VAR_13);
    }
    else if (VAR_13 == VAR_0)
    {
        FUNC_4("not enough permissions to add a user\n");
        return;
    }
    else
        FUNC_1(VAR_13 == VAR_2 ||
           FUNC_0(VAR_13 == VAR_3),
           "Adding user with too long username returned 0x%08x\n", VAR_13);

    VAR_14.usri1_name = VAR_9;
    VAR_14.usri1_password = VAR_12;

    VAR_13 = FUNC_2(((void*)0), 1, (LPBYTE)&VAR_14, ((void*)0));
    FUNC_1(VAR_13 == VAR_3 || VAR_13 == VAR_0 ,
       "Adding user with too long password returned 0x%08x\n", VAR_13);

    VAR_14.usri1_name = VAR_11;
    VAR_14.usri1_password = VAR_12;

    VAR_13 = FUNC_2(((void*)0), 1, (LPBYTE)&VAR_14, ((void*)0));



    FUNC_1(VAR_13 == VAR_2 || VAR_13 == VAR_3,
            "Adding user with too long username/password returned 0x%08x\n", VAR_13);

    VAR_14.usri1_name = VAR_9;
    VAR_14.usri1_password = VAR_10;

    VAR_13 = FUNC_2(((void*)0), 5, (LPBYTE)&VAR_14, ((void*)0));
    FUNC_1(VAR_13 == VAR_1, "Adding user with level 5 returned 0x%08x\n", VAR_13);

    VAR_13 = FUNC_2(((void*)0), 1, (LPBYTE)&VAR_14, ((void*)0));
    if(VAR_13 == VAR_0)
    {
        FUNC_4("Insufficient permissions to add users. Skipping test.\n");
        return;
    }
    if(VAR_13 == VAR_5)
    {
        FUNC_4("User already exists, skipping test to not mess up the system\n");
        return;
    }

    FUNC_1(VAR_13 == VAR_4 ||
       FUNC_0(VAR_13 == VAR_3),
       "Adding user failed with error 0x%08x\n", VAR_13);
    if(VAR_13 != VAR_4)
        return;
    VAR_13 = FUNC_3(((void*)0), VAR_9);
    FUNC_1(VAR_13 == VAR_4, "Deleting the user failed.\n");

    VAR_13 = FUNC_3(((void*)0), VAR_9);
    FUNC_1(VAR_13 == VAR_6, "Deleting a nonexistent user returned 0x%08x\n",VAR_13);
}
