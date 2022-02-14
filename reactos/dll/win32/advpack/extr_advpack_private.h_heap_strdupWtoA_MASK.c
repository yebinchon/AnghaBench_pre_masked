
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,int const*,int,char*,size_t,int *,int *) ;
 char* FUNC_1 (size_t) ;

__attribute__((used)) static inline char *FUNC_2(const WCHAR *VAR_1)
{
    char *VAR_2 = ((void*)0);

    if(VAR_1) {
        size_t VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_2 = FUNC_1(VAR_3);
        if(VAR_2)
            FUNC_0(VAR_0, 0, VAR_1, -1, VAR_2, VAR_3, ((void*)0), ((void*)0));
    }

    return VAR_2;
}
