
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cumulate_callchain; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static char *FUNC_1(char *VAR_3)
{
 if (VAR_1 == VAR_0)
  return VAR_3;

 VAR_3 = FUNC_0("overhead", VAR_3);

 if (VAR_2.cumulate_callchain)
  VAR_3 = FUNC_0("overhead_children", VAR_3);

 return VAR_3;
}
