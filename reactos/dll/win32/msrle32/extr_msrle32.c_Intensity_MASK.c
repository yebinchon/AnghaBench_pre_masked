
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int rgbRed; int rgbGreen; int rgbBlue; } ;
typedef TYPE_1__ RGBQUAD ;



__attribute__((used)) static inline WORD FUNC_0(RGBQUAD VAR_0)
{
  return (30 * VAR_0.rgbRed + 59 * VAR_0.rgbGreen + 11 * VAR_0.rgbBlue)/4;
}
