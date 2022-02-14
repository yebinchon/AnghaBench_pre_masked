
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {int size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct buf *VAR_1, const struct buf *VAR_2, void *VAR_3)
{
 struct html_renderopt *VAR_4 = VAR_3;
 if (VAR_4->flags & VAR_0)
  FUNC_0(VAR_1, "<code class=\"prettyprint\">");
 else
  FUNC_0(VAR_1, "<code>");
 if (VAR_2) FUNC_1(VAR_1, VAR_2->data, VAR_2->size);
 FUNC_0(VAR_1, "</code>");
 return 1;
}
