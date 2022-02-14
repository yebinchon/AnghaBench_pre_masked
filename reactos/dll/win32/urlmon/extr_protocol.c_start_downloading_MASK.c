
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cache_file ;
typedef int WCHAR ;
struct TYPE_9__ {int bindf; int flags; int request; TYPE_1__* vtbl; } ;
struct TYPE_8__ {int (* start_downloading ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Protocol ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int *,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_7(Protocol *VAR_7)
{
    HRESULT VAR_8;

    VAR_8 = VAR_7->vtbl->start_downloading(VAR_7);
    if(FUNC_0(VAR_8)) {
        if(VAR_8 == VAR_3)
            return VAR_6;
        FUNC_3(VAR_7);
        FUNC_5(VAR_7, VAR_8);
        return VAR_8;
    }

    if(VAR_7->bindf & VAR_0) {
        WCHAR VAR_9[VAR_5];
        DWORD VAR_10 = sizeof(VAR_9);

        if(FUNC_2(VAR_7->request, VAR_4, VAR_9, &VAR_10)) {
            FUNC_4(VAR_7, VAR_1, VAR_9);
        }else {
            FUNC_1("Could not get cache file\n");
        }
    }

    VAR_7->flags |= VAR_2;
    return VAR_6;
}
