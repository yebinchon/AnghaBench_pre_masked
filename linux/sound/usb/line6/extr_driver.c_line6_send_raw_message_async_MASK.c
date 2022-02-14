
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int dummy; } ;
struct urb {int dummy; } ;
struct message {char const* buffer; int size; scalar_t__ done; struct usb_line6* line6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct message*) ;
 struct message* FUNC_1 (int,int ) ;
 int FUNC_2 (struct message*,struct urb*) ;
 struct urb* FUNC_3 (int ,int ) ;

int FUNC_4(struct usb_line6 *VAR_2, const char *VAR_3,
     int VAR_4)
{
 struct message *VAR_5;
 struct urb *VAR_6;


 VAR_5 = FUNC_1(sizeof(struct message), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;


 VAR_6 = FUNC_3(0, VAR_1);

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }


 VAR_5->line6 = VAR_2;
 VAR_5->buffer = VAR_3;
 VAR_5->size = VAR_4;
 VAR_5->done = 0;


 return FUNC_2(VAR_5, VAR_6);
}
