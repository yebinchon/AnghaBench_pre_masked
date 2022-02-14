
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ alloc; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct strbuf *VAR_0)
{
 if (VAR_0->alloc) {
  FUNC_1(&VAR_0->buf);
  FUNC_0(VAR_0, 0);
 }
}
