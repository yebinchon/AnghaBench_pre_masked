
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int dummy; } ;
struct buf {scalar_t__ size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 scalar_t__ FUNC_1 (struct html_renderopt*) ;
 int FUNC_2 (struct buf*,int ,scalar_t__) ;
 int FUNC_3 (struct buf*,char) ;
 int FUNC_4 (struct buf*,char*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_0, const struct buf *VAR_1, void *VAR_2)
{
 struct html_renderopt *VAR_3 = VAR_2;

 if (VAR_0->size) FUNC_3(VAR_0, '\n');

 FUNC_0(VAR_0, "<div class=\"footnotes\">\n");
 FUNC_4(VAR_0, FUNC_1(VAR_3) ? "<hr/>\n" : "<hr>\n");
 FUNC_0(VAR_0, "<ol>\n");

 if (VAR_1)
  FUNC_2(VAR_0, VAR_1->data, VAR_1->size);

 FUNC_0(VAR_0, "\n</ol>\n</div>\n");
}
