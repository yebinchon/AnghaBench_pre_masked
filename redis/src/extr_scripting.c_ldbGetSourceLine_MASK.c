
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lines; char** src; } ;


 TYPE_1__ VAR_0 ;

char *FUNC_0(int VAR_1) {
    int VAR_2 = VAR_1-1;
    if (VAR_2 < 0 || VAR_2 >= VAR_0.lines) return "<out of range source code line>";
    return VAR_0.src[VAR_2];
}
