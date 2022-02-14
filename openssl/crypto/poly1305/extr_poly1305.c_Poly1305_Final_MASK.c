
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int poly1305_emit_f ;
typedef int poly1305_blocks_f ;
struct TYPE_5__ {int emit; int blocks; } ;
struct TYPE_6__ {size_t num; int* data; int nonce; int opaque; TYPE_1__ func; } ;
typedef TYPE_2__ POLY1305 ;


 int FUNC_0 (TYPE_2__*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int*,size_t,int ) ;
 int FUNC_2 (int ,unsigned char*,int ) ;

void FUNC_3(POLY1305 *VAR_1, unsigned char VAR_2[16])
{




    size_t VAR_3;

    if ((VAR_3 = VAR_1->num)) {
        VAR_1->data[VAR_3++] = 1;
        while (VAR_3 < VAR_0)
            VAR_1->data[VAR_3++] = 0;
        FUNC_1(VAR_1->opaque, VAR_1->data, VAR_0, 0);
    }

    FUNC_2(VAR_1->opaque, VAR_2, VAR_1->nonce);


    FUNC_0(VAR_1, sizeof(*VAR_1));
}
