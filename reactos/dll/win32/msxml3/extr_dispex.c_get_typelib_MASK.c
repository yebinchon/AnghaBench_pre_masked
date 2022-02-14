
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; int iid; } ;
typedef int ITypeLib ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void**,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ,int **) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static HRESULT FUNC_5(unsigned VAR_4, ITypeLib **VAR_5)
{
    HRESULT VAR_6;

    if(!VAR_3[VAR_4]) {
        VAR_6 = FUNC_4(VAR_2[VAR_4].iid, VAR_2[VAR_4].major, 0, VAR_0, VAR_5);
        if(FUNC_1(VAR_6)) {
            FUNC_0("LoadRegTypeLib failed: %08x\n", VAR_6);
            return VAR_6;
        }

        if (FUNC_3((void**)&VAR_3[VAR_4], *VAR_5, ((void*)0)))
            FUNC_2(*VAR_5);
    }

    *VAR_5 = VAR_3[VAR_4];
    return VAR_1;
}
