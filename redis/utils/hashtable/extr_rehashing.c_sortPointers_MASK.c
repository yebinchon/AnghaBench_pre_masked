
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dictEntry ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
    unsigned long VAR_2, VAR_3;

    VAR_2 = (long) (*((dictEntry**)VAR_0));
    VAR_3 = (long) (*((dictEntry**)VAR_1));
    return VAR_2-VAR_3;
}
