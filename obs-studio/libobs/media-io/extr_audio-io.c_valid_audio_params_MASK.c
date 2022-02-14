
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_output_info {scalar_t__ samples_per_sec; scalar_t__ speakers; scalar_t__ name; scalar_t__ format; } ;



__attribute__((used)) static inline bool FUNC_0(const struct audio_output_info *VAR_0)
{
 return VAR_0->format && VAR_0->name && VAR_0->samples_per_sec > 0 &&
        VAR_0->speakers > 0;
}
