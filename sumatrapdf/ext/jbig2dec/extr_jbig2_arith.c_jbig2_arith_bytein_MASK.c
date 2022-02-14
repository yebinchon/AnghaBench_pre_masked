
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int byte ;
struct TYPE_7__ {int next_word; int next_word_bytes; int offset; int C; int CT; TYPE_1__* ws; } ;
struct TYPE_6__ {int (* get_next_word ) (TYPE_1__*,int,int*) ;} ;
typedef TYPE_1__ Jbig2WordStream ;
typedef TYPE_2__ Jbig2ArithState ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (TYPE_1__*,int,int*) ;

__attribute__((used)) static void
FUNC_3(Jbig2ArithState *VAR_1)
{
    int VAR_2;
    byte VAR_3;




    VAR_3 = (byte)((VAR_1->next_word >> 24) & 0xFF);
    if (VAR_3 == 0xFF) {
        byte VAR_4;

        if (VAR_1->next_word_bytes == 1) {
            Jbig2WordStream *VAR_5 = VAR_1->ws;

            VAR_2 = VAR_5->get_next_word(VAR_5, VAR_1->offset, &VAR_1->next_word);
            VAR_1->next_word_bytes = VAR_2;
            VAR_1->offset += VAR_2;

            VAR_4 = (byte)((VAR_1->next_word >> 24) & 0xFF);
            if (VAR_4 > 0x8F) {




                VAR_1->C += 0xFF00;

                VAR_1->CT = 8;
                VAR_1->next_word = 0xFF000000 | (VAR_1->next_word >> 8);
                VAR_1->next_word_bytes = 4;
                VAR_1->offset--;
            } else {






                VAR_1->C += VAR_4 << 9;

                VAR_1->CT = 7;
            }
        } else {
            VAR_4 = (byte)((VAR_1->next_word >> 16) & 0xFF);
            if (VAR_4 > 0x8F) {




                VAR_1->C += 0xFF00;

                VAR_1->CT = 8;
            } else {
                VAR_1->next_word_bytes--;
                VAR_1->next_word <<= 8;







                VAR_1->C += (VAR_4 << 9);

                VAR_1->CT = 7;
            }
        }
    } else {



        VAR_1->CT = 8;
        VAR_1->next_word <<= 8;
        VAR_1->next_word_bytes--;
        if (VAR_1->next_word_bytes == 0) {
            Jbig2WordStream *VAR_6 = VAR_1->ws;

            VAR_2 = VAR_6->get_next_word(VAR_6, VAR_1->offset, &VAR_1->next_word);
            VAR_1->offset += VAR_2;
            VAR_1->next_word_bytes = VAR_2;
        }
        VAR_3 = (byte)((VAR_1->next_word >> 24) & 0xFF);



        VAR_1->C += (VAR_3 << 8);

    }
}
