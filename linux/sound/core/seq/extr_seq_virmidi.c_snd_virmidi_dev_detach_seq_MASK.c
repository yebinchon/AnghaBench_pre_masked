
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int client; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct snd_virmidi_dev *VAR_0)
{
 if (VAR_0->client >= 0) {
  FUNC_0(VAR_0->client);
  VAR_0->client = -1;
 }
}
