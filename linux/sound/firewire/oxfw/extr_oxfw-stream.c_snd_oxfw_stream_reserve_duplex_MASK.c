
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw_stream_formation {unsigned int rate; unsigned int pcm; } ;
struct amdtp_stream {int dummy; } ;
struct snd_oxfw {scalar_t__ substreams_count; int in_conn; struct amdtp_stream tx_stream; scalar_t__ has_output; struct amdtp_stream rx_stream; TYPE_1__* unit; int out_conn; int domain; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_oxfw*,struct amdtp_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct snd_oxfw*,struct amdtp_stream*) ;
 int FUNC_6 (struct snd_oxfw*,struct amdtp_stream*,unsigned int,unsigned int) ;
 int FUNC_7 (struct snd_oxfw*,int,struct snd_oxfw_stream_formation*) ;

int FUNC_8(struct snd_oxfw *VAR_2,
       struct amdtp_stream *VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct snd_oxfw_stream_formation VAR_6;
 enum avc_general_plug_dir VAR_7;
 int VAR_8;



 VAR_8 = FUNC_1(VAR_2, &VAR_2->rx_stream);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_2->has_output) {
  VAR_8 = FUNC_1(VAR_2, &VAR_2->tx_stream);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_3 == &VAR_2->tx_stream)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 VAR_8 = FUNC_7(VAR_2, VAR_7, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_4 == 0) {
  VAR_4 = VAR_6.rate;
  VAR_5 = VAR_6.pcm;
 }
 if (VAR_6.rate != VAR_4 || VAR_6.pcm != VAR_5) {
  FUNC_0(&VAR_2->domain);

  FUNC_2(&VAR_2->in_conn);
  FUNC_3(&VAR_2->in_conn);

  if (VAR_2->has_output) {
   FUNC_2(&VAR_2->out_conn);
   FUNC_3(&VAR_2->out_conn);
  }
 }

 if (VAR_2->substreams_count == 0 ||
     VAR_6.rate != VAR_4 || VAR_6.pcm != VAR_5) {
  VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_8 < 0) {
   FUNC_4(&VAR_2->unit->device,
    "fail to set stream format: %d\n", VAR_8);
   return VAR_8;
  }

  VAR_8 = FUNC_5(VAR_2, &VAR_2->rx_stream);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_2->has_output) {
   VAR_8 = FUNC_5(VAR_2, &VAR_2->tx_stream);
   if (VAR_8 < 0) {
    FUNC_3(&VAR_2->in_conn);
    return VAR_8;
   }
  }
 }

 return 0;
}
