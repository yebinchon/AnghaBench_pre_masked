
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* iconv_close ) (int ) ;int* (* _errno ) () ;int * hlibiconv; int cd; } ;
typedef TYPE_1__ rec_iconv_t ;
typedef scalar_t__ iconv_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int* FUNC_3 () ;

int
FUNC_4(iconv_t VAR_1)
{
    rec_iconv_t *VAR_2 = (rec_iconv_t *)VAR_1;
    int VAR_3 = VAR_2->iconv_close(VAR_2->cd);
    int VAR_4 = *(VAR_2->_errno());




    FUNC_1(VAR_2);
    VAR_0 = VAR_4;
    return VAR_3;
}
