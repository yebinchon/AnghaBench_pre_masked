
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char const*) ;

void
FUNC_3(const char *VAR_3)
{
    if (VAR_3)
    {
        FUNC_1(VAR_1, "Sorry but I can't chroot to '%s' because this operating system doesn't appear to support the chroot() system call", VAR_3);

    }
}
