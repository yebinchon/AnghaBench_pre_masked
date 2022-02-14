
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct script_config {char const** names; size_t index; int extra_format; int perf; int * paths; } ;
struct TYPE_2__ {scalar_t__ inline_name; } ;


 scalar_t__ FUNC_0 (int *,char*,int ,char const*,char*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const char *VAR_2,
        struct script_config *VAR_3)
{
 VAR_3->names[VAR_3->index] = VAR_1;
 if (FUNC_0(&VAR_3->paths[VAR_3->index],
       "%d script %s -F +metric %s %d",
       VAR_3->perf, VAR_2, VAR_0.inline_name ? " --inline" : "",
       VAR_3->extra_format) < 0)
  return -1;
 VAR_3->index++;
 return 0;
}
