
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tep_print_arg {scalar_t__ type; TYPE_1__ typecast; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long long FUNC_1 (unsigned long long,int ,int) ;

__attribute__((used)) static unsigned long long
FUNC_2(unsigned long long VAR_1, struct tep_print_arg *VAR_2, int VAR_3)
{
 if (VAR_2->type != VAR_0) {
  FUNC_0("expected type argument");
  return 0;
 }

 return FUNC_1(VAR_1, VAR_2->typecast.type, VAR_3);
}
