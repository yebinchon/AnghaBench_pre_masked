
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_t ;


 double FUNC_0 (double,int,int,int) ;
 int FUNC_1 (int const*,char*,int*,int*,int*,...) ;

double FUNC_2(const utf8_char_t* VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4;
    if (FUNC_1(VAR_0, "%d:%2d:%2d%*1[,.]%3d", &VAR_1, &VAR_2, &VAR_3, &VAR_4) == 4) {
        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
    }
    if (FUNC_1(VAR_0, "%2d:%2d%*1[,.]%3d", &VAR_2, &VAR_3, &VAR_4) == 3) {
        return FUNC_0(0.0, VAR_2, VAR_3, VAR_4);
    }
    return -1.0;
}
