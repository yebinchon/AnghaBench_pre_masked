
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int show_quiet; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, double VAR_2,
        const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 if (!VAR_1)
  VAR_1 = "main,";

 if (!VAR_0->p.show_quiet)
  FUNC_0(" %-30s %15.3f, %-15s %s\n", VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_0(" %14.3f %s\n", VAR_2, VAR_5);
}
