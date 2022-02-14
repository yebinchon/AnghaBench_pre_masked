
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {unsigned char const* texData; TYPE_1__ params; } ;
typedef TYPE_2__ FONScontext ;



const unsigned char* FUNC_0(FONScontext* VAR_0, int* VAR_1, int* VAR_2)
{
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_0->params.width;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->params.height;
 return VAR_0->texData;
}
