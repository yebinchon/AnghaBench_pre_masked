
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct snd_seq_event {int flags; TYPE_2__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct snd_seq_event *VAR_4)
{
 if ((VAR_4->flags & VAR_1) != VAR_2)
  return -VAR_0;

 return VAR_4->data.ext.len & ~VAR_3;
}
