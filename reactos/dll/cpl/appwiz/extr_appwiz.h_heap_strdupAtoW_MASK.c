
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,char const*,int,int *,size_t) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static inline WCHAR *FUNC_2(const char *VAR_1)
{
    WCHAR *VAR_2 = ((void*)0);

    if(VAR_1) {
        size_t VAR_3;

        VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
        VAR_2 = FUNC_1(VAR_3*sizeof(WCHAR));
        if(VAR_2)
            FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3);
    }

    return VAR_2;
}
