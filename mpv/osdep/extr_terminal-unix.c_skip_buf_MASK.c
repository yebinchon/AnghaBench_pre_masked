
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termbuf {unsigned int len; scalar_t__ mods; int * b; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct termbuf *VAR_0, unsigned int VAR_1)
{
    FUNC_0(VAR_1 <= VAR_0->len);

    FUNC_1(&VAR_0->b[0], &VAR_0->b[VAR_1], VAR_0->len - VAR_1);
    VAR_0->len -= VAR_1;
    VAR_0->mods = 0;
}
