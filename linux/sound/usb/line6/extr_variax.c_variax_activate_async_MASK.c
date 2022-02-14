
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int variax_activate ;
struct usb_line6_variax {int* buffer_activate; int line6; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static void FUNC_1(struct usb_line6_variax *VAR_1, int VAR_2)
{
 VAR_1->buffer_activate[VAR_0] = VAR_2;
 FUNC_0(&VAR_1->line6, VAR_1->buffer_activate,
         sizeof(variax_activate));
}
