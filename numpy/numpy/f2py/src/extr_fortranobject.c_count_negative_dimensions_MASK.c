
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;



__attribute__((used)) static int
FUNC_0(const int VAR_0,
                          const npy_intp *VAR_1) {
    int VAR_2=0,VAR_3=0;
    while (VAR_2<VAR_0) {
        if (VAR_1[VAR_2] < 0) ++VAR_3;
        ++VAR_2;
    }
    return VAR_3;
}
