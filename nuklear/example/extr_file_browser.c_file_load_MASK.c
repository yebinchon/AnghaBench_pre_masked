
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,size_t,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static char*
FUNC_7(const char* VAR_2, size_t* VAR_3)
{
    char *VAR_4;
    FILE *VAR_5 = FUNC_3(VAR_2, "rb");
    if (!VAR_5) FUNC_1("Failed to open file: %s\n", VAR_2);
    FUNC_5(VAR_5, 0, VAR_0);
    *VAR_3 = (size_t)FUNC_6(VAR_5);
    FUNC_5(VAR_5, 0, VAR_1);
    VAR_4 = (char*)FUNC_0(*VAR_3, 1);
    FUNC_4(VAR_4, *VAR_3, 1, VAR_5);
    FUNC_2(VAR_5);
    return VAR_4;
}
