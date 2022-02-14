
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {scalar_t__ size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct html_renderopt*) ;
 int FUNC_2 (struct buf*,char*) ;
 int FUNC_3 (struct buf*,int ,scalar_t__) ;
 int FUNC_4 (struct buf*,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct buf *VAR_1, const struct buf *VAR_2, const struct buf *VAR_3, const struct buf *VAR_4, void *VAR_5)
{
 struct html_renderopt *VAR_6 = VAR_5;

 if (VAR_2 != ((void*)0) && (VAR_6->flags & VAR_0) != 0 && !FUNC_5(VAR_2->data, VAR_2->size))
  return 0;

 FUNC_0(VAR_1, "<img src=\"");

 if (VAR_2 && VAR_2->size)
  FUNC_3(VAR_1, VAR_2->data, VAR_2->size);

 FUNC_0(VAR_1, "\" alt=\"");

 if (VAR_4 && VAR_4->size)
  FUNC_4(VAR_1, VAR_4->data, VAR_4->size);

 if (VAR_3 && VAR_3->size) {
  FUNC_0(VAR_1, "\" title=\"");
  FUNC_4(VAR_1, VAR_3->data, VAR_3->size);
 }

 FUNC_2(VAR_1, FUNC_1(VAR_6) ? "\"/>" : "\">");
 return 1;
}
