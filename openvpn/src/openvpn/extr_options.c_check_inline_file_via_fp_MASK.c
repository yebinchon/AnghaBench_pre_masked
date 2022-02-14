
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fp; } ;
struct in_src {TYPE_1__ u; int type; } ;
struct gc_arena {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct in_src*,char**,struct gc_arena*) ;

__attribute__((used)) static bool
FUNC_1(FILE *VAR_1, char *VAR_2[], struct gc_arena *VAR_3)
{
    struct in_src VAR_4;
    VAR_4.type = VAR_0;
    VAR_4.u.fp = VAR_1;
    return FUNC_0(&VAR_4, VAR_2, VAR_3);
}
