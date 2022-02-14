
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct special_params {size_t dig_in_fmt; size_t dig_out_fmt; int is1814; } ;
struct snd_bebob {TYPE_4__* rx_stream_formations; TYPE_3__* tx_stream_formations; struct special_params* maudio_special_quirk; } ;
struct TYPE_8__ {unsigned int pcm; int midi; } ;
struct TYPE_7__ {unsigned int pcm; int midi; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct snd_bebob *VAR_3)
{
 static const unsigned int VAR_4[2][2][3] = {

  { { 6, 6, 4 },
    { 12, 8, 4 } },

  { { 10, 10, 2 },
    { 16, 12, 2 } }
 };
 struct special_params *VAR_5 = VAR_3->maudio_special_quirk;
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_2 - 1;
 if (!VAR_5->is1814)
  VAR_7 -= 2;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_3->tx_stream_formations[VAR_6 + 1].pcm =
   VAR_4[VAR_0][VAR_5->dig_in_fmt][VAR_6 / 2];
  VAR_3->tx_stream_formations[VAR_6 + 1].midi = 1;

  VAR_3->rx_stream_formations[VAR_6 + 1].pcm =
   VAR_4[VAR_1][VAR_5->dig_out_fmt][VAR_6 / 2];
  VAR_3->rx_stream_formations[VAR_6 + 1].midi = 1;
 }
}
