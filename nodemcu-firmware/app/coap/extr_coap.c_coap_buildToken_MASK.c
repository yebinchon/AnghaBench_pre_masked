
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int tkl; } ;
typedef TYPE_1__ coap_header_t ;
struct TYPE_6__ {int len; int p; } ;
typedef TYPE_2__ coap_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

int FUNC_1(const coap_buffer_t *VAR_2, const coap_header_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{

    uint8_t *VAR_6;
    if (VAR_5 < (4U + VAR_3->tkl))
        return VAR_0;
    VAR_6 = VAR_4 + 4;
    if ((VAR_3->tkl > 0) && (VAR_3->tkl != VAR_2->len))
        return VAR_1;

    if (VAR_3->tkl > 0)
        FUNC_0(VAR_6, VAR_2->p, VAR_3->tkl);



    return VAR_3->tkl;
}
