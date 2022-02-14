
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t size; char* data; } ;


 int FUNC_0 (struct buf*,char*,size_t) ;
 int FUNC_1 (struct buf*,char) ;

__attribute__((used)) static void
FUNC_2(struct buf *VAR_0, struct buf *VAR_1)
{
 size_t VAR_2 = 0, VAR_3;
 while (VAR_2 < VAR_1->size) {
  VAR_3 = VAR_2;
  while (VAR_2 < VAR_1->size && VAR_1->data[VAR_2] != '\\')
   VAR_2++;

  if (VAR_2 > VAR_3)
   FUNC_0(VAR_0, VAR_1->data + VAR_3, VAR_2 - VAR_3);

  if (VAR_2 + 1 >= VAR_1->size)
   break;

  FUNC_1(VAR_0, VAR_1->data[VAR_2 + 1]);
  VAR_2 += 2;
 }
}
