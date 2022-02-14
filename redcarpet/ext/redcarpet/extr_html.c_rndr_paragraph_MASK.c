
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {size_t size; char* data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*,char*,size_t) ;
 int FUNC_2 (struct buf*,char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (struct buf*,void*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_1, const struct buf *VAR_2, void *VAR_3)
{
 struct html_renderopt *VAR_4 = VAR_3;
 size_t VAR_5 = 0;

 if (VAR_1->size) FUNC_2(VAR_1, '\n');

 if (!VAR_2 || !VAR_2->size)
  return;

 while (VAR_5 < VAR_2->size && FUNC_3(VAR_2->data[VAR_5])) VAR_5++;

 if (VAR_5 == VAR_2->size)
  return;

 FUNC_0(VAR_1, "<p>");
 if (VAR_4->flags & VAR_0) {
  size_t VAR_6;
  while (VAR_5 < VAR_2->size) {
   VAR_6 = VAR_5;
   while (VAR_5 < VAR_2->size && VAR_2->data[VAR_5] != '\n')
    VAR_5++;

   if (VAR_5 > VAR_6)
    FUNC_1(VAR_1, VAR_2->data + VAR_6, VAR_5 - VAR_6);





   if (VAR_5 >= VAR_2->size - 1)
    break;

   FUNC_4(VAR_1, VAR_3);
   VAR_5++;
  }
 } else {
  FUNC_1(VAR_1, &VAR_2->data[VAR_5], VAR_2->size - VAR_5);
 }
 FUNC_0(VAR_1, "</p>\n");
}
