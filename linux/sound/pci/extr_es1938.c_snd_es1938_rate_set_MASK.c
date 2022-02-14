
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ rate_num; int rate_den; int rate; } ;
struct es1938 {int dummy; } ;
struct TYPE_2__ {scalar_t__ num; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct es1938*,int,unsigned int) ;
 int FUNC_1 (struct es1938*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct es1938 *VAR_2,
    struct snd_pcm_substream *VAR_3,
    int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 struct snd_pcm_runtime *VAR_7 = VAR_3->runtime;
 if (VAR_7->rate_num == VAR_1[0].num)
  VAR_5 = 128 - VAR_7->rate_den;
 else
  VAR_5 = 256 - VAR_7->rate_den;


 VAR_6 = 256 - 7160000*20/(8*82*VAR_7->rate);

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2, 0x70, VAR_5);
  FUNC_0(VAR_2, 0x72, VAR_6);
 } else {
  FUNC_1(VAR_2, 0xA1, VAR_5);
  FUNC_1(VAR_2, 0xA2, VAR_6);
 }
}
