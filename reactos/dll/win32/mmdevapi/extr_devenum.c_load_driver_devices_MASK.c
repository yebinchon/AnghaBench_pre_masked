
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_2__ {int (* pGetEndpointIDs ) (int ,int ***,int ***,size_t*,size_t*) ;} ;
typedef int MMDevice ;
typedef int HRESULT ;
typedef int * GUID ;
typedef int EDataFlow ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int **) ;
 int * FUNC_3 (int *,int **,int ,int ,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ***,int ***,size_t*,size_t*) ;

__attribute__((used)) static HRESULT FUNC_6(EDataFlow VAR_3)
{
    WCHAR **VAR_4;
    GUID *VAR_5;
    UINT VAR_6, VAR_7, VAR_8;
    HRESULT VAR_9;

    if(!VAR_2.pGetEndpointIDs)
        return VAR_1;

    VAR_9 = VAR_2.pGetEndpointIDs(VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_9;

    for(VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8){
        MMDevice *VAR_10;
        VAR_10 = FUNC_3(VAR_4[VAR_8], &VAR_5[VAR_8], VAR_3, VAR_0,
                VAR_7 == VAR_8);
        FUNC_4(VAR_10);
    }

    FUNC_2(FUNC_1(), 0, VAR_5);
    FUNC_2(FUNC_1(), 0, VAR_4);

    return VAR_1;
}
