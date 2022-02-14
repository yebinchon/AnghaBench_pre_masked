
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_index {scalar_t__ fill; scalar_t__ step; scalar_t__ size; scalar_t__ grow_size; scalar_t__ next; scalar_t__* data; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (char*,void*) ;
 int FUNC_1 (char*,long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct frame_index*) ;
 scalar_t__ FUNC_3 (struct frame_index*,scalar_t__) ;
 int FUNC_4 (struct frame_index*) ;

void FUNC_5(struct frame_index *VAR_0, off_t VAR_1)
{
 FUNC_1("wanting to add to fill %lu, step %lu, size %lu", (unsigned long)VAR_0->fill, (unsigned long)VAR_0->step, (unsigned long)VAR_0->size);
 if(VAR_0->fill == VAR_0->size)
 {

  off_t VAR_2 = VAR_0->fill*VAR_0->step;

  if( !(VAR_0->grow_size && FUNC_3(VAR_0, VAR_0->size+VAR_0->grow_size)==0) )
  FUNC_4(VAR_0);


  if(VAR_0->next != VAR_2) return;
 }

 if(VAR_0->fill < VAR_0->size)
 {
  FUNC_0("adding to index at %p", (void*)(VAR_0->data+VAR_0->fill));
  VAR_0->data[VAR_0->fill] = VAR_1;
  ++VAR_0->fill;
  VAR_0->next = FUNC_2(VAR_0);
  FUNC_1("added pos %li to index with fill %lu and step %lu", (long) VAR_1, (unsigned long)VAR_0->fill, (unsigned long)VAR_0->step);
 }
}
