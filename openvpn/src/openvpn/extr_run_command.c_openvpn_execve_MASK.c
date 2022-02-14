
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {char** argv; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char const*,char* const*,char* const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 scalar_t__ FUNC_5 (struct env_set const*,int,struct gc_arena*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (unsigned int const) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,int*,int ) ;

int
FUNC_10(const struct argv *VAR_8, const struct env_set *VAR_9, const unsigned int VAR_10)
{
    struct gc_arena VAR_11 = FUNC_4();
    int VAR_12 = VAR_3;
    static bool VAR_13 = 0;

    if (VAR_8 && VAR_8->argv[0])
    {
        FUNC_6(VAR_2, "openvpn_execve: execve function not available");

    }
    else
    {
        FUNC_6(VAR_1, "openvpn_execve: called with empty argv");
    }

    FUNC_3(&VAR_11);
    return VAR_12;
}
