
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* iconv ) (int ,char const**,size_t*,char**,size_t*) ;int * (* _errno ) () ;int cd; } ;
typedef TYPE_1__ rec_iconv_t ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,char const**,size_t*,char**,size_t*) ;
 int * FUNC_1 () ;

size_t
FUNC_2(iconv_t VAR_1, const char **VAR_2, size_t *VAR_3, char **VAR_4, size_t *VAR_5)
{
    rec_iconv_t *VAR_6 = (rec_iconv_t *)VAR_1;
    size_t VAR_7 = VAR_6->iconv(VAR_6->cd, VAR_2, VAR_3, VAR_4, VAR_5);
    VAR_0 = *(VAR_6->_errno());
    return VAR_7;
}
