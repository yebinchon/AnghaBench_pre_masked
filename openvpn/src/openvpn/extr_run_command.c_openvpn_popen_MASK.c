
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
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char* const*,char* const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 scalar_t__ FUNC_7 (struct env_set const*,int,struct gc_arena*) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (int*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (scalar_t__,int*,int ) ;

int
FUNC_12(const struct argv *VAR_7, const struct env_set *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_6();
    int VAR_10 = -1;
    static bool VAR_11 = 0;

    if (VAR_7 && VAR_7->argv[0])
    {
        FUNC_8(VAR_2, "openvpn_popen: execve function not available");

    }
    else
    {
        FUNC_8(VAR_1, "openvpn_popen: called with empty argv");
    }

    FUNC_5(&VAR_9);
    return VAR_10;
}
