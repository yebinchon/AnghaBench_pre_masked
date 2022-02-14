
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int snd_pcm_format_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

ssize_t FUNC_1(snd_pcm_format_t VAR_1, size_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return -VAR_0;
 return VAR_2 * VAR_3 / 8;
}
