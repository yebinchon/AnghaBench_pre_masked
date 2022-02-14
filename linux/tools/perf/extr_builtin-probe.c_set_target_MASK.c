
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_used; int uprobes; scalar_t__ target; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4;
 if (!VAR_1.target && VAR_2 && *VAR_2 == '/') {
  VAR_1.target = FUNC_1(VAR_2);
  if (!VAR_1.target)
   return -VAR_0;
  VAR_1.target_used = 0;

  VAR_3 = 1;
  VAR_4 = VAR_2 + (FUNC_2(VAR_2) - 3);

  if (FUNC_0(VAR_4, ".ko"))
   VAR_1.uprobes = 1;

 }

 return VAR_3;
}
