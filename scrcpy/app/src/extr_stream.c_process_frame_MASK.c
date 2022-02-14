
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stream {scalar_t__ recorder; scalar_t__ decoder; } ;
struct TYPE_5__ {int pts; int dts; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(struct stream *VAR_0, AVPacket *VAR_1) {
    if (VAR_0->decoder && !FUNC_1(VAR_0->decoder, VAR_1)) {
        return 0;
    }

    if (VAR_0->recorder) {
        VAR_1->dts = VAR_1->pts;

        if (!FUNC_2(VAR_0->recorder, VAR_1)) {
            FUNC_0("Could not send packet to recorder");
            return 0;
        }
    }

    return 1;
}
