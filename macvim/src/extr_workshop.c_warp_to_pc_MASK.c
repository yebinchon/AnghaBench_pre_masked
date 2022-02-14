
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(
 int VAR_2)
{
    char VAR_3[256];

    if (VAR_2 > 0)
    {
 if (VAR_1 & VAR_0)
     FUNC_0((char_u *) "\033", 1);
 if (FUNC_1(VAR_2))
     FUNC_2(VAR_3, "%dG", VAR_2);
 else
     FUNC_2(VAR_3, "%dz.", VAR_2);
 FUNC_0((char_u *) VAR_3, FUNC_3(VAR_3));
    }
}
