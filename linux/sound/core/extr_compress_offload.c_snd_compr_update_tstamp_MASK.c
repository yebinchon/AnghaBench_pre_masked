
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_tstamp {int copied_total; int byte_offset; } ;
struct snd_compr_stream {scalar_t__ direction; TYPE_1__* runtime; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* pointer ) (struct snd_compr_stream*,struct snd_compr_tstamp*) ;} ;
struct TYPE_3__ {int total_bytes_available; int total_bytes_transferred; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct snd_compr_stream*,struct snd_compr_tstamp*) ;

__attribute__((used)) static int FUNC_2(struct snd_compr_stream *VAR_2,
  struct snd_compr_tstamp *VAR_3)
{
 if (!VAR_2->ops->pointer)
  return -VAR_0;
 VAR_2->ops->pointer(VAR_2, VAR_3);
 FUNC_0("dsp consumed till %d total %d bytes\n",
  VAR_3->byte_offset, VAR_3->copied_total);
 if (VAR_2->direction == VAR_1)
  VAR_2->runtime->total_bytes_transferred = VAR_3->copied_total;
 else
  VAR_2->runtime->total_bytes_available = VAR_3->copied_total;
 return 0;
}
