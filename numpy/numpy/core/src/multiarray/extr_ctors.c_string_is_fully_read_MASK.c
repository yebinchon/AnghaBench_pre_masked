
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_bool ;



__attribute__((used)) static npy_bool
FUNC_0(char const* VAR_0, char const* VAR_1) {
    if (VAR_1 == ((void*)0)) {
        return *VAR_0 == '\0';
    }
    else {
        return VAR_0 >= VAR_1;
    }
}
