
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const**,size_t*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_0, size_t VAR_1,
                        const unsigned char *VAR_2, size_t VAR_3,
                        unsigned int VAR_4)
{
    FUNC_0(&VAR_0, &VAR_1, VAR_3, VAR_4);
    if (VAR_1 != VAR_3)
        return 0;
    while (VAR_1) {
        unsigned char VAR_5 = *VAR_0;
        unsigned char VAR_6 = *VAR_2;

        if (VAR_5 == 0)
            return 0;
        if (VAR_5 != VAR_6) {
            if ('A' <= VAR_5 && VAR_5 <= 'Z')
                VAR_5 = (VAR_5 - 'A') + 'a';
            if ('A' <= VAR_6 && VAR_6 <= 'Z')
                VAR_6 = (VAR_6 - 'A') + 'a';
            if (VAR_5 != VAR_6)
                return 0;
        }
        ++VAR_0;
        ++VAR_2;
        --VAR_1;
    }
    return 1;
}
