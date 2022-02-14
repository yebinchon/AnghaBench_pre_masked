
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_msg_format {int format; int channels; int attributes; int bit_rate; int sample_rate; } ;
struct hpi_format {int format; int channels; int attributes; int bit_rate; int sample_rate; } ;



void FUNC_0(struct hpi_msg_format *VAR_0,
 const struct hpi_format *VAR_1)
{
 VAR_0->sample_rate = VAR_1->sample_rate;
 VAR_0->bit_rate = VAR_1->bit_rate;
 VAR_0->attributes = VAR_1->attributes;
 VAR_0->channels = VAR_1->channels;
 VAR_0->format = VAR_1->format;
}
