
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_stream {int * substream; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct snd_usb_stream *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->substream[0], VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(&VAR_1->substream[1], VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
