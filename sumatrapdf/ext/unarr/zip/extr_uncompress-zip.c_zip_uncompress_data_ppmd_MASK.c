
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int Base; } ;
struct TYPE_10__ {TYPE_4__ ctx; int alloc; } ;
struct TYPE_11__ {TYPE_2__ ppmd8; } ;
struct TYPE_9__ {int bytes_left; int* data; size_t offset; } ;
struct ar_archive_zip_uncomp {TYPE_3__ state; TYPE_1__ input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static uint32_t FUNC_6(struct ar_archive_zip_uncomp *VAR_1, void *VAR_2, uint32_t VAR_3, bool VAR_4)
{
    uint32_t VAR_5 = 0;

    if (!VAR_1->state.ppmd8.ctx.Base) {
        uint8_t VAR_6, VAR_7, VAR_8;
        if (VAR_1->input.bytes_left < 2) {
            FUNC_5("Insufficient data in compressed stream");
            return VAR_0;
        }
        VAR_6 = (VAR_1->input.data[VAR_1->input.offset] & 0x0F) + 1;
        VAR_7 = ((VAR_1->input.data[VAR_1->input.offset] >> 4) | ((VAR_1->input.data[VAR_1->input.offset + 1] << 4) & 0xFF));
        VAR_8 = VAR_1->input.data[VAR_1->input.offset + 1] >> 4;
        VAR_1->input.bytes_left -= 2;
        VAR_1->input.offset += 2;
        if (VAR_6 < 2 || VAR_8 > 2) {
            FUNC_5("Invalid PPMd data stream");
            return VAR_0;
        }

        if (VAR_6 == 2) {
            FUNC_5("PPMd freeze method isn't supported");
            return VAR_0;
        }

        if (!FUNC_0(&VAR_1->state.ppmd8.ctx, (VAR_7 + 1) << 20, &VAR_1->state.ppmd8.alloc))
            return VAR_0;
        if (!FUNC_3(&VAR_1->state.ppmd8.ctx))
            return VAR_0;
        FUNC_2(&VAR_1->state.ppmd8.ctx, VAR_6, VAR_8);
    }

    while (VAR_5 < VAR_3) {
        int VAR_9 = FUNC_1(&VAR_1->state.ppmd8.ctx);
        if (VAR_9 < 0) {
            FUNC_5("Invalid PPMd data stream");
            return VAR_0;
        }
        ((uint8_t *)VAR_2)[VAR_5++] = (uint8_t)VAR_9;
    }

    if (VAR_4) {
        int VAR_10 = FUNC_1(&VAR_1->state.ppmd8.ctx);
        if (VAR_10 != -1 || !FUNC_4(&VAR_1->state.ppmd8.ctx)) {
            FUNC_5("Invalid PPMd data stream");
            return VAR_0;
        }
    }

    return VAR_5;
}
