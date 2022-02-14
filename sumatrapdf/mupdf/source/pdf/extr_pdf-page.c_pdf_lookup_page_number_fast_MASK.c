
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rev_page_count; TYPE_1__* rev_page_map; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;
struct TYPE_4__ {int object; int page; } ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_1->rev_page_count - 1;
 while (VAR_3 <= VAR_4)
 {
  int VAR_5 = (VAR_3 + VAR_4) >> 1;
  int VAR_6 = VAR_2 - VAR_1->rev_page_map[VAR_5].object;
  if (VAR_6 < 0)
   VAR_4 = VAR_5 - 1;
  else if (VAR_6 > 0)
   VAR_3 = VAR_5 + 1;
  else
   return VAR_1->rev_page_map[VAR_5].page;
 }
 return -1;
}
