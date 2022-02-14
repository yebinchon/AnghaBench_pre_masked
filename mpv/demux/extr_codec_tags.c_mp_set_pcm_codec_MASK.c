
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_codec_params {int codec; } ;
typedef int codec ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (struct mp_codec_params*,char*) ;

void FUNC_2(struct mp_codec_params *VAR_0, bool VAR_1, bool VAR_2,
                      int VAR_3, bool VAR_4)
{

    char VAR_5[64] = "pcm_";
    if (VAR_2) {
        FUNC_0(VAR_5, sizeof(VAR_5), "f");
    } else {
        FUNC_0(VAR_5, sizeof(VAR_5), VAR_1 ? "s" : "u");
    }
    FUNC_0(VAR_5, sizeof(VAR_5), "%d", VAR_3);
    if (VAR_3 != 8)
        FUNC_0(VAR_5, sizeof(VAR_5), VAR_4 ? "be" : "le");
    VAR_0->codec = FUNC_1(VAR_0, VAR_5);
}
