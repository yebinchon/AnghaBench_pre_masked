
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct file {int ref; TYPE_1__ IFile_iface; int classinfo; struct file* path; } ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef TYPE_1__ IFile ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ,int,struct file*,int *) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7(BSTR VAR_8, IFile **VAR_9)
{
    struct file *VAR_10;
    DWORD VAR_11, VAR_12;

    *VAR_9 = ((void*)0);

    VAR_10 = FUNC_4(sizeof(struct file));
    if(!VAR_10)
        return VAR_2;

    VAR_10->IFile_iface.lpVtbl = &VAR_7;
    VAR_10->ref = 1;

    VAR_11 = FUNC_1(VAR_8, 0, ((void*)0), ((void*)0));
    if(!VAR_11) {
        FUNC_5(VAR_10);
        return VAR_1;
    }

    VAR_10->path = FUNC_4(VAR_11*sizeof(WCHAR));
    if(!VAR_10->path) {
        FUNC_5(VAR_10);
        return VAR_2;
    }

    if(!FUNC_1(VAR_8, VAR_11, VAR_10->path, ((void*)0))) {
        FUNC_5(VAR_10->path);
        FUNC_5(VAR_10);
        return VAR_1;
    }

    VAR_12 = FUNC_0(VAR_10->path);
    if(VAR_12==VAR_5 ||
            (VAR_12&(VAR_4|VAR_3))) {
        FUNC_5(VAR_10->path);
        FUNC_5(VAR_10);
        return FUNC_3(FUNC_2());
    }

    FUNC_6(&VAR_0, (IUnknown *)&VAR_10->IFile_iface, &VAR_10->classinfo);
    *VAR_9 = &VAR_10->IFile_iface;
    return VAR_6;
}
