
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const unsigned char **VAR_0, long VAR_1)
{



    if (VAR_1 <= 0)
        return 1;
    else if ((VAR_1 >= 2) && ((*VAR_0)[0] == 0) && ((*VAR_0)[1] == 0)) {
        (*VAR_0) += 2;
        return 1;
    }
    return 0;
}
