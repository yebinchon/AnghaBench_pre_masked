
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* cmp_func ) (void*,void*) ;
typedef int UCHAR ;



__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, void *VAR_2, cmp_func VAR_3,
                      int VAR_4, int VAR_5, int *VAR_6)
{
    int VAR_7 = VAR_4;
    int VAR_8 = VAR_5;
    int VAR_9;
    int VAR_10;
    unsigned long VAR_11;
    UCHAR *VAR_12;

    while (VAR_7 < VAR_8)
    {
        VAR_9 = (VAR_7 + VAR_8) / 2;
        VAR_11 = VAR_9 * VAR_1;

        VAR_12 = (UCHAR *) VAR_0 + VAR_11;
        VAR_10 = VAR_3((void *) VAR_12, VAR_2);

        if (VAR_10 < 0)
        {
            VAR_7 = VAR_9 + 1;
        }
        else if (VAR_10 > 0)
        {
            VAR_8 = VAR_9;
        }
        else
        {
            *VAR_6 = VAR_9;
            return 0;
        }
    }
    *VAR_6 = VAR_7;
    return 1;
}
