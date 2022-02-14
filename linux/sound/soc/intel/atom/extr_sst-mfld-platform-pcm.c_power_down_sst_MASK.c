
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_runtime_stream {TYPE_1__* ops; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* power ) (int ,int) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct sst_runtime_stream *VAR_1)
{
 VAR_1->ops->power(VAR_0->dev, 0);
}
