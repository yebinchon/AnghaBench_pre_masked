
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int flags; int start; unsigned int size; int lost_events; scalar_t__ next; scalar_t__ index; void* data; scalar_t__ curr; int timestamp; void* subbuffer; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (struct kbuffer*) ;
 int FUNC_1 (struct kbuffer*,void*) ;
 void* FUNC_2 (struct kbuffer*,void*) ;

int FUNC_3(struct kbuffer *VAR_4, void *VAR_5)
{
 unsigned long long VAR_6;
 void *VAR_7 = VAR_5;

 if (!VAR_4 || !VAR_5)
  return -1;

 VAR_4->subbuffer = VAR_5;

 VAR_4->timestamp = FUNC_1(VAR_4, VAR_7);
 VAR_7 += 8;

 VAR_4->curr = 0;

 if (VAR_4->flags & VAR_1)
  VAR_4->start = 16;
 else
  VAR_4->start = 12;

 VAR_4->data = VAR_5 + VAR_4->start;

 VAR_6 = FUNC_2(VAR_4, VAR_7);
 VAR_4->size = (unsigned int)VAR_6 & VAR_0;

 if (VAR_6 & VAR_2) {
  if (VAR_6 & VAR_3) {
   VAR_7 = VAR_4->data + VAR_4->size;
   VAR_4->lost_events = FUNC_2(VAR_4, VAR_7);
  } else
   VAR_4->lost_events = -1;
 } else
  VAR_4->lost_events = 0;

 VAR_4->index = 0;
 VAR_4->next = 0;

 FUNC_0(VAR_4);

 return 0;
}
