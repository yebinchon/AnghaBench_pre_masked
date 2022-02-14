
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_frames_per_second {double denominator; scalar_t__ numerator; } ;



__attribute__((used)) static inline double
FUNC_0(struct media_frames_per_second VAR_0)
{
 return (double)VAR_0.numerator / VAR_0.denominator;
}
