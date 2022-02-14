
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
typedef TYPE_1__ stb__slot ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
   stb__slot *VAR_2 = (stb__slot *) VAR_0;
   stb__slot *VAR_3 = (stb__slot *) VAR_1;
   return VAR_2->count > VAR_3->count ? -1 : VAR_2->count < VAR_3->count;
}
