
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compressFunc_t ;
typedef scalar_t__ LZ4F_blockMode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static compressFunc_t FUNC_0(LZ4F_blockMode_t VAR_6, int VAR_7)
{
    if (VAR_7 < VAR_5) {
        if (VAR_6 == VAR_0) return VAR_1;
        return VAR_4;
    }
    if (VAR_6 == VAR_0) return VAR_2;
    return VAR_3;
}
