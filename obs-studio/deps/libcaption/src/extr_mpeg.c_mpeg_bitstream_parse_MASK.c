
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sei_t ;
typedef int sei_message_t ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ status; int * data; } ;
typedef TYPE_1__ mpeg_bitstream_t ;
typedef int cea708_t ;
typedef int caption_frame_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int * FUNC_0 (TYPE_1__*,double) ;
 int FUNC_1 (TYPE_1__*,int *,double) ;
 int FUNC_2 (int *,size_t,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 size_t FUNC_4 (int *,size_t) ;
 void* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int const*,size_t) ;
 int FUNC_7 (int *,int *,size_t) ;
 int FUNC_8 (TYPE_1__*,unsigned int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,size_t,double) ;
 int VAR_6 ;

size_t FUNC_15(mpeg_bitstream_t* VAR_7, caption_frame_t* VAR_8, const uint8_t* VAR_9, size_t VAR_10, unsigned VAR_11, double VAR_12, double VAR_13)
{
    if (VAR_2 <= VAR_7->size) {
        VAR_7->status = VAR_0;

        return 0;
    }


    if (VAR_2 <= VAR_7->size + VAR_10) {
        VAR_10 = VAR_2 - VAR_7->size;
    }

    sei_t VAR_14;
    size_t VAR_15, VAR_16;
    VAR_7->status = VAR_1;
    FUNC_6(&VAR_7->data[VAR_7->size], VAR_9, VAR_10);
    VAR_7->size += VAR_10;

    while (VAR_7->status == VAR_1 && 0 < (VAR_16 = FUNC_4(&VAR_7->data[0], VAR_7->size))) {
        switch (FUNC_8(VAR_7, VAR_11)) {
        default:
            break;
        case 130:
            VAR_15 = 4;
            if (VAR_3 == VAR_11 && VAR_16 > VAR_15) {
                cea708_t* VAR_17 = FUNC_0(VAR_7, VAR_12 + VAR_13);
                VAR_7->status = FUNC_5(VAR_7->status, FUNC_2(&VAR_7->data[VAR_15], VAR_16 - VAR_15, VAR_17));
                FUNC_1(VAR_7, VAR_8, VAR_12);
            }
            break;
        case 129:
        case 128:
            VAR_15 = VAR_4 == VAR_11 ? 4 : VAR_5 == VAR_11 ? 5 : 0;
            if (VAR_15 && VAR_16 > VAR_15) {
                VAR_7->status = FUNC_5(VAR_7->status, FUNC_14(&VAR_14, &VAR_7->data[VAR_15], VAR_16 - VAR_15, VAR_12 + VAR_13));
                for (sei_message_t* VAR_18 = FUNC_10(&VAR_14); VAR_18; VAR_18 = FUNC_11(VAR_18)) {
                    if (VAR_6 == FUNC_13(VAR_18)) {
                        cea708_t* VAR_19 = FUNC_0(VAR_7, VAR_12 + VAR_13);
                        VAR_7->status = FUNC_5(VAR_7->status, FUNC_3(FUNC_9(VAR_18), FUNC_12(VAR_18), VAR_19));
                        FUNC_1(VAR_7, VAR_8, VAR_12);
                    }
                }
            }
            break;
        }

        VAR_7->size -= VAR_16;
        FUNC_7(&VAR_7->data[0], &VAR_7->data[VAR_16], VAR_7->size);
    }

    return VAR_10;
}
