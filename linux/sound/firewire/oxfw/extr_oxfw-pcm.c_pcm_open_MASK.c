
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_oxfw* private_data; } ;
struct snd_oxfw {int rx_stream; int tx_stream; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_oxfw*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_oxfw*) ;
 int FUNC_4 (struct snd_oxfw*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct snd_oxfw *VAR_1 = VAR_0->private_data;
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0)
  goto end;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0)
  goto err_locked;





 if (FUNC_0(&VAR_1->tx_stream) ||
     FUNC_0(&VAR_1->rx_stream)) {
  VAR_2 = FUNC_2(VAR_0);
  if (VAR_2 < 0)
   goto end;
 }

 FUNC_5(VAR_0);
end:
 return VAR_2;
err_locked:
 FUNC_3(VAR_1);
 return VAR_2;
}
