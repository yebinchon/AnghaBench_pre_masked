
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {scalar_t__ direction; int metadata_set; int next_track; TYPE_2__* ops; TYPE_1__* runtime; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_compr_stream*,int ) ;} ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_compr_stream*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_compr_stream *VAR_4)
{
 int VAR_5;


 if (VAR_4->runtime->state != VAR_1)
  return -VAR_0;


 if (VAR_4->direction == VAR_2)
  return -VAR_0;




 if (VAR_4->metadata_set == 0)
  return -VAR_0;

 VAR_5 = VAR_4->ops->trigger(VAR_4, VAR_3);
 if (VAR_5 != 0)
  return VAR_5;
 VAR_4->metadata_set = 0;
 VAR_4->next_track = 1;
 return 0;
}
