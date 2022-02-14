
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_codec_params {int dummy; } ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_4__ {int codec_type; int codec_id; } ;
typedef int AVCodecParameters ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (struct mp_codec_params*) ;

int FUNC_3(AVCodecContext *VAR_2, struct mp_codec_params *VAR_3)
{
    enum AVMediaType VAR_4 = VAR_2->codec_type;
    enum AVCodecID VAR_5 = VAR_2->codec_id;
    AVCodecParameters *VAR_6 = FUNC_2(VAR_3);
    if (!VAR_6)
        return -1;

    int VAR_7 = FUNC_1(VAR_2, VAR_6) < 0 ? -1 : 0;
    FUNC_0(&VAR_6);

    if (VAR_2->codec_type != VAR_0)
        VAR_2->codec_type = VAR_4;
    if (VAR_2->codec_id != VAR_1)
        VAR_2->codec_id = VAR_5;
    return VAR_7;
}
