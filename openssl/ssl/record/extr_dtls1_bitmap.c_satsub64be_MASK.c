
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int int64_t ;


 int FUNC_0 (unsigned char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_0, const unsigned char *VAR_1)
{
    int64_t VAR_2;
    uint64_t VAR_3, VAR_4;

    FUNC_0(VAR_0, VAR_3);
    FUNC_0(VAR_1, VAR_4);

    VAR_2 = VAR_3 - VAR_4;


    if (VAR_3 > VAR_4 && VAR_2 < 0)
        return 128;
    else if (VAR_4 > VAR_3 && VAR_2 > 0)
        return -128;

    if (VAR_2 > 128)
        return 128;
    else if (VAR_2 < -128)
        return -128;
    else
        return (int)VAR_2;
}
