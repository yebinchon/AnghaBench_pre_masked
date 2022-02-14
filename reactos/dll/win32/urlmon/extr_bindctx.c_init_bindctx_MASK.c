
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbStruct; int grfMode; scalar_t__ dwTickCountDeadline; int grfFlags; } ;
typedef int IEnumFORMATETC ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ BIND_OPTS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_4(IBindCtx *VAR_4, DWORD VAR_5,
       IBindStatusCallback *VAR_6, IEnumFORMATETC *VAR_7)
{
    BIND_OPTS VAR_8;
    HRESULT VAR_9;

    if(VAR_5)
        FUNC_1("not supported options %08x\n", VAR_5);
    if(VAR_7)
        FUNC_1("format is not supported\n");

    VAR_8.cbStruct = sizeof(BIND_OPTS);
    VAR_8.grfFlags = VAR_0;
    VAR_8.grfMode = VAR_1 | VAR_2;
    VAR_8.dwTickCountDeadline = 0;

    VAR_9 = FUNC_2(VAR_4, &VAR_8);
    if(FUNC_0(VAR_9))
       return VAR_9;

    if(VAR_6) {
        VAR_9 = FUNC_3(VAR_4, VAR_6, ((void*)0), 0);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    return VAR_3;
}
