
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int ) ;
 int FUNC_4 (struct inf_section*,char*,char**,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_6(struct inf_section *VAR_7, DWORD *VAR_8)
{
    DWORD VAR_9 = VAR_1;
    char *VAR_10, *VAR_11, *VAR_12;

    if (!FUNC_4(VAR_7, "Platform", &VAR_10, ((void*)0)))
        return VAR_0;
    if (!VAR_10) goto done;

    VAR_9 = 0;
    VAR_11 = VAR_10;
    do
    {
        VAR_12 = FUNC_3(&VAR_11, VAR_6);

        if (FUNC_5(VAR_11, "Win95") == 0)
            VAR_9 |= VAR_5;
        else if (FUNC_5(VAR_11, "Win98") == 0)
            VAR_9 |= VAR_5;
        else if (FUNC_5(VAR_11, "NT4") == 0)
            VAR_9 |= VAR_3;
        else if (FUNC_5(VAR_11, "NT5") == 0)
            VAR_9 |= VAR_4;
        else if (FUNC_5(VAR_11, "NT4Alpha") == 0)
            VAR_9 |= VAR_3;
        else if (FUNC_5(VAR_11, "NT5Alpha") == 0)
            VAR_9 |= VAR_4;
        else if (FUNC_5(VAR_11, "Millen") == 0)
            VAR_9 |= VAR_2;
        else
            FUNC_0("Unknown platform: %s\n", FUNC_1(VAR_11));

        VAR_11 = VAR_12;
    } while (VAR_11);

done:
    FUNC_2(VAR_10);
    *VAR_8 = VAR_9;
    return VAR_6;
}
