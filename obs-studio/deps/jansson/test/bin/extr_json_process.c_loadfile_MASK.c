
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 long FUNC_1 (char*,int,long,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 long FUNC_3 (int *) ;
 char* FUNC_4 (long) ;

__attribute__((used)) static char *FUNC_5(FILE *VAR_2)
{
    long VAR_3, VAR_4;
    char *VAR_5;

    FUNC_2(VAR_2, 0, VAR_0);
    VAR_3 = FUNC_3(VAR_2);
    FUNC_2(VAR_2, 0, VAR_1);

    VAR_5 = FUNC_4(VAR_3+1);
    VAR_4 = FUNC_1(VAR_5, 1, VAR_3, VAR_2);
    if (VAR_4 != VAR_3)
        FUNC_0(1);
    VAR_5[VAR_3] = '\0';

    return VAR_5;
}
