
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_uint_t ;


 int FUNC_0 (char const*,char const*,scalar_t__) ;
 int FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (char*,int,char const,char const) ;
 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(const char *VAR_4, mp_uint_t VAR_5) {
    if (!VAR_2) {
        if (VAR_5 > VAR_3) {
            VAR_2 = 1;
        } else {
            VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_5);
            VAR_0 += VAR_5;
            VAR_3 -= VAR_5;
        }
    }
    FUNC_1(VAR_4, VAR_5);
}
