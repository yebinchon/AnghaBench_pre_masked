
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {int max_chapters; int* pages_in_chapter; } ;
typedef TYPE_1__ epub_accelerator ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, epub_accelerator *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_chapters; VAR_2++)
  VAR_1->pages_in_chapter[VAR_2] = -1;
}
