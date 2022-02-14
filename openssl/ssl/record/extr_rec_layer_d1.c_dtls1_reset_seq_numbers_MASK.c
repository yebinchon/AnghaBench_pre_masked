
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* read_sequence; unsigned char* write_sequence; TYPE_1__* d; } ;
struct TYPE_8__ {TYPE_2__ rlayer; } ;
struct TYPE_6__ {unsigned char next_bitmap; int w_epoch; int * last_write_sequence; int bitmap; int r_epoch; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,unsigned int) ;

void FUNC_3(SSL *VAR_1, int VAR_2)
{
    unsigned char *VAR_3;
    unsigned int VAR_4 = sizeof(VAR_1->rlayer.read_sequence);

    if (VAR_2 & VAR_0) {
        VAR_3 = VAR_1->rlayer.read_sequence;
        VAR_1->rlayer.d->r_epoch++;
        FUNC_1(&VAR_1->rlayer.d->bitmap, &VAR_1->rlayer.d->next_bitmap,
               sizeof(VAR_1->rlayer.d->bitmap));
        FUNC_2(&VAR_1->rlayer.d->next_bitmap, 0, sizeof(VAR_1->rlayer.d->next_bitmap));





        FUNC_0(VAR_1);
    } else {
        VAR_3 = VAR_1->rlayer.write_sequence;
        FUNC_1(VAR_1->rlayer.d->last_write_sequence, VAR_3,
               sizeof(VAR_1->rlayer.write_sequence));
        VAR_1->rlayer.d->w_epoch++;
    }

    FUNC_2(VAR_3, 0, VAR_4);
}
