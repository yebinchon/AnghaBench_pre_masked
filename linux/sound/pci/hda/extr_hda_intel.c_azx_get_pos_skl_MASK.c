
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* substream; } ;
struct azx_dev {TYPE_2__ core; } ;
struct azx {int dummy; } ;
struct TYPE_3__ {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct azx*,struct azx_dev*) ;
 unsigned int FUNC_1 (struct azx*,struct azx_dev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct azx *VAR_1, struct azx_dev *VAR_2)
{

 if (VAR_2->core.substream->stream == VAR_0)
  return FUNC_1(VAR_1, VAR_2);





 FUNC_2(20);
 FUNC_1(VAR_1, VAR_2);
 return FUNC_0(VAR_1, VAR_2);
}
