
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_5__ {int global; int * host_global; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_6__ {int (* proc ) (TYPE_1__*,int *,unsigned int,unsigned int,int *,int *) ;} ;
typedef TYPE_2__ NativeFunction ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int FunctionInstance ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,unsigned int,unsigned int,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_1, FunctionInstance *VAR_2, IDispatch *VAR_3, unsigned VAR_4,
        unsigned VAR_5, jsval_t *VAR_6, jsval_t *VAR_7)
{
    NativeFunction *VAR_8 = (NativeFunction*)VAR_2;
    vdisp_t VAR_9;
    HRESULT VAR_10;

    if(VAR_3)
        FUNC_0(&VAR_9, VAR_3);
    else if(VAR_1->host_global)
        FUNC_0(&VAR_9, VAR_1->host_global);
    else
        FUNC_1(&VAR_9, VAR_1->global);

    VAR_10 = VAR_8->proc(VAR_1, &VAR_9, VAR_4 & ~VAR_0, VAR_5, VAR_6, VAR_7);

    FUNC_3(&VAR_9);
    return VAR_10;
}
