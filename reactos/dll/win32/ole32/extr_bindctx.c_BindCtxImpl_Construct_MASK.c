
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cbStruct; scalar_t__ pServerInfo; int locale; int dwClassContext; scalar_t__ dwTrackFlags; scalar_t__ dwTickCountDeadline; int grfMode; scalar_t__ grfFlags; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int * bindCtxTable; scalar_t__ bindCtxTableLastIndex; scalar_t__ bindCtxTableSize; TYPE_2__ bindOption2; scalar_t__ ref; TYPE_1__ IBindCtx_iface; } ;
typedef int HRESULT ;
typedef TYPE_3__ BindCtxImpl ;
typedef int BIND_OPTS2 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(BindCtxImpl* VAR_4)
{
    FUNC_1("(%p)\n",VAR_4);


    VAR_4->IBindCtx_iface.lpVtbl = &VAR_3;
    VAR_4->ref = 0;


    VAR_4->bindOption2.cbStruct = sizeof(BIND_OPTS2);
    VAR_4->bindOption2.grfFlags = 0;
    VAR_4->bindOption2.grfMode = VAR_1;
    VAR_4->bindOption2.dwTickCountDeadline = 0;

    VAR_4->bindOption2.dwTrackFlags = 0;
    VAR_4->bindOption2.dwClassContext = VAR_0;
    VAR_4->bindOption2.locale = FUNC_0();
    VAR_4->bindOption2.pServerInfo = 0;


    VAR_4->bindCtxTableSize=0;
    VAR_4->bindCtxTableLastIndex=0;
    VAR_4->bindCtxTable = ((void*)0);

    return VAR_2;
}
