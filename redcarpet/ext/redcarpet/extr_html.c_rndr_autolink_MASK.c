
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; int (* link_attributes ) (struct buf*,struct buf const*,void*) ;} ;
struct buf {scalar_t__ size; scalar_t__ data; } ;
typedef enum mkd_autolink { ____Placeholder_mkd_autolink } mkd_autolink ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct buf const*,char*) ;
 int FUNC_2 (struct buf*,char) ;
 int FUNC_3 (struct buf*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct buf*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (struct buf*,struct buf const*,void*) ;

__attribute__((used)) static int
FUNC_7(struct buf *VAR_2, const struct buf *VAR_3, enum mkd_autolink VAR_4, void *VAR_5)
{
 struct html_renderopt *VAR_6 = VAR_5;

 if (!VAR_3 || !VAR_3->size)
  return 0;

 if ((VAR_6->flags & VAR_0) != 0 &&
  !FUNC_5(VAR_3->data, VAR_3->size) &&
  VAR_4 != VAR_1)
  return 0;

 FUNC_0(VAR_2, "<a href=\"");
 if (VAR_4 == VAR_1)
  FUNC_0(VAR_2, "mailto:");
 FUNC_3(VAR_2, VAR_3->data, VAR_3->size);

 if (VAR_6->link_attributes) {
  FUNC_2(VAR_2, '\"');
  VAR_6->link_attributes(VAR_2, VAR_3, VAR_5);
  FUNC_2(VAR_2, '>');
 } else {
  FUNC_0(VAR_2, "\">");
 }






 if (FUNC_1(VAR_3, "mailto:") == 0) {
  FUNC_4(VAR_2, VAR_3->data + 7, VAR_3->size - 7);
 } else {
  FUNC_4(VAR_2, VAR_3->data, VAR_3->size);
 }

 FUNC_0(VAR_2, "</a>");

 return 1;
}
