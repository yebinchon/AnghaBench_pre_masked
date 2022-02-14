
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int rio ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,void*,size_t) ;

ssize_t FUNC_2(rio *VAR_2, void *VAR_3, size_t VAR_4,
                       size_t VAR_5) {
    unsigned char VAR_6;
    ssize_t VAR_7, VAR_8 = 0;


    VAR_6 = (VAR_0<<6)|VAR_1;
    if ((VAR_7 = FUNC_1(VAR_2,&VAR_6,1)) == -1) goto writeerr;
    VAR_8 += VAR_7;

    if ((VAR_7 = FUNC_0(VAR_2,VAR_4)) == -1) goto writeerr;
    VAR_8 += VAR_7;

    if ((VAR_7 = FUNC_0(VAR_2,VAR_5)) == -1) goto writeerr;
    VAR_8 += VAR_7;

    if ((VAR_7 = FUNC_1(VAR_2,VAR_3,VAR_4)) == -1) goto writeerr;
    VAR_8 += VAR_7;

    return VAR_8;

writeerr:
    return -1;
}
