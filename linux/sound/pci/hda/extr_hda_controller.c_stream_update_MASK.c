
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdac_stream {int dummy; } ;
struct hdac_bus {int reg_lock; } ;
struct azx_dev {int dummy; } ;
struct azx {TYPE_1__* ops; } ;
struct TYPE_4__ {int substream; } ;
struct TYPE_3__ {scalar_t__ (* position_check ) (struct azx*,struct azx_dev*) ;} ;


 TYPE_2__* FUNC_0 (struct azx_dev*) ;
 struct azx* FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct azx_dev* FUNC_5 (struct hdac_stream*) ;
 scalar_t__ FUNC_6 (struct azx*,struct azx_dev*) ;

__attribute__((used)) static void FUNC_7(struct hdac_bus *VAR_0, struct hdac_stream *VAR_1)
{
 struct azx *VAR_2 = FUNC_1(VAR_0);
 struct azx_dev *VAR_3 = FUNC_5(VAR_1);


 if (!VAR_2->ops->position_check ||
     VAR_2->ops->position_check(VAR_2, VAR_3)) {
  FUNC_4(&VAR_0->reg_lock);
  FUNC_2(FUNC_0(VAR_3)->substream);
  FUNC_3(&VAR_0->reg_lock);
 }
}
