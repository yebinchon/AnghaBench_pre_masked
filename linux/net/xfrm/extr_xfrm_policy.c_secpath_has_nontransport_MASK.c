
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sec_path {int len; TYPE_2__** xvec; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct sec_path *VAR_1, int VAR_2, int *VAR_3)
{
 for (; VAR_2 < VAR_1->len; VAR_2++) {
  if (VAR_1->xvec[VAR_2]->props.mode != VAR_0) {
   *VAR_3 = VAR_2;
   return 1;
  }
 }

 return 0;
}
