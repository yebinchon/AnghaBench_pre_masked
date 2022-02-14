
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int p; } ;
typedef TYPE_1__ coap_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

int FUNC_1(char *VAR_1, size_t VAR_2, const coap_buffer_t *VAR_3)
{
    if (VAR_3->len+1 > VAR_2)
        return VAR_0;
    FUNC_0(VAR_1, VAR_3->p, VAR_3->len);
    VAR_1[VAR_3->len] = 0;
    return 0;
}
