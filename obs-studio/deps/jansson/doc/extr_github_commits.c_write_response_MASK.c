
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_result {int pos; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,void*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_2(void *VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{
    struct write_result *VAR_6 = (struct write_result *)VAR_5;

    if(VAR_6->pos + VAR_3 * VAR_4 >= VAR_0 - 1)
    {
        FUNC_0(VAR_1, "error: too small buffer\n");
        return 0;
    }

    FUNC_1(VAR_6->data + VAR_6->pos, VAR_2, VAR_3 * VAR_4);
    VAR_6->pos += VAR_3 * VAR_4;

    return VAR_3 * VAR_4;
}
