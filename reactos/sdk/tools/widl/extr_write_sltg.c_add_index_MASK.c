
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_data {int size; int allocated; scalar_t__ data; } ;


 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct sltg_data *VAR_0, const char *VAR_1)
{
    int VAR_2 = VAR_0->size;
    int VAR_3 = VAR_0->size + FUNC_3(VAR_1) + 1;

    FUNC_0("add_index: name_offset %d, \"%s\"\n", VAR_2, VAR_1);

    if (VAR_3 > VAR_0->allocated)
    {
        VAR_0->allocated = FUNC_1(VAR_0->allocated * 2, VAR_3);
        VAR_0->data = FUNC_4(VAR_0->data, VAR_0->allocated);
    }

    FUNC_2(VAR_0->data + VAR_0->size, VAR_1);
    VAR_0->size = VAR_3;

    return VAR_2;
}
