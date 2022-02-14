
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct isight* private_data; } ;
struct isight {int unit; int buffer; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct isight *VAR_1 = VAR_0->private_data;

 FUNC_0(&VAR_1->buffer, VAR_1->unit);

 return 0;
}
