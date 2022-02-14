
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_kernel {int i_urb; } ;
struct urb {struct usb_stream_kernel* context; } ;


 scalar_t__ FUNC_0 (struct usb_stream_kernel*,struct urb*) ;
 int FUNC_1 (struct usb_stream_kernel*,int ,struct urb*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct usb_stream_kernel *VAR_1 = VAR_0->context;
 if (FUNC_0(VAR_1, VAR_0))
  FUNC_1(VAR_1, VAR_1->i_urb, VAR_0);
}
