
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_1)
{
    int VAR_2 = VAR_0[VAR_1];
    unsigned int VAR_3;
    int VAR_4 = 1;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
        int VAR_5 = VAR_0[VAR_3];

        if (!FUNC_3(VAR_2, VAR_5)
                || !FUNC_1(VAR_2, VAR_5)
                || !FUNC_2(VAR_2, VAR_5))
            VAR_4 = 0;
    }
    return VAR_4;
}
