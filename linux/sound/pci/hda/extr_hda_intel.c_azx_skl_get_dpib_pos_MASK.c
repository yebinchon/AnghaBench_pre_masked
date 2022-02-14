
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct azx_dev {TYPE_1__ core; } ;
struct azx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct azx*) ;

__attribute__((used)) static unsigned int FUNC_2(struct azx *VAR_2,
      struct azx_dev *VAR_3)
{
 return FUNC_0(FUNC_1(VAR_2),
        VAR_0 +
        (VAR_1 *
         VAR_3->core.index));
}
