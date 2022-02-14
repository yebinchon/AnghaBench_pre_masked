
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 struct snd_seq_client** VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static struct snd_seq_client *FUNC_1(int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0) {
  FUNC_0("ALSA: seq: oops. Trying to get pointer to client %d\n",
      VAR_2);
  return ((void*)0);
 }
 return VAR_1[VAR_2];
}
