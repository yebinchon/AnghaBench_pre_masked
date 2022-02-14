
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < 30; VAR_2++) {
        if ((1 << VAR_2) >= VAR_1)
            return 1 << VAR_2;
    }
    return VAR_0;
}
