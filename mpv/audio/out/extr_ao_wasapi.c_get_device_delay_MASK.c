
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int QuadPart; } ;
struct TYPE_6__ {int nSamplesPerSec; } ;
struct TYPE_7__ {TYPE_1__ Format; } ;
struct wasapi_state {TYPE_3__ qpc_frequency; TYPE_2__ format; int clock_frequency; int pAudioClock; int sample_count; } ;
typedef scalar_t__ UINT64 ;
struct TYPE_9__ {int QuadPart; } ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef int INT64 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct wasapi_state*,char*,int ) ;
 int FUNC_3 (struct wasapi_state*,char*,double) ;
 int FUNC_4 (struct wasapi_state*,char*,...) ;
 int FUNC_5 (struct wasapi_state*,char*,double) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int ) ;

__attribute__((used)) static HRESULT FUNC_11(struct wasapi_state *VAR_2, double *VAR_3) {
    UINT64 VAR_4 = FUNC_7(&VAR_2->sample_count);
    UINT64 VAR_5, VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_2->pAudioClock, &VAR_5, &VAR_6);
    FUNC_0(VAR_7);



    if (VAR_7 == VAR_0)
        FUNC_4(VAR_2, "Possibly inaccurate device position.\n");


    UINT64 VAR_8 = FUNC_10(VAR_5,
                                          VAR_2->format.Format.nSamplesPerSec,
                                          VAR_2->clock_frequency);
    INT64 VAR_9 = VAR_4 - VAR_8;
    *VAR_3 = VAR_9 * 1e6 / VAR_2->format.Format.nSamplesPerSec;



    LARGE_INTEGER VAR_10;
    FUNC_6(&VAR_10);
    INT64 VAR_11 = FUNC_8(VAR_10.QuadPart, 10000000, VAR_2->qpc_frequency.QuadPart)
                     - VAR_6;


    if (VAR_11 < 10 * 10000000) {
        *VAR_3 -= VAR_11 / 10.0;
    } else {
        FUNC_4(VAR_2, "Insane qpc delay correction of %g seconds. "
                   "Ignoring it.\n", VAR_11 / 10000000.0);
    }

    if (VAR_4 > 0 && *VAR_3 <= 0) {
        FUNC_5(VAR_2, "Under-run: Device delay: %g us\n", *VAR_3);
    } else {
        FUNC_3(VAR_2, "Device delay: %g us\n", *VAR_3);
    }

    return VAR_1;
exit_label:
    FUNC_2(VAR_2, "Error getting device delay: %s\n", FUNC_9(VAR_7));
    return VAR_7;
}
