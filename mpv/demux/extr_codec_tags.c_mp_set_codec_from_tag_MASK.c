
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_codec_params {scalar_t__ type; scalar_t__ bits_per_coded_sample; int codec_tag; int codec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct mp_codec_params*) ;

void FUNC_2(struct mp_codec_params *VAR_1)
{
    VAR_1->codec = FUNC_0(VAR_1->type, VAR_1->codec_tag);

    if (VAR_1->type == VAR_0 && VAR_1->bits_per_coded_sample)
        FUNC_1(VAR_1);
}
