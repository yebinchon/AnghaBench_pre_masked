
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int WPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const,int ,int ,int ) ;
 int FUNC_1 (int ,int const,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4 (va_list VAR_6)
{
    const int VAR_7 = VAR_0 + VAR_4 * 2;
    char *VAR_8 = FUNC_3 (((void*)0), VAR_6);

    VAR_3++;
    FUNC_1 (VAR_2, VAR_7, VAR_8);
    FUNC_0 (VAR_2, VAR_7+1, VAR_1,
                        (WPARAM)(VAR_5 * VAR_3), 0);
    FUNC_2 (VAR_8);
    return 0;
}
