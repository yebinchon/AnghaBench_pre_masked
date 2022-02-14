
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nesting_bounds; int current_level; int level_offset; } ;
struct html_renderopt {int flags; TYPE_1__ toc_data; } ;
struct buf {int size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*,char*) ;
 int FUNC_2 (struct buf*,int ,int ) ;
 int FUNC_3 (struct buf*,int ,int ) ;
 int FUNC_4 (struct buf*,struct buf const*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_1, const struct buf *VAR_2, int VAR_3, void *VAR_4)
{
 struct html_renderopt *VAR_5 = VAR_4;

 if (VAR_3 >= VAR_5->toc_data.nesting_bounds[0] &&
     VAR_3 <= VAR_5->toc_data.nesting_bounds[1]) {


  if (VAR_5->toc_data.current_level == 0)
   VAR_5->toc_data.level_offset = VAR_3 - 1;

  VAR_3 -= VAR_5->toc_data.level_offset;

  if (VAR_3 > VAR_5->toc_data.current_level) {
   while (VAR_3 > VAR_5->toc_data.current_level) {
    FUNC_0(VAR_1, "<ul>\n<li>\n");
    VAR_5->toc_data.current_level++;
   }
  } else if (VAR_3 < VAR_5->toc_data.current_level) {
   FUNC_0(VAR_1, "</li>\n");
   while (VAR_3 < VAR_5->toc_data.current_level) {
    FUNC_0(VAR_1, "</ul>\n</li>\n");
    VAR_5->toc_data.current_level--;
   }
   FUNC_0(VAR_1,"<li>\n");
  } else {
   FUNC_0(VAR_1,"</li>\n<li>\n");
  }

  FUNC_1(VAR_1, "<a href=\"#");
  FUNC_4(VAR_1, VAR_2);
  FUNC_0(VAR_1, "\">");

  if (VAR_2) {
   if (VAR_5->flags & VAR_0)
    FUNC_3(VAR_1, VAR_2->data, VAR_2->size);
   else
    FUNC_2(VAR_1, VAR_2->data, VAR_2->size);
  }

  FUNC_0(VAR_1, "</a>\n");
 }
}
