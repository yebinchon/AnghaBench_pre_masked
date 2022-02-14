
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {size_t size; char* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,char*,size_t) ;
 int FUNC_1 (struct buf*,char) ;
 scalar_t__ FUNC_2 (char*,size_t,char*) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_1, const struct buf *VAR_2, void *VAR_3)
{
 size_t VAR_4, VAR_5;
 struct html_renderopt *VAR_6 = VAR_3;

 if (!VAR_2)
  return;

 VAR_5 = VAR_2->size;
 while (VAR_5 > 0 && VAR_2->data[VAR_5 - 1] == '\n')
  VAR_5--;

 for (VAR_4 = 0; VAR_4 < VAR_5 && VAR_2->data[VAR_4] == '\n'; ++VAR_4)

 if (VAR_4 >= VAR_5)
  return;


 if ((VAR_6->flags & VAR_0) != 0 &&
  FUNC_2(VAR_2->data, VAR_5, "style"))
  return;

 if (VAR_1->size)
  FUNC_1(VAR_1, '\n');

 FUNC_0(VAR_1, VAR_2->data + VAR_4, VAR_5 - VAR_4);
 FUNC_1(VAR_1, '\n');
}
