
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_compr_stream {scalar_t__ direction; TYPE_1__* runtime; } ;
struct snd_compr_avail {size_t avail; int tstamp; } ;
struct TYPE_2__ {scalar_t__ total_bytes_available; scalar_t__ state; size_t buffer_size; scalar_t__ total_bytes_transferred; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_compr_avail*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct snd_compr_stream*,int *) ;

__attribute__((used)) static size_t FUNC_3(struct snd_compr_stream *VAR_2,
  struct snd_compr_avail *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 FUNC_2(VAR_2, &VAR_3->tstamp);


 if (VAR_2->runtime->total_bytes_available == 0 &&
   VAR_2->runtime->state == VAR_0 &&
   VAR_2->direction == VAR_1) {
  FUNC_1("detected init and someone forgot to do a write\n");
  return VAR_2->runtime->buffer_size;
 }
 FUNC_1("app wrote %lld, DSP consumed %lld\n",
   VAR_2->runtime->total_bytes_available,
   VAR_2->runtime->total_bytes_transferred);
 if (VAR_2->runtime->total_bytes_available ==
    VAR_2->runtime->total_bytes_transferred) {
  if (VAR_2->direction == VAR_1) {
   FUNC_1("both pointers are same, returning full avail\n");
   return VAR_2->runtime->buffer_size;
  } else {
   FUNC_1("both pointers are same, returning no avail\n");
   return 0;
  }
 }

 VAR_3->avail = VAR_2->runtime->total_bytes_available -
   VAR_2->runtime->total_bytes_transferred;
 if (VAR_2->direction == VAR_1)
  VAR_3->avail = VAR_2->runtime->buffer_size - VAR_3->avail;

 FUNC_1("ret avail as %lld\n", VAR_3->avail);
 return VAR_3->avail;
}
