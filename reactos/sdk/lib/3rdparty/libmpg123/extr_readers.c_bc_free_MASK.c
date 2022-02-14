
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffy {struct buffy* next; } ;
struct bufferchain {scalar_t__ pool_fill; scalar_t__ pool_size; struct buffy* pool; } ;


 int FUNC_0 (struct buffy*) ;

__attribute__((used)) static void FUNC_1(struct bufferchain *VAR_0, struct buffy* VAR_1)
{
 if(!VAR_1) return;

 if(VAR_0->pool_fill < VAR_0->pool_size)
 {
  VAR_1->next = VAR_0->pool;
  VAR_0->pool = VAR_1;
  ++VAR_0->pool_fill;
 }
 else FUNC_0(VAR_1);
}
