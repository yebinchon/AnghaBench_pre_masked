
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {scalar_t__ size; scalar_t__ data; struct buffy* next; } ;
struct bufferchain {scalar_t__ pos; scalar_t__ fileoff; scalar_t__ size; scalar_t__ firstpos; struct buffy* first; int * last; } ;


 int FUNC_0 (struct bufferchain*,struct buffy*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned long,unsigned long) ;
 int FUNC_3 (char*,void*,long,long,long,long) ;

__attribute__((used)) static void FUNC_4(struct bufferchain *VAR_0)
{
 struct buffy *VAR_1 = VAR_0->first;


 if(VAR_1) FUNC_2("bc_forget: block %lu pos %lu", (unsigned long)VAR_1->size, (unsigned long)VAR_0->pos);
 else FUNC_1("forget with nothing there!");

 while(VAR_1 != ((void*)0) && VAR_0->pos >= VAR_1->size)
 {
  struct buffy *VAR_2 = VAR_1->next;
  if(VAR_2 == ((void*)0)) VAR_0->last = ((void*)0);
  VAR_0->fileoff += VAR_1->size;
  VAR_0->pos -= VAR_1->size;
  VAR_0->size -= VAR_1->size;

  FUNC_3("bc_forget: forgot %p with %lu, pos=%li, size=%li, fileoff=%li", (void*)VAR_1->data, (long)VAR_1->size, (long)VAR_0->pos, (long)VAR_0->size, (long)VAR_0->fileoff);

  FUNC_0(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_0->first = VAR_1;
 VAR_0->firstpos = VAR_0->pos;
}
