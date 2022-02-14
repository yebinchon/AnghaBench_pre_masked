
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** fonts; } ;
struct TYPE_4__ {scalar_t__ nfallbacks; int* fallbacks; } ;
typedef TYPE_1__ FONSfont ;
typedef TYPE_2__ FONScontext ;


 scalar_t__ VAR_0 ;

int FUNC_0(FONScontext* VAR_1, int VAR_2, int VAR_3)
{
 FONSfont* VAR_4 = VAR_1->fonts[VAR_2];
 if (VAR_4->nfallbacks < VAR_0) {
  VAR_4->fallbacks[VAR_4->nfallbacks++] = VAR_3;
  return 1;
 }
 return 0;
}
