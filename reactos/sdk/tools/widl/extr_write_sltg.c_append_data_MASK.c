
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_data {int size; int allocated; scalar_t__ data; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,void const*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct sltg_data *VAR_0, const void *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->size + VAR_2;

    if (VAR_3 > VAR_0->allocated)
    {
        VAR_0->allocated = FUNC_0(VAR_0->allocated * 2, VAR_3);
        VAR_0->data = FUNC_2(VAR_0->data, VAR_0->allocated);
    }

    FUNC_1(VAR_0->data + VAR_0->size, VAR_1, VAR_2);
    VAR_0->size = VAR_3;
}
