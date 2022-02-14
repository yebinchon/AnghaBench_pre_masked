
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ get_pixmap; } ;
typedef TYPE_1__ fz_image ;
typedef int fz_context ;
struct TYPE_5__ {int * buffer; } ;
typedef TYPE_2__ fz_compressed_image ;
typedef int fz_compressed_buffer ;


 scalar_t__ VAR_0 ;

fz_compressed_buffer *FUNC_0(fz_context *VAR_1, fz_image *VAR_2)
{
 if (VAR_2 == ((void*)0) || VAR_2->get_pixmap != VAR_0)
  return ((void*)0);
 return ((fz_compressed_image *)VAR_2)->buffer;
}
