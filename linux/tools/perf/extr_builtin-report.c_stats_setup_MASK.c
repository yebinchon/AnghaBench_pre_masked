
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_warn; } ;
struct report {TYPE_1__ tool; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct report *VAR_0)
{
 FUNC_0(&VAR_0->tool, 0, sizeof(VAR_0->tool));
 VAR_0->tool.no_warn = 1;
}
