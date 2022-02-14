
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cd; int _errno; int iconv; int iconv_close; int to; int from; } ;
typedef TYPE_1__ rec_iconv_t ;
typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(rec_iconv_t *VAR_5, const char *VAR_6, const char *VAR_7)
{
    if (!FUNC_0(VAR_7, &VAR_5->from) || !FUNC_0(VAR_6, &VAR_5->to))
        return VAR_0;
    VAR_5->iconv_close = VAR_4;
    VAR_5->iconv = VAR_3;
    VAR_5->_errno = VAR_2;
    VAR_5->cd = (iconv_t)VAR_5;
    return VAR_1;
}
