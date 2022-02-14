
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int site; int lcid; } ;
struct TYPE_5__ {int site; TYPE_3__* ctx; int lcid; } ;
typedef TYPE_1__ JScript ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_4(JScript *VAR_2)
{
    HRESULT VAR_3;

    VAR_2->ctx->lcid = VAR_2->lcid;

    VAR_3 = FUNC_3(VAR_2->ctx);
    if(FUNC_0(VAR_3))
        return VAR_3;

    FUNC_1(VAR_2->site);
    VAR_2->ctx->site = VAR_2->site;

    FUNC_2(VAR_2, VAR_0);
    return VAR_1;
}
