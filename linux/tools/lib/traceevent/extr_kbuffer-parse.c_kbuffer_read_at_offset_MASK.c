
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int start; int curr; int subbuffer; } ;


 int FUNC_0 (struct kbuffer*,int ) ;
 void* FUNC_1 (struct kbuffer*,unsigned long long*) ;
 void* FUNC_2 (struct kbuffer*,unsigned long long*) ;

void *FUNC_3(struct kbuffer *VAR_0, int VAR_1,
        unsigned long long *VAR_2)
{
 void *VAR_3;

 if (VAR_1 < VAR_0->start)
  VAR_1 = 0;
 else
  VAR_1 -= VAR_0->start;


 FUNC_0(VAR_0, VAR_0->subbuffer);
 VAR_3 = FUNC_2(VAR_0, VAR_2);

 while (VAR_0->curr < VAR_1) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (!VAR_3)
   break;
 }

 return VAR_3;
}
