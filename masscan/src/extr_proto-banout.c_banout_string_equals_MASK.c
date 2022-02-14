
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {int dummy; } ;


 unsigned char* FUNC_0 (struct BannerOutput*,unsigned int) ;
 size_t FUNC_1 (struct BannerOutput*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned char const*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct BannerOutput *VAR_0, unsigned VAR_1,
                     const char *VAR_2)
{
    const unsigned char *VAR_3 = FUNC_0(VAR_0, VAR_1);
    size_t VAR_4 = FUNC_1(VAR_0, VAR_1);
    size_t VAR_5 = FUNC_3(VAR_2);

    if (VAR_4 != VAR_5)
        return 0;
    return FUNC_2(VAR_3, VAR_2, VAR_5) == 0;
}
