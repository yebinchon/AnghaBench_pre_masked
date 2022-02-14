
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {struct buffy* next; } ;
struct bufferchain {scalar_t__ pool_fill; scalar_t__ pool_size; struct buffy* pool; int bufblock; } ;


 int FUNC_0 (struct buffy*) ;
 struct buffy* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bufferchain *VAR_0)
{

 while(VAR_0->pool_fill > VAR_0->pool_size)
 {

  struct buffy* VAR_1 = VAR_0->pool;
  VAR_0->pool = VAR_1->next;
  FUNC_0(VAR_1);
  --VAR_0->pool_fill;
 }


 while(VAR_0->pool_fill < VAR_0->pool_size)
 {

  struct buffy* VAR_2;
  VAR_2 = FUNC_1(0, VAR_0->bufblock);
  if(!VAR_2) return -1;

  VAR_2->next = VAR_0->pool;
  VAR_0->pool = VAR_2;
  ++VAR_0->pool_fill;
 }

 return 0;
}
