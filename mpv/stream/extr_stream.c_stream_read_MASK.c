
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;


 int FUNC_0 (int *,void*,int) ;

int FUNC_1(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_2;
    while (VAR_3 > 0) {
        int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
        if (VAR_4 <= 0)
            break;
        VAR_1 = (char *)VAR_1 + VAR_4;
        VAR_3 -= VAR_4;
    }
    VAR_2 -= VAR_3;
    return VAR_2;
}
