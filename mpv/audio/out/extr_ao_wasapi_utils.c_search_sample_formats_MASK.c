
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wasapi_sample_fmt {scalar_t__ mp_format; } ;
struct mp_chmap {int dummy; } ;
struct ao {int format; } ;
struct TYPE_6__ {scalar_t__ wBitsPerSample; } ;
struct TYPE_7__ {TYPE_1__ Format; } ;
typedef TYPE_2__ WAVEFORMATEXTENSIBLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct wasapi_sample_fmt*,int,struct mp_chmap*) ;
 scalar_t__ FUNC_2 (struct ao*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct wasapi_sample_fmt*) ;

__attribute__((used)) static bool FUNC_4(struct ao *VAR_1, WAVEFORMATEXTENSIBLE *VAR_2,
                                  int VAR_3, struct mp_chmap *VAR_4)
{
    struct wasapi_sample_fmt VAR_5[FUNC_0(VAR_0)];
    FUNC_3(VAR_1->format, VAR_5);
    for (int VAR_6 = 0; VAR_5[VAR_6].mp_format; VAR_6++) {
        FUNC_1(VAR_2, &VAR_5[VAR_6], VAR_3, VAR_4);
        if (FUNC_2(VAR_1, VAR_2))
            return 1;
    }

    VAR_2->Format.wBitsPerSample = 0;
    return 0;
}
