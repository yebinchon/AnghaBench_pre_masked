
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcd2000 {int card; int card_index; } ;


 int FUNC_0 (struct bcd2000*,struct usb_interface*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct bcd2000* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct bcd2000 *VAR_3 = FUNC_6(VAR_2);

 if (!VAR_3)
  return;

 FUNC_2(&VAR_0);


 FUNC_4(VAR_3->card);

 FUNC_0(VAR_3, VAR_2);

 FUNC_1(VAR_3->card_index, VAR_1);

 FUNC_5(VAR_3->card);

 FUNC_3(&VAR_0);
}
