
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int,int ,char*,size_t,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,size_t,char*,size_t) ;

__attribute__((used)) static char *FUNC_3(char *VAR_3, size_t VAR_4, DWORD VAR_5)
{
    DWORD VAR_6 = FUNC_0(VAR_1 |
                             VAR_2,
                             ((void*)0), VAR_5, 0, VAR_3, VAR_4, ((void*)0));
    if (!VAR_6 && FUNC_1() == VAR_0) {
        FUNC_2(VAR_3, VAR_4,
                 "<Insufficient buffer size (%zd) for error message>",
                 VAR_4);
    } else {
        if (VAR_6 > 0 && VAR_3[VAR_6-1] == '\n')
            VAR_3[VAR_6-1] = '\0';
        if (VAR_6 > 1 && VAR_3[VAR_6-2] == '\r')
            VAR_3[VAR_6-2] = '\0';
    }
    return VAR_3;
}
