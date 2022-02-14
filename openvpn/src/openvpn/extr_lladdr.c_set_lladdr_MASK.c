
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {int dummy; } ;
struct argv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct argv*) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*,char*,int ,char const*,char const*) ;
 int FUNC_3 (struct argv*) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct argv*,struct env_set const*,int ,char*) ;

int
FUNC_6(const char *VAR_4, const char *VAR_5,
           const struct env_set *VAR_6)
{
    struct argv VAR_7 = FUNC_1();
    int VAR_8;

    if (!VAR_4 || !VAR_5)
    {
        return -1;
    }
    FUNC_4(VAR_2, "Sorry, but I don't know how to configure link layer addresses on this operating system.");
    return -1;


    FUNC_0(VAR_1, &VAR_7);
    VAR_8 = FUNC_5(&VAR_7, VAR_6, VAR_2, "ERROR: Unable to set link layer address.");
    if (VAR_8)
    {
        FUNC_4(VAR_1, "TUN/TAP link layer address set to %s", VAR_5);
    }

    FUNC_3(&VAR_7);
    return VAR_8;
}
