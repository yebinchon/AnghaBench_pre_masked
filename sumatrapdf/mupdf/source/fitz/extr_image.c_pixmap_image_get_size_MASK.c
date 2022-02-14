
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tile; } ;
typedef TYPE_1__ fz_pixmap_image ;
typedef int fz_image ;
typedef int fz_context ;


 size_t FUNC_0 (int *,int ) ;

__attribute__((used)) static size_t
FUNC_1(fz_context *VAR_0, fz_image *VAR_1)
{
 fz_pixmap_image *VAR_2 = (fz_pixmap_image *)VAR_1;

 if (VAR_1 == ((void*)0))
  return 0;

 return sizeof(fz_pixmap_image) + FUNC_0(VAR_0, VAR_2->tile);
}
