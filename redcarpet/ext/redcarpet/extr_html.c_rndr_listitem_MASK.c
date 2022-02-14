
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t size; char* data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,char*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct buf *VAR_0, const struct buf *VAR_1, int VAR_2, void *VAR_3)
{
 FUNC_0(VAR_0, "<li>");
 if (VAR_1) {
  size_t VAR_4 = VAR_1->size;
  while (VAR_4 && VAR_1->data[VAR_4 - 1] == '\n')
   VAR_4--;

  FUNC_1(VAR_0, VAR_1->data, VAR_4);
 }
 FUNC_0(VAR_0, "</li>\n");
}
