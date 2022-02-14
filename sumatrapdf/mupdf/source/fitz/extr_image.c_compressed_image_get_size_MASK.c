
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pixmap_image ;
typedef int fz_image ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_2__* buffer; int tile; } ;
typedef TYPE_3__ fz_compressed_image ;
struct TYPE_5__ {TYPE_1__* buffer; } ;
struct TYPE_4__ {int cap; } ;


 size_t FUNC_0 (int *,int ) ;

__attribute__((used)) static size_t
FUNC_1(fz_context *VAR_0, fz_image *VAR_1)
{
 fz_compressed_image *VAR_2 = (fz_compressed_image *)VAR_1;

 if (VAR_1 == ((void*)0))
  return 0;

 return sizeof(fz_pixmap_image) + FUNC_0(VAR_0, VAR_2->tile) + (VAR_2->buffer && VAR_2->buffer->buffer ? VAR_2->buffer->buffer->cap : 0);
}
