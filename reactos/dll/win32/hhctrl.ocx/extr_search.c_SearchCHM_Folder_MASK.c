
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SearchItem ;
typedef int IStorage ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int const*,int *,int ,int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (int *,int *,char const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static SearchItem *FUNC_6(SearchItem *VAR_1, IStorage *VAR_2,
                                    const WCHAR *VAR_3, const char *VAR_4)
{
    IStorage *VAR_5 = ((void*)0);
    HRESULT VAR_6;

    VAR_6 = FUNC_2(VAR_2, VAR_3, ((void*)0), VAR_0, ((void*)0), 0, &VAR_5);
    if(FUNC_0(VAR_6))
    {
        FUNC_1("Could not open '%s' storage object: %08x\n", FUNC_5(VAR_3), VAR_6);
        return ((void*)0);
    }
    VAR_1 = FUNC_4(VAR_1, VAR_5, VAR_4);

    FUNC_3(VAR_5);
    return VAR_1;
}
