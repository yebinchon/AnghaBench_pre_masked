
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int styleid_t ;
typedef char WCHAR ;
typedef int HTMLStyle ;
typedef int HRESULT ;


 float FUNC_0 (float) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (char*,char*,float) ;

__attribute__((used)) static inline HRESULT FUNC_3(HTMLStyle *VAR_0, styleid_t VAR_1, float VAR_2)
{
    WCHAR VAR_3[25];
    WCHAR VAR_4[] = {'%','.','0','f','p','x',0};

    VAR_2 = FUNC_0(VAR_2);

    FUNC_2(VAR_3, VAR_4, VAR_2);

    return FUNC_1(VAR_0, VAR_1, VAR_3, 0);
}
