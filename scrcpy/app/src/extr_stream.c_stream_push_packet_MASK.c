
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pts; size_t size; int flags; int dts; scalar_t__ data; } ;
struct stream {int has_pending; TYPE_1__ pending; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_5 (struct stream*,TYPE_1__*) ;
 int FUNC_6 (struct stream*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_7(struct stream *VAR_1, AVPacket *VAR_2) {
    bool VAR_3 = VAR_2->pts == VAR_0;



    if (VAR_1->has_pending || VAR_3) {
        size_t VAR_4;
        if (VAR_1->has_pending) {
            VAR_4 = VAR_1->pending.size;
            if (FUNC_1(&VAR_1->pending, VAR_2->size)) {
                FUNC_0("Could not grow packet");
                return 0;
            }
        } else {
            VAR_4 = 0;
            if (FUNC_2(&VAR_1->pending, VAR_2->size)) {
                FUNC_0("Could not create packet");
                return 0;
            }
            VAR_1->has_pending = 1;
        }

        FUNC_4(VAR_1->pending.data + VAR_4, VAR_2->data, VAR_2->size);

        if (!VAR_3) {

            VAR_1->pending.pts = VAR_2->pts;
            VAR_1->pending.dts = VAR_2->dts;
            VAR_1->pending.flags = VAR_2->flags;
            VAR_2 = &VAR_1->pending;
        }
    }

    if (VAR_3) {

        bool VAR_5 = FUNC_5(VAR_1, VAR_2);
        if (!VAR_5) {
            return 0;
        }
    } else {

        bool VAR_6 = FUNC_6(VAR_1, VAR_2);

        if (VAR_1->has_pending) {

            VAR_1->has_pending = 0;
            FUNC_3(&VAR_1->pending);
        }

        if (!VAR_6) {
            return 0;
        }
    }
    return 1;
}
