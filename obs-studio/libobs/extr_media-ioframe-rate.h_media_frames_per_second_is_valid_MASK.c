
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_frames_per_second {scalar_t__ denominator; scalar_t__ numerator; } ;



__attribute__((used)) static inline bool
FUNC_0(struct media_frames_per_second VAR_0)
{
 return VAR_0.numerator && VAR_0.denominator;
}
