
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (char*,unsigned long long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_1(char *VAR_1, size_t VAR_2)
{
    if ( VAR_0 ) {
        ssize_t VAR_3 = FUNC_0(VAR_1, (unsigned long long)VAR_2);
        return (VAR_3 >= 0) ? (size_t)VAR_3 : 0;
    } else {
        return 0;
    }
}
