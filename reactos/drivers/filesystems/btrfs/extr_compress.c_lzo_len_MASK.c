
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; } ;
typedef TYPE_1__ lzo_stream ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(lzo_stream* VAR_0, int VAR_1, int VAR_2) {
    int VAR_3 = VAR_1 & VAR_2;

    if (VAR_3 == 0) {
        while (!(VAR_1 = FUNC_0(VAR_0))) {
            if (VAR_0->error) return 0;

            VAR_3 += 255;
        }

        VAR_3 += VAR_2 + VAR_1;
    }

    return VAR_3;
}
