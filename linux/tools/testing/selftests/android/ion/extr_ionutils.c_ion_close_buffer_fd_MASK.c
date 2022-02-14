
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_buffer_info {scalar_t__ buffd; scalar_t__ ionfd; int buflen; int buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct ion_buffer_info *VAR_0)
{
 if (VAR_0) {

  FUNC_1(VAR_0->buffer, VAR_0->buflen);

  if (VAR_0->buffd > 0)
   FUNC_0(VAR_0->buffd);

  if (VAR_0->ionfd > 0)
   FUNC_0(VAR_0->ionfd);
 }
}
