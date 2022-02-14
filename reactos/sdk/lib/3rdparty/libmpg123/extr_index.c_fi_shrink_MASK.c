
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {int fill; int step; int next; int * data; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (struct frame_index*) ;

__attribute__((used)) static void FUNC_2(struct frame_index *VAR_0)
{
 if(VAR_0->fill < 2) return;
 else
 {
  size_t VAR_1;
  FUNC_0("shrink index with fill %lu and step %lu", (unsigned long)VAR_0->fill, (unsigned long)VAR_0->step);
  VAR_0->step *= 2;
  VAR_0->fill /= 2;

  for(VAR_1 = 0; VAR_1 < VAR_0->fill; ++VAR_1)
  VAR_0->data[VAR_1] = VAR_0->data[2*VAR_1];
 }

 VAR_0->next = FUNC_1(VAR_0);
}
