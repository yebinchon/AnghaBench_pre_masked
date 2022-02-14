
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct stream {int eof; } ;
struct block_info {int num_laces; TYPE_1__** laces; } ;
typedef int int64_t ;
struct TYPE_4__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (struct stream*) ;
 int FUNC_4 (struct stream*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (struct stream*,scalar_t__,int) ;
 int FUNC_7 (struct stream*) ;
 scalar_t__ FUNC_8 (struct stream*) ;

__attribute__((used)) static int FUNC_9(struct block_info *VAR_5, int VAR_6,
                                       struct stream *VAR_7, uint64_t VAR_8)
{
    int VAR_9;
    uint32_t VAR_10[VAR_4];


    if (VAR_6 == 0) {
        VAR_9 = 1;
        VAR_10[0] = VAR_8 - FUNC_8(VAR_7);
    } else {
        VAR_9 = FUNC_7(VAR_7);
        if (VAR_9 < 0 || FUNC_8(VAR_7) > VAR_8)
            goto error;
        VAR_9 += 1;

        switch (VAR_6) {
        case 1: {
            uint32_t VAR_11 = 0;
            for (int VAR_12 = 0; VAR_12 < VAR_9 - 1; VAR_12++) {
                VAR_10[VAR_12] = 0;
                uint8_t VAR_13;
                do {
                    VAR_13 = FUNC_7(VAR_7);
                    if (VAR_7->eof || FUNC_8(VAR_7) >= VAR_8)
                        goto error;
                    VAR_10[VAR_12] += VAR_13;
                } while (VAR_13 == 0xFF);
                VAR_11 += VAR_10[VAR_12];
            }
            uint32_t VAR_14 = VAR_8 - FUNC_8(VAR_7);
            VAR_10[VAR_9 - 1] = VAR_14 - VAR_11;
            break;
        }

        case 2: {
            uint32_t VAR_15 = VAR_8 - FUNC_8(VAR_7);
            for (int VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
                VAR_10[VAR_16] = VAR_15 / VAR_9;
            break;
        }

        case 3: {
            uint64_t VAR_17 = FUNC_3(VAR_7);
            if (VAR_17 == VAR_3 || FUNC_8(VAR_7) >= VAR_8)
                goto error;

            uint32_t VAR_18 = VAR_10[0] = VAR_17;
            for (int VAR_19 = 1; VAR_19 < VAR_9 - 1; VAR_19++) {
                int64_t VAR_20 = FUNC_4(VAR_7);
                if (VAR_20 == VAR_2 || FUNC_8(VAR_7) >= VAR_8)
                    goto error;
                VAR_10[VAR_19] = VAR_10[VAR_19 - 1] + VAR_20;
                VAR_18 += VAR_10[VAR_19];
            }
            uint32_t VAR_21 = VAR_8 - FUNC_8(VAR_7);
            VAR_10[VAR_9 - 1] = VAR_21 - VAR_18;
            break;
        }

        default:
            goto error;
        }
    }

    for (int VAR_22 = 0; VAR_22 < VAR_9; VAR_22++) {
        uint32_t VAR_23 = VAR_10[VAR_22];
        if (FUNC_8(VAR_7) + VAR_23 > VAR_8 || VAR_23 > (1 << 30))
            goto error;
        int VAR_24 = FUNC_0(VAR_0, VAR_1);
        AVBufferRef *VAR_25 = FUNC_1(VAR_23 + VAR_24);
        if (!VAR_25)
            goto error;
        VAR_25->size = VAR_23;
        if (FUNC_6(VAR_7, VAR_25->data, VAR_25->size) != VAR_25->size) {
            FUNC_2(&VAR_25);
            goto error;
        }
        FUNC_5(VAR_25->data + VAR_25->size, 0, VAR_24);
        VAR_5->laces[VAR_5->num_laces++] = VAR_25;
    }

    if (FUNC_8(VAR_7) != VAR_8)
        goto error;

    return 0;

 error:
    return 1;
}
