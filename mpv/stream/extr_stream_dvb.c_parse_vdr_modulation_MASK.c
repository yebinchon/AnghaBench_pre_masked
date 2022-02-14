
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fe_modulation_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static fe_modulation_t FUNC_1(const char** VAR_13) {
    if (!FUNC_0(*VAR_13, "16", 2)) {
        (*VAR_13)+=2;
        return VAR_5;
    } else if (!FUNC_0(*VAR_13, "32", 2)) {
        (*VAR_13)+=2;
        return VAR_7;
    } else if (!FUNC_0(*VAR_13, "64", 2)) {
        (*VAR_13)+=2;
        return VAR_8;
    } else if (!FUNC_0(*VAR_13, "128", 3)) {
        (*VAR_13)+=3;
        return VAR_4;
    } else if (!FUNC_0(*VAR_13, "256", 3)) {
        (*VAR_13)+=3;
        return VAR_6;
    } else if (!FUNC_0(*VAR_13, "998", 3)) {
        (*VAR_13)+=3;
        return VAR_9;
    } else if (!FUNC_0(*VAR_13, "2", 1)) {
        (*VAR_13)++;
        return VAR_10;
    } else if (!FUNC_0(*VAR_13, "5", 1)) {
        (*VAR_13)++;
        return VAR_3;
    } else if (!FUNC_0(*VAR_13, "6", 1)) {
        (*VAR_13)++;
        return VAR_0;
    } else if (!FUNC_0(*VAR_13, "7", 1)) {
        (*VAR_13)++;
        return VAR_1;
    } else if (!FUNC_0(*VAR_13, "10", 2)) {
        (*VAR_13)+=2;
        return VAR_12;
    } else if (!FUNC_0(*VAR_13, "11", 2)) {
        (*VAR_13)+=2;
        return VAR_11;
    } else if (!FUNC_0(*VAR_13, "12", 2)) {
        (*VAR_13)+=2;
        return VAR_2;
    } else {
        return VAR_9;
    }
}
