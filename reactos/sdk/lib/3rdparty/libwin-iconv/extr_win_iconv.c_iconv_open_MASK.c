
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rec_iconv_t ;
typedef int iconv_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (int *,char const*,char const*) ;

iconv_t
FUNC_4(const char *VAR_1, const char *VAR_2)
{
    rec_iconv_t *VAR_3;

    VAR_3 = (rec_iconv_t *)FUNC_0(1, sizeof(rec_iconv_t));
    if (VAR_3 == ((void*)0))
        return (iconv_t)(-1);
    VAR_0 = 0;
    if (FUNC_3(VAR_3, VAR_1, VAR_2))
        return (iconv_t)VAR_3;

    FUNC_1(VAR_3);

    return (iconv_t)(-1);
}
