
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_entry {TYPE_2__* branch_info; } ;
struct TYPE_3__ {int map; } ;
struct TYPE_4__ {TYPE_1__ from; } ;


 int FUNC_0 (int ,char*,size_t,unsigned int) ;
 int FUNC_1 (char*,size_t,char*,unsigned int,unsigned int,char*) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3)
{
 if (VAR_0->branch_info)
  return FUNC_0(VAR_0->branch_info->from.map,
       VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, "%-*.*s", VAR_3, VAR_3, "N/A");
}
