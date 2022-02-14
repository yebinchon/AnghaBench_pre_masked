
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_stream {int dummy; } ;
struct snd_pmac {struct pmac_stream capture; struct pmac_stream playback; } ;




 int FUNC_0 () ;

__attribute__((used)) static struct pmac_stream *FUNC_1(struct snd_pmac *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0->playback;
 case 129:
  return &VAR_0->capture;
 default:
  FUNC_0();
  return ((void*)0);
 }
}
