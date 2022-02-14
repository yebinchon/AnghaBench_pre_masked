
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vertex_metadata {scalar_t__ key; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct vertex_metadata *VAR_2 = VAR_0;
    const struct vertex_metadata *VAR_3 = VAR_1;
    if (VAR_2->key == VAR_3->key)
        return 0;
    return VAR_2->key < VAR_3->key ? -1 : 1;
}
