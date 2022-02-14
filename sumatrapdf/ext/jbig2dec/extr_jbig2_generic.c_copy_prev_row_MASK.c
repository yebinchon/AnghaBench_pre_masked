
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int stride; int * data; } ;
typedef TYPE_1__ Jbig2Image ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(Jbig2Image *VAR_0, int VAR_1)
{
    if (!VAR_1) {

        FUNC_1(VAR_0->data, 0, VAR_0->stride);
    } else {

        uint8_t *VAR_2 = VAR_0->data + (VAR_1 - 1) * VAR_0->stride;

        FUNC_0(VAR_2 + VAR_0->stride, VAR_2, VAR_0->stride);
    }
}
