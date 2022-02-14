
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_stream {int list; int * substream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_usb_stream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_usb_stream *VAR_0)
{
 FUNC_0(&VAR_0->substream[0]);
 FUNC_0(&VAR_0->substream[1]);
 FUNC_2(&VAR_0->list);
 FUNC_1(VAR_0);
}
