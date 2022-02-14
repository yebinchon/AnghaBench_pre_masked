
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct sfire_chip {size_t regidx; int shutdown; int intf_count; } ;


 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct sfire_chip*) ;
 int FUNC_3 (struct sfire_chip*) ;
 struct sfire_chip* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_3)
{
 struct sfire_chip *VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  VAR_4->intf_count--;
  if (!VAR_4->intf_count) {
   FUNC_0(&VAR_2);
   VAR_1[VAR_4->regidx] = ((void*)0);
   VAR_0[VAR_4->regidx] = ((void*)0);
   FUNC_1(&VAR_2);

   VAR_4->shutdown = 1;
   FUNC_2(VAR_4);
   FUNC_3(VAR_4);
  }
 }
}
