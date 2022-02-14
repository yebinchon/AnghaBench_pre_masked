
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct snd_card {int dummy; } ;
struct hiface_chip {struct snd_card* card; } ;


 int FUNC_0 (struct hiface_chip*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 struct hiface_chip* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct hiface_chip *VAR_1;
 struct snd_card *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1)
  return;

 VAR_2 = VAR_1->card;


 FUNC_1(VAR_2);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
}
