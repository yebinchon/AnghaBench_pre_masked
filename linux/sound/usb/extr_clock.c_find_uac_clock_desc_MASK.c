
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_host_interface {int extralen; int extra; } ;


 void* FUNC_0 (int ,int ,void*,int ) ;

__attribute__((used)) static void *FUNC_1(struct usb_host_interface *VAR_0, int VAR_1,
     bool (*VAR_2)(void *, int), u8 VAR_3)
{
 void *VAR_4 = ((void*)0);

 while ((VAR_4 = FUNC_0(VAR_0->extra, VAR_0->extralen,
          VAR_4, VAR_3))) {
  if (VAR_2(VAR_4, VAR_1))
   return VAR_4;
 }

 return ((void*)0);
}
