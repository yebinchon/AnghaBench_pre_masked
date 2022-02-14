
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

char *FUNC_0(void) {
    char *VAR_7 = "Wrong format";
    if (VAR_6 == VAR_5)
        VAR_7 = "Unknown command or category name in ACL";
    else if (VAR_6 == VAR_3)
        VAR_7 = "Syntax error";
    else if (VAR_6 == VAR_1)
        VAR_7 = "Adding a subcommand of a command already fully "
                 "added is not allowed. Remove the command to start. "
                 "Example: -DEBUG +DEBUG|DIGEST";
    else if (VAR_6 == VAR_2)
        VAR_7 = "Adding a pattern after the * pattern (or the "
                 "'allkeys' flag) is not valid and does not have any "
                 "effect. Try 'resetkeys' to start with an empty "
                 "list of patterns";
    else if (VAR_6 == VAR_4)
        VAR_7 = "The password you are trying to remove from the user does "
                 "not exist";
    else if (VAR_6 == VAR_0)
        VAR_7 = "The password hash must be exactly 64 characters and contain "
                 "only lowercase hexadecimal characters";
    return VAR_7;
}
