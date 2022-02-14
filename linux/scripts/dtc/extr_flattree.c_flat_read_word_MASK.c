
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint32_t ;
struct inbuf {int ptr; int base; } ;
typedef int fdt32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inbuf*,int *,int) ;

__attribute__((used)) static uint32_t FUNC_3(struct inbuf *VAR_0)
{
 fdt32_t VAR_1;

 FUNC_0(((VAR_0->ptr - VAR_0->base) % sizeof(VAR_1)) == 0);

 FUNC_2(VAR_0, &VAR_1, sizeof(VAR_1));

 return FUNC_1(VAR_1);
}
