
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5(char_u *VAR_1, char_u *VAR_2)
{
    int VAR_3 = (int)FUNC_0(VAR_1);
    int VAR_4;

    while (*VAR_1 != VAR_0)
    {
 if (*VAR_1 == '^' && FUNC_4(VAR_2, VAR_1[1]) != ((void*)0))
     FUNC_2(VAR_1, VAR_1 + 1, VAR_3--);



 VAR_4 = 1;

 VAR_1 += VAR_4;
 VAR_3 -= VAR_4;
    }
}
