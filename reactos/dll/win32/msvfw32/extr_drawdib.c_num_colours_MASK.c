
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int biClrUsed; int biBitCount; } ;
typedef TYPE_1__ BITMAPINFOHEADER ;



__attribute__((used)) static int FUNC_0(const BITMAPINFOHEADER *VAR_0)
{
 if(VAR_0->biClrUsed)
  return VAR_0->biClrUsed;
 if(VAR_0->biBitCount<=8)
  return 1<<VAR_0->biBitCount;
 return 0;
}
