
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t* VAR_0 ;
 size_t FUNC_1 (char const*) ;

size_t FUNC_2(size_t VAR_1, int VAR_2, const char *VAR_3, char VAR_4) {
    FUNC_0(2 <= VAR_2 && VAR_2 <= 16);
    size_t VAR_5 = VAR_1 / VAR_0[VAR_2 - 1] + 1;
    size_t VAR_6 = VAR_4 ? VAR_5 / 3 : 0;
    size_t VAR_7 = VAR_3 ? FUNC_1(VAR_3) : 0;
    return VAR_5 + VAR_6 + VAR_7 + 2;
}
