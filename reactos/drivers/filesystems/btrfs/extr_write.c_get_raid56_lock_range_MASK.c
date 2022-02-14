
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_5__ {int offset; TYPE_1__* chunk_item; } ;
typedef TYPE_2__ chunk ;
struct TYPE_4__ {int num_stripes; int type; int stripe_length; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int*,int*) ;
 int FUNC_1 (int,int) ;

void FUNC_2(chunk* VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t* VAR_4, uint64_t* VAR_5) {
    uint64_t VAR_6, VAR_7;
    uint16_t VAR_8, VAR_9, VAR_10;

    VAR_10 = VAR_1->chunk_item->num_stripes - (VAR_1->chunk_item->type & VAR_0 ? 1 : 2);

    FUNC_0(VAR_2 - VAR_1->offset, VAR_1->chunk_item->stripe_length, VAR_10, &VAR_6, &VAR_8);
    FUNC_0(VAR_2 + VAR_3 - VAR_1->offset - 1, VAR_1->chunk_item->stripe_length, VAR_10, &VAR_7, &VAR_9);

    VAR_6 -= VAR_6 % VAR_1->chunk_item->stripe_length;
    VAR_7 = FUNC_1(VAR_7, VAR_1->chunk_item->stripe_length);

    *VAR_4 = VAR_1->offset + (VAR_6 * VAR_10);
    *VAR_5 = (VAR_7 - VAR_6) * VAR_10;
}
