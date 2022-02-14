
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {size_t realsize; int * next; scalar_t__ size; int * data; } ;


 int FUNC_0 (struct buffy*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static struct buffy* FUNC_2(size_t VAR_0, size_t VAR_1)
{
 struct buffy *VAR_2;
 VAR_2 = FUNC_1(sizeof(struct buffy));
 if(VAR_2 == ((void*)0)) return ((void*)0);

 VAR_2->realsize = VAR_0 > VAR_1 ? VAR_0 : VAR_1;
 VAR_2->data = FUNC_1(VAR_2->realsize);
 if(VAR_2->data == ((void*)0))
 {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 VAR_2->size = 0;
 VAR_2->next = ((void*)0);
 return VAR_2;
}
