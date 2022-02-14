
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

bool FUNC_0(unichar VAR_3) {
    return VAR_3 < 128 && ((VAR_2[VAR_3] & (VAR_0 | VAR_1)) != 0 || VAR_3 == '_');
}
