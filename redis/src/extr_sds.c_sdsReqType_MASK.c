
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;

__attribute__((used)) static inline char FUNC_0(size_t VAR_5) {
    if (VAR_5 < 1<<5)
        return VAR_2;
    if (VAR_5 < 1<<8)
        return VAR_4;
    if (VAR_5 < 1<<16)
        return VAR_0;

    if (VAR_5 < 1ll<<32)
        return VAR_1;
    return VAR_3;



}
