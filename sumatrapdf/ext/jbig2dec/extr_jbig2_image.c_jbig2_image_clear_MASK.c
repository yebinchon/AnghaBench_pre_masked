
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int stride; int height; int data; } ;
typedef TYPE_1__ Jbig2Image ;
typedef int Jbig2Ctx ;


 int FUNC_0 (int ,int const,int) ;

void
FUNC_1(Jbig2Ctx *VAR_0, Jbig2Image *VAR_1, int VAR_2)
{
    const uint8_t VAR_3 = VAR_2 ? 0xFF : 0x00;

    FUNC_0(VAR_1->data, VAR_3, VAR_1->stride * VAR_1->height);
}
