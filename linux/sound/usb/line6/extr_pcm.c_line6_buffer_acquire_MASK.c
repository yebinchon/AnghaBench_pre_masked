
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_line6_pcm {int max_packet_size_out; int max_packet_size_in; TYPE_1__* line6; } ;
struct line6_pcm_stream {scalar_t__ buffer; int opened; } ;
struct TYPE_2__ {int iso_buffers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int const) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_line6_pcm *VAR_4,
    struct line6_pcm_stream *VAR_5, int VAR_6, int VAR_7)
{
 const int VAR_8 =
  (VAR_6 == VAR_3) ?
   VAR_4->max_packet_size_out :
   VAR_4->max_packet_size_in;


 if (!FUNC_2(VAR_7, &VAR_5->opened) && !VAR_5->buffer) {
  VAR_5->buffer =
   FUNC_1(FUNC_0(VAR_4->line6->iso_buffers,
         VAR_2, VAR_8),
    VAR_1);
  if (!VAR_5->buffer)
   return -VAR_0;
 }
 return 0;
}
