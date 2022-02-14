
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char byte ;



__attribute__((used)) static int FUNC_0(byte VAR_0) {
    if (VAR_0 >= 'A' && VAR_0 <= 'Z') {
        return VAR_0 - 'A';
    } else if (VAR_0 >= 'a' && VAR_0 <= 'z') {
        return VAR_0 - 'a' + 26;
    } else if (VAR_0 >= '0' && VAR_0 <= '9') {
        return VAR_0 - '0' + 52;
    } else if (VAR_0 == '+') {
        return 62;
    } else if (VAR_0 == '/') {
        return 63;
    } else {
        return -1;
    }
}
