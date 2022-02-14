
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct cygnus_aio_port {int fsync_width; } ;


 int VAR_0 ;
 struct cygnus_aio_port* FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct cygnus_aio_port *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_2 > 0) && (VAR_2 < 256)) {
  VAR_3->fsync_width = VAR_2;
  return 0;
 } else {
  return -VAR_0;
 }
}
