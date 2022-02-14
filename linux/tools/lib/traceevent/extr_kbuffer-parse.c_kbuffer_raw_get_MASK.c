
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer_raw_info {unsigned int type; unsigned long long delta; int length; void* next; } ;
struct kbuffer {int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (struct kbuffer*,void*) ;
 unsigned int FUNC_1 (struct kbuffer*,void*,void**,unsigned long long*,int*) ;

struct kbuffer_raw_info *
FUNC_2(struct kbuffer *VAR_2, void *VAR_3, struct kbuffer_raw_info *VAR_4)
{
 unsigned long long VAR_5;
 unsigned long long VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;
 void *VAR_11 = VAR_4->next;

 if (!VAR_2 || !VAR_3)
  return ((void*)0);

 if (VAR_2->flags & VAR_1)
  VAR_9 = 16;
 else
  VAR_9 = 12;

 VAR_5 = FUNC_0(VAR_2, VAR_3 + 8);
 VAR_8 = (unsigned int)VAR_5 & VAR_0;

 if (VAR_11 < VAR_3 || VAR_11 >= VAR_3 + VAR_9 + VAR_8)
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_2, VAR_11, &VAR_11, &VAR_6, &VAR_10);

 VAR_4->next = VAR_11 + VAR_10;

 VAR_4->type = VAR_7;
 VAR_4->delta = VAR_6;
 VAR_4->length = VAR_10;

 return VAR_4;
}
