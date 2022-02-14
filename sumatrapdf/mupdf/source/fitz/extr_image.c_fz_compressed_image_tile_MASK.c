
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pixmap ;
typedef int fz_context ;
struct TYPE_4__ {scalar_t__ get_pixmap; } ;
struct TYPE_5__ {int * tile; TYPE_1__ super; } ;
typedef TYPE_2__ fz_compressed_image ;


 scalar_t__ VAR_0 ;

fz_pixmap *FUNC_0(fz_context *VAR_1, fz_compressed_image *VAR_2)
{
 if (VAR_2 == ((void*)0) || VAR_2->super.get_pixmap != VAR_0)
  return ((void*)0);
 return ((fz_compressed_image *)VAR_2)->tile;
}
