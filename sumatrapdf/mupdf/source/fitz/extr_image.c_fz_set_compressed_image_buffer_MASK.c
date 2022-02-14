
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {scalar_t__ get_pixmap; } ;
struct TYPE_5__ {int * buffer; TYPE_1__ super; } ;
typedef TYPE_2__ fz_compressed_image ;
typedef int fz_compressed_buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void FUNC_1(fz_context *VAR_1, fz_compressed_image *VAR_2, fz_compressed_buffer *VAR_3)
{
 FUNC_0(VAR_2 != ((void*)0) && VAR_2->super.get_pixmap == VAR_0);
 ((fz_compressed_image *)VAR_2)->buffer = VAR_3;
}
