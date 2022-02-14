
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {scalar_t__ size; scalar_t__ data; struct buffy* next; } ;
struct bufferchain {scalar_t__ size; scalar_t__ pos; struct buffy* first; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct bufferchain*) ;
 int FUNC_1 (char*,long,long) ;
 int FUNC_2 (char*,long,scalar_t__,long) ;
 int FUNC_3 (unsigned char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct bufferchain *VAR_0, unsigned char *VAR_1, ssize_t VAR_2)
{
 struct buffy *VAR_3 = VAR_0->first;
 ssize_t VAR_4 = 0;
 ssize_t VAR_5 = 0;
 if(VAR_0->size - VAR_0->pos < VAR_2) return FUNC_0(VAR_0);


 while(VAR_3 != ((void*)0) && (VAR_5 + VAR_3->size) <= VAR_0->pos)
 {
  VAR_5 += VAR_3->size;
  VAR_3 = VAR_3->next;
 }

 while(VAR_4 < VAR_2 && (VAR_3 != ((void*)0)))
 {
  ssize_t VAR_6 = VAR_0->pos - VAR_5;
  ssize_t VAR_7 = VAR_2 - VAR_4;
  if(VAR_7 > VAR_3->size - VAR_6) VAR_7 = VAR_3->size - VAR_6;





  FUNC_3(VAR_1+VAR_4, VAR_3->data+VAR_6, VAR_7);
  VAR_4 += VAR_7;
  VAR_0->pos += VAR_7;
  VAR_5 += VAR_3->size;
  VAR_3 = VAR_3->next;
 }




 return VAR_4;
}
