
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_chmap {scalar_t__ num; } ;
struct TYPE_4__ {int dwChannelMask; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
struct TYPE_5__ {scalar_t__ wFormatTag; scalar_t__ nChannels; } ;
typedef TYPE_2__ WAVEFORMATEX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct mp_chmap*,scalar_t__) ;
 int FUNC_2 (struct mp_chmap*,int ) ;
 int FUNC_3 (struct mp_chmap*,int ) ;

__attribute__((used)) static bool FUNC_4(struct mp_chmap *VAR_1,
                                  const WAVEFORMATEX *VAR_2)
{
    if (VAR_2->wFormatTag == VAR_0) {
        WAVEFORMATEXTENSIBLE *VAR_3 = (WAVEFORMATEXTENSIBLE *)VAR_2;
        FUNC_3(VAR_1, VAR_3->dwChannelMask);
    } else {
        FUNC_1(VAR_1, VAR_2->nChannels);
    }

    if (VAR_1->num != VAR_2->nChannels) {
        FUNC_2(VAR_1, FUNC_0("empty"));
        return 0;
    }

    return 1;
}
