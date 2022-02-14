
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ comp; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* complete ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct soc_tplg *VAR_0)
{
 if (VAR_0->comp && VAR_0->ops && VAR_0->ops->complete)
  VAR_0->ops->complete(VAR_0->comp);
}
