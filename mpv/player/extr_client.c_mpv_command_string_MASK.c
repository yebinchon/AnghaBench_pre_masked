
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_5__ {int input; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;

int FUNC_3(mpv_handle *VAR_0, const char *VAR_1)
{
    return FUNC_2(VAR_0,
        FUNC_1(VAR_0->mpctx->input, FUNC_0((char*)VAR_1), VAR_0->name), ((void*)0));
}
