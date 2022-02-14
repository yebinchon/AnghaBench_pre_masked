
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int hdr; int payload; int numopts; int opts; int tok; } ;
typedef TYPE_1__ coap_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int ,int *,int *,int *,int const*,size_t) ;
 int FUNC_2 (int *,int *,int const*,size_t) ;

int FUNC_3(coap_packet_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    int VAR_4;



    if (0 != (VAR_4 = FUNC_0(&VAR_1->hdr, VAR_2, VAR_3)))
        return VAR_4;

    if (0 != (VAR_4 = FUNC_2(&VAR_1->tok, &VAR_1->hdr, VAR_2, VAR_3)))
        return VAR_4;
    VAR_1->numopts = VAR_0;
    if (0 != (VAR_4 = FUNC_1(VAR_1->opts, &(VAR_1->numopts), &(VAR_1->payload), &VAR_1->hdr, VAR_2, VAR_3)))
        return VAR_4;

    return 0;
}
