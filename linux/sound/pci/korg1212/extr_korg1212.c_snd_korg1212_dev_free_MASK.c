
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {int dummy; } ;
struct snd_device {struct snd_korg1212* device_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_korg1212*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_0)
{
        struct snd_korg1212 *VAR_1 = VAR_0->device_data;
        FUNC_0("K1212_DEBUG: Freeing device\n");
 return FUNC_1(VAR_1);
}
