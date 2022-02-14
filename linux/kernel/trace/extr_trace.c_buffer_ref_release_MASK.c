
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_ref {int page; int cpu; int buffer; int refcount; } ;


 int FUNC_0 (struct buffer_ref*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct buffer_ref *VAR_0)
{
 if (!FUNC_1(&VAR_0->refcount))
  return;
 FUNC_2(VAR_0->buffer, VAR_0->cpu, VAR_0->page);
 FUNC_0(VAR_0);
}
