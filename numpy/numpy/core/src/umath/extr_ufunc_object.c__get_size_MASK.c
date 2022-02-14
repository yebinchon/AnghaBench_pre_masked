
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_longlong ;
typedef int npy_intp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static npy_intp
FUNC_2(const char* VAR_2)
{
    char *VAR_3;
    npy_longlong VAR_4 = FUNC_0(VAR_2, &VAR_3, 10);

    if (VAR_3 == VAR_2 || FUNC_1(*VAR_3)) {

        return -1;
    }
    if (VAR_4 >= VAR_0 || VAR_4 <= VAR_1) {

        return -1;
    }
    return VAR_4;
}
