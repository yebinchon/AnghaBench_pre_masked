
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0) {
    switch(VAR_0) {

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        return VAR_0 - '0';

    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
        return 10 + VAR_0 - 'A';

    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
        return 10 + VAR_0 - 'a';

    default:
        return -1;
    }
}
