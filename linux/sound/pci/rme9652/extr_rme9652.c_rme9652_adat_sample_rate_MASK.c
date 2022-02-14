
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_rme9652*,int ) ;
 scalar_t__ FUNC_1 (struct snd_rme9652*) ;

__attribute__((used)) static inline int FUNC_2(struct snd_rme9652 *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  return (FUNC_0(VAR_2, VAR_1) &
   VAR_0) ? 96000 : 88200;
 } else {
  return (FUNC_0(VAR_2, VAR_1) &
   VAR_0) ? 48000 : 44100;
 }
}
