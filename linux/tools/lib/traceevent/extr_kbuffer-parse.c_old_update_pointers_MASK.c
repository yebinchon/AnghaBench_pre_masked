
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int curr; int next; int size; int index; unsigned int timestamp; void* data; } ;





 unsigned long long VAR_0 ;
 int FUNC_0 (struct kbuffer*,void*) ;
 unsigned int FUNC_1 (struct kbuffer*,unsigned int) ;
 void* FUNC_2 (struct kbuffer*,void*) ;
 unsigned int FUNC_3 (struct kbuffer*,unsigned int) ;
 unsigned int FUNC_4 (struct kbuffer*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(struct kbuffer *VAR_1)
{
 unsigned long long VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 void *VAR_8 = VAR_1->data + VAR_1->curr;

 VAR_3 = FUNC_2(VAR_1, VAR_8);
 VAR_8 += 4;

 VAR_4 = FUNC_4(VAR_1, VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 VAR_6 = FUNC_3(VAR_1, VAR_3);

 switch (VAR_4) {
 case 130:
  VAR_1->next = VAR_1->size;
  return 0;

 case 129:
  VAR_2 = FUNC_2(VAR_1, VAR_8);
  VAR_2 <<= VAR_0;
  VAR_2 += VAR_6;
  VAR_6 = VAR_2;
  VAR_8 += 4;
  VAR_7 = 0;
  break;

 case 128:

  VAR_1->curr = VAR_1->size;
  VAR_1->next = VAR_1->size;
  VAR_1->index = VAR_1->size;
  return -1;
 default:
  if (VAR_5)
   VAR_7 = VAR_5 * 4;
  else {
   VAR_7 = FUNC_2(VAR_1, VAR_8);
   VAR_7 -= 4;
   VAR_8 += 4;
  }
  break;
 }

 VAR_1->timestamp += VAR_6;
 VAR_1->index = FUNC_0(VAR_1, VAR_8);
 VAR_1->next = VAR_1->index + VAR_7;

 return VAR_4;
}
