
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 unsigned char* FUNC_0 (struct BannerOutput const*,unsigned int) ;
 size_t FUNC_1 (struct BannerOutput const*,unsigned int) ;
 scalar_t__ FUNC_2 (char const*,unsigned char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

unsigned
FUNC_4(const struct BannerOutput *VAR_0, unsigned VAR_1,
                const char *VAR_2)
{
    const unsigned char *VAR_3;
    size_t VAR_4;
    size_t VAR_5;




    VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3 == ((void*)0))
        return VAR_2 == ((void*)0);

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_4 = FUNC_3(VAR_2);
    VAR_5 = FUNC_1(VAR_0, VAR_1);

    if (VAR_4 != VAR_5)
        return 0;

    return FUNC_2(VAR_2, VAR_3, VAR_5) == 0;
}
