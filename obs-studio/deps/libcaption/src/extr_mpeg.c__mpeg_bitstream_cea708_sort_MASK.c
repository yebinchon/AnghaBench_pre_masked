
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t latent; } ;
typedef TYPE_1__ mpeg_bitstream_t ;
struct TYPE_9__ {scalar_t__ timestamp; } ;
typedef TYPE_2__ cea708_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

void FUNC_2(mpeg_bitstream_t* VAR_0)
{


again:
    for (size_t VAR_1 = 1; VAR_1 < VAR_0->latent; ++VAR_1) {
        cea708_t VAR_2;
        cea708_t* VAR_3 = FUNC_0(VAR_0, VAR_1 - 1);
        cea708_t* VAR_4 = FUNC_0(VAR_0, VAR_1);
        if (VAR_3->timestamp > VAR_4->timestamp) {
            FUNC_1(&VAR_2, VAR_3, sizeof(cea708_t));
            FUNC_1(VAR_3, VAR_4, sizeof(cea708_t));
            FUNC_1(VAR_4, &VAR_2, sizeof(cea708_t));
            goto again;
        }
    }
}
