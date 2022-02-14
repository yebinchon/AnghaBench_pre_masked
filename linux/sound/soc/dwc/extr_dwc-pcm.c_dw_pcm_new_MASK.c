
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pcm; } ;
struct TYPE_2__ {size_t buffer_bytes_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_3)
{
 size_t VAR_4 = VAR_2.buffer_bytes_max;

 FUNC_1(VAR_3->pcm,
   VAR_1,
   FUNC_0(VAR_0), VAR_4, VAR_4);
 return 0;
}
