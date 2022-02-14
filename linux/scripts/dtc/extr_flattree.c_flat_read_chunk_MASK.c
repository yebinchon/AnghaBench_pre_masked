
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf {scalar_t__ ptr; scalar_t__ limit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct inbuf *VAR_0, void *VAR_1, int VAR_2)
{
 if ((VAR_0->ptr + VAR_2) > VAR_0->limit)
  FUNC_0("Premature end of data parsing flat device tree\n");

 FUNC_1(VAR_1, VAR_0->ptr, VAR_2);

 VAR_0->ptr += VAR_2;
}
