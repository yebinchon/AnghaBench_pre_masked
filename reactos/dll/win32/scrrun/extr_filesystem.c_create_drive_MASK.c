
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct drive {int ref; char* root; TYPE_1__ IDrive_iface; int classinfo; } ;
typedef char WCHAR ;
typedef int IUnknown ;
typedef TYPE_1__ IDrive ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int) ;
 int VAR_3 ;
 struct drive* FUNC_1 (int) ;
 int FUNC_2 (struct drive*) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(WCHAR VAR_4, IDrive **VAR_5)
{
    struct drive *VAR_6;

    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if (!VAR_6) return VAR_1;

    VAR_6->IDrive_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->root = FUNC_0(((void*)0), 3);
    if (!VAR_6->root)
    {
        FUNC_2(VAR_6);
        return VAR_1;
    }
    VAR_6->root[0] = VAR_4;
    VAR_6->root[1] = ':';
    VAR_6->root[2] = '\\';
    VAR_6->root[3] = 0;

    FUNC_3(&VAR_0, (IUnknown *)&VAR_6->IDrive_iface, &VAR_6->classinfo);
    *VAR_5 = &VAR_6->IDrive_iface;
    return VAR_2;
}
