
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int curr; unsigned long long timestamp; int index; scalar_t__ next; void* data; } ;


 int FUNC_0 (struct kbuffer*,void*) ;
 unsigned int FUNC_1 (struct kbuffer*,void*,void**,unsigned long long*,int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct kbuffer *VAR_0)
{
 unsigned long long VAR_1;
 unsigned int VAR_2;
 int VAR_3;
 void *VAR_4 = VAR_0->data + VAR_0->curr;

 VAR_2 = FUNC_1(VAR_0, VAR_4, &VAR_4, &VAR_1, &VAR_3);

 VAR_0->timestamp += VAR_1;
 VAR_0->index = FUNC_0(VAR_0, VAR_4);
 VAR_0->next = VAR_0->index + VAR_3;

 return VAR_2;
}
