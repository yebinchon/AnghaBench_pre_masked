
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* nesting_bounds; } ;
struct html_renderopt {int flags; TYPE_1__ toc_data; } ;
struct buf {scalar_t__ size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*,char*,int) ;
 int FUNC_2 (struct buf*,int ,scalar_t__) ;
 int FUNC_3 (struct buf*,char) ;
 int FUNC_4 (struct buf*,struct buf const*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_1, const struct buf *VAR_2, int VAR_3, void *VAR_4)
{
 struct html_renderopt *VAR_5 = VAR_4;

 if (VAR_1->size)
  FUNC_3(VAR_1, '\n');

 if ((VAR_5->flags & VAR_0) && VAR_3 >= VAR_5->toc_data.nesting_bounds[0] &&
      VAR_3 <= VAR_5->toc_data.nesting_bounds[1]) {
  FUNC_1(VAR_1, "<h%d id=\"", VAR_3);
  FUNC_4(VAR_1, VAR_2);
  FUNC_0(VAR_1, "\">");
 }
 else
  FUNC_1(VAR_1, "<h%d>", VAR_3);

 if (VAR_2) FUNC_2(VAR_1, VAR_2->data, VAR_2->size);
 FUNC_1(VAR_1, "</h%d>\n", VAR_3);
}
