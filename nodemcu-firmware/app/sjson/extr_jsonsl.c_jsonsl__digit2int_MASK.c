
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char VAR_0) {
    int VAR_1 = VAR_0 - '0';
    if ((unsigned) VAR_1 < 10) {
        return VAR_1;
    }
    VAR_1 = VAR_0 - 'a';
    if ((unsigned) VAR_1 < 6) {
        return VAR_1 + 10;
    }
    VAR_1 = VAR_0 - 'A';
    if ((unsigned) VAR_1 < 6) {
        return VAR_1 + 10;
    }
    return -1;
}
