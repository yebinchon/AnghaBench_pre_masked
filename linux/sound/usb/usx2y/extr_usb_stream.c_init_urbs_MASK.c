
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stream_packet {int dummy; } ;
struct usb_stream_kernel {char* write_page; void** outurb; void** inurb; int n_o_ps; struct usb_stream* s; } ;
struct usb_stream {int inpackets; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_stream_kernel*,unsigned int,void**,char*,struct usb_device*,int) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_stream_kernel *VAR_4, unsigned VAR_5,
        struct usb_device *VAR_6, int VAR_7, int VAR_8)
{
 struct usb_stream *VAR_9 = VAR_4->s;
 char *VAR_10 = (char *)VAR_9 + sizeof(*VAR_9) +
     sizeof(struct usb_stream_packet) *
     VAR_9->inpackets;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  VAR_4->inurb[VAR_11] = FUNC_1(VAR_4->n_o_ps, VAR_2);
  if (!VAR_4->inurb[VAR_11])
   return -VAR_1;

  VAR_4->outurb[VAR_11] = FUNC_1(VAR_4->n_o_ps, VAR_2);
  if (!VAR_4->outurb[VAR_11])
   return -VAR_1;
 }

 if (FUNC_0(VAR_4, VAR_5, VAR_4->inurb, VAR_10, VAR_6, VAR_7) ||
     FUNC_0(VAR_4, VAR_5, VAR_4->outurb, VAR_4->write_page, VAR_6,
      VAR_8))
  return -VAR_0;

 return 0;
}
