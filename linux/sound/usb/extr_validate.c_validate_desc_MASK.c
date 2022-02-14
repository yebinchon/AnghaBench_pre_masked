
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_desc_validator {char type; int protocol; int (* func ) (unsigned char*,struct usb_desc_validator const*) ;unsigned char size; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char*,struct usb_desc_validator const*) ;

__attribute__((used)) static bool FUNC_1(unsigned char *VAR_2, int VAR_3,
     const struct usb_desc_validator *VAR_4)
{
 if (VAR_2[1] != VAR_1)
  return 1;

 for (; VAR_4->type; VAR_4++) {
  if (VAR_4->type == VAR_2[2] &&
      (VAR_4->protocol == VAR_0 ||
       VAR_4->protocol == VAR_3)) {
   if (VAR_4->func)
    return VAR_4->func(VAR_2, VAR_4);

   return VAR_2[0] >= VAR_4->size;
  }
 }

 return 1;
}
