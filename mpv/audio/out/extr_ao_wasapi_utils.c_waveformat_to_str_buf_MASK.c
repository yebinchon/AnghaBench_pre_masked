
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wasapi_sample_fmt {int bits; int used_msb; int mp_format; } ;
struct mp_chmap {int dummy; } ;
struct TYPE_5__ {scalar_t__ nSamplesPerSec; } ;
typedef TYPE_1__ WAVEFORMATEX ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct mp_chmap*,TYPE_1__*) ;
 struct wasapi_sample_fmt FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (struct mp_chmap*) ;
 int FUNC_4 (char*,size_t,char*,char*,char*,int,int,unsigned int) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, size_t VAR_1, WAVEFORMATEX *VAR_2)
{
    struct mp_chmap VAR_3;
    FUNC_1(&VAR_3, VAR_2);

    struct wasapi_sample_fmt VAR_4 = FUNC_2(VAR_2);

    FUNC_4(VAR_0, VAR_1, "%s %s (%d/%d bits) @ %uhz",
             FUNC_3(&VAR_3),
             FUNC_0(VAR_4.mp_format), VAR_4.bits, VAR_4.used_msb,
             (unsigned) VAR_2->nSamplesPerSec);
    return VAR_0;
}
