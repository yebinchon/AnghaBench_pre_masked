
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0, int VAR_1) {
    if ((VAR_0>='0') && (VAR_0<='9') && (VAR_0<='0'+VAR_1-1)) return (VAR_0-'0');
    if (VAR_1<=10) return -1;
    if ((VAR_0>='A') && (VAR_0<='Z') && (VAR_0<='A'+VAR_1-11)) return (VAR_0-'A'+10);
    if ((VAR_0>='a') && (VAR_0<='z') && (VAR_0<='a'+VAR_1-11)) return (VAR_0-'a'+10);
    return -1;
}
