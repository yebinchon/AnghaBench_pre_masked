
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {size_t size; size_t asize; struct buf** item; } ;
struct sd_markdown {struct stack* work_bufs; } ;
struct buf {scalar_t__ size; } ;


 struct buf* FUNC_0 (size_t const) ;
 int FUNC_1 (struct stack*,struct buf*) ;

__attribute__((used)) static inline struct buf *
FUNC_2(struct sd_markdown *VAR_0, int VAR_1)
{
 static const size_t VAR_2[2] = {256, 64};
 struct buf *VAR_3 = ((void*)0);
 struct stack *VAR_4 = &VAR_0->work_bufs[VAR_1];

 if (VAR_4->size < VAR_4->asize &&
  VAR_4->item[VAR_4->size] != ((void*)0)) {
  VAR_3 = VAR_4->item[VAR_4->size++];
  VAR_3->size = 0;
 } else {
  VAR_3 = FUNC_0(VAR_2[VAR_1]);
  FUNC_1(VAR_4, VAR_3);
 }

 return VAR_3;
}
