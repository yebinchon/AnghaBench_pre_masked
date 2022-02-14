
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct inf_value*,int,char**,int *) ;

__attribute__((used)) static BOOL FUNC_3(struct inf_value *VAR_2, int VAR_3, DWORD *VAR_4, DWORD VAR_5)
{
    char *VAR_6;
    BOOL VAR_7;

    VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_6, ((void*)0));
    if (!VAR_7) return VAR_0;
    if (!VAR_6)
    {
        *VAR_4 = VAR_5;
        return VAR_1;
    }

    *VAR_4 = FUNC_0(VAR_6);
    FUNC_1(VAR_6);

    return VAR_1;
}
