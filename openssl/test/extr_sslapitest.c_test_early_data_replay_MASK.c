
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
    int VAR_1 = 1, VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
            VAR_1 &= FUNC_0(VAR_0, VAR_2, VAR_3);
    }

    return VAR_1;
}
