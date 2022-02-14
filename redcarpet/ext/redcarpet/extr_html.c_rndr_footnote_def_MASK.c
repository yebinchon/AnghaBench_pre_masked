
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t size; char* data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char*,unsigned int) ;
 int FUNC_2 (struct buf*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_0, const struct buf *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5 = 0;


 if (VAR_1) {
  while ((VAR_4+3) < VAR_1->size) {
   if (VAR_1->data[VAR_4++] != '<') continue;
   if (VAR_1->data[VAR_4++] != '/') continue;
   if (VAR_1->data[VAR_4++] != 'p' && VAR_1->data[VAR_4] != 'P') continue;
   if (VAR_1->data[VAR_4] != '>') continue;
   VAR_4 -= 3;
   VAR_5 = 1;
   break;
  }
 }

 FUNC_1(VAR_0, "\n<li id=\"fn%d\">\n", VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_0, VAR_1->data, VAR_4);
  FUNC_1(VAR_0, "&nbsp;<a href=\"#fnref%d\">&#8617;</a>", VAR_2);
  FUNC_2(VAR_0, VAR_1->data + VAR_4, VAR_1->size - VAR_4);
 } else if (VAR_1) {
  FUNC_2(VAR_0, VAR_1->data, VAR_1->size);
 }
 FUNC_0(VAR_0, "</li>\n");
}
