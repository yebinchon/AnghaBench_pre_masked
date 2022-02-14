
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca_midi {scalar_t__ port; scalar_t__ dev_id; } ;
struct snd_ca0106 {int dummy; } ;


 scalar_t__ FUNC_0 (struct snd_ca0106*,scalar_t__,int ) ;

__attribute__((used)) static unsigned char FUNC_1(struct snd_ca_midi *VAR_0, int VAR_1)
{
 return (unsigned char)FUNC_0((struct snd_ca0106 *)(VAR_0->dev_id),
        VAR_0->port + VAR_1, 0);
}
