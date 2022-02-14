
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
typedef int uint32_t ;
struct priv {int device; int audio_unit; } ;
struct ao {struct priv* priv; } ;
typedef double int64_t ;
typedef int audiounit_latency_sec ;
typedef int OSStatus ;


 int FUNC_0 (int ,int ,int ,int ,double*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ao*,char*,double) ;
 double FUNC_3 (struct ao*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_4(struct ao *VAR_2) {
    struct priv *VAR_3 = VAR_2->priv;

    double VAR_4 = 0.0;
    uint32_t VAR_5 = sizeof(VAR_4);
    OSStatus VAR_6 = FUNC_0(
            VAR_3->audio_unit,
            VAR_0,
            VAR_1,
            0,
            &VAR_4,
            &VAR_5);
    FUNC_1("cannot get audio unit latency");

    uint64_t VAR_7 = VAR_4 * 1e6;
    uint64_t VAR_8 = FUNC_3(VAR_2, VAR_3->device);

    FUNC_2(VAR_2, "audiounit latency [us]: %lld\n", VAR_7);
    FUNC_2(VAR_2, "device latency [us]: %lld\n", VAR_8);

    return VAR_7 + VAR_8;

coreaudio_error:
    return 0;
}
