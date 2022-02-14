
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codepage; } ;
struct TYPE_4__ {TYPE_1__ from; } ;
typedef TYPE_2__ rec_iconv_t ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*,int,...) ;

int
FUNC_4(const char *VAR_2, int VAR_3)
{
    iconv_t VAR_4;
    int VAR_5;
    VAR_4 = FUNC_2("utf-8", VAR_2);
    if (VAR_4 == (iconv_t)(-1))
    {
        FUNC_3("%s(%d) IS NOT SUPPORTED: SKIP THE TEST\n", VAR_2, VAR_3);
        return VAR_0;
    }

    VAR_5 = ((rec_iconv_t *)VAR_4)->from.codepage;
    if (VAR_5 != VAR_3)
    {
        FUNC_3("%s(%d) ALIAS IS MAPPED TO DIFFERENT CODEPAGE (%d)\n", VAR_2, VAR_3, VAR_5);
        FUNC_0(1);
    }

    FUNC_1(VAR_4);
    return VAR_1;
}
