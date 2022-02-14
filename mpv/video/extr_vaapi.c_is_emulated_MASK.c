
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct AVBufferRef {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__* hwctx; } ;
struct TYPE_3__ {int display; } ;
typedef TYPE_1__ AVVAAPIDeviceContext ;
typedef TYPE_2__ AVHWDeviceContext ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct AVBufferRef *VAR_0)
{
    AVHWDeviceContext *VAR_1 = (void *)VAR_0->data;
    AVVAAPIDeviceContext *VAR_2 = VAR_1->hwctx;

    const char *VAR_3 = FUNC_1(VAR_2->display);
    return VAR_3 && FUNC_0(VAR_3, "VDPAU backend");
}
