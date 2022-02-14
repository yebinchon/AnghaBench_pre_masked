
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char**,int ) ;
 int FUNC_3 (struct inf_section*,char*,char**,int *) ;

__attribute__((used)) static BOOL FUNC_4(struct inf_section *VAR_2, DWORD *VAR_3, DWORD *VAR_4)
{
    DWORD VAR_5 = 0;
    DWORD VAR_6 = 0;
    char *VAR_7, *VAR_8, *VAR_9;

    if (!FUNC_3(VAR_2, "Version", &VAR_7, ((void*)0)))
        return VAR_0;
    if (!VAR_7) goto done;

    VAR_8 = VAR_7;

    VAR_9 = FUNC_2(&VAR_8, VAR_1);
    VAR_5 |= FUNC_0(VAR_8) << 16;
    if (!VAR_9) goto done;
    VAR_8 = VAR_9;

    VAR_9 = FUNC_2(&VAR_8, VAR_1);
    VAR_5 |= FUNC_0(VAR_8) & 0xffff;
    if (!VAR_9) goto done;
    VAR_8 = VAR_9;

    VAR_9 = FUNC_2(&VAR_8, VAR_1);
    VAR_6 |= FUNC_0(VAR_8) << 16;
    if (!VAR_9) goto done;
    VAR_8 = VAR_9;

    FUNC_2(&VAR_8, VAR_1);
    VAR_6 |= FUNC_0(VAR_8) & 0xffff;

done:
    FUNC_1(VAR_7);
    *VAR_3 = VAR_5;
    *VAR_4 = VAR_6;
    return VAR_1;
}
