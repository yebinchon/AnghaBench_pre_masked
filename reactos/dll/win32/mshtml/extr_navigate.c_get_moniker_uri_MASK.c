
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUriContainer ;
typedef int IUri ;
typedef int IMoniker ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static IUri *FUNC_6(IMoniker *VAR_1)
{
    IUriContainer *VAR_2;
    IUri *VAR_3 = ((void*)0);
    HRESULT VAR_4;

    VAR_4 = FUNC_2(VAR_1, &VAR_0, (void**)&VAR_2);
    if(FUNC_5(VAR_4)) {
        VAR_4 = FUNC_3(VAR_2, &VAR_3);
        FUNC_4(VAR_2);
        if(FUNC_0(VAR_4))
            return ((void*)0);
    }else {
        FUNC_1("No IUriContainer\n");
    }

    return VAR_3;
}
