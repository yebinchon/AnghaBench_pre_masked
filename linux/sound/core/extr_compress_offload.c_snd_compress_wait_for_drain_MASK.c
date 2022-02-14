
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {TYPE_1__* device; TYPE_2__* runtime; } ;
struct TYPE_4__ {scalar_t__ state; int sleep; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_compr_stream *VAR_2)
{
 int VAR_3;
 VAR_2->runtime->state = VAR_1;
 FUNC_1(&VAR_2->device->lock);







 VAR_3 = FUNC_3(VAR_2->runtime->sleep,
   (VAR_2->runtime->state != VAR_1));
 if (VAR_3 == -VAR_0)
  FUNC_2("wait aborted by a signal\n");
 else if (VAR_3)
  FUNC_2("wait for drain failed with %d\n", VAR_3);


 FUNC_4(&VAR_2->runtime->sleep);
 FUNC_0(&VAR_2->device->lock);

 return VAR_3;
}
