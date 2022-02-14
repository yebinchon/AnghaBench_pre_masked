
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int rio ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (int *,int ) ;

ssize_t FUNC_2(rio *VAR_1, void *VAR_2, size_t VAR_3, void *VAR_4, size_t VAR_5) {
    ssize_t VAR_6, VAR_7 = 0;
    if ((VAR_6 = FUNC_1(VAR_1,VAR_0)) == -1) return -1;
    VAR_7 += VAR_6;
    if ((VAR_6 = FUNC_0(VAR_1,VAR_2,VAR_3)) == -1) return -1;
    VAR_7 += VAR_6;
    if ((VAR_6 = FUNC_0(VAR_1,VAR_4,VAR_5)) == -1) return -1;
    VAR_7 += VAR_6;
    return VAR_7;
}
