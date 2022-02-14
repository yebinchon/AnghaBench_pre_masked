
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(RedisSock *VAR_2)
{
    int VAR_3 = VAR_0;
    char *VAR_4, *VAR_5;
    int VAR_6, VAR_7;


    VAR_7 = FUNC_0(&VAR_4, "DISCARD", "");


    if (FUNC_3(VAR_2, VAR_4, VAR_7) >= 0 &&
       (VAR_5 = FUNC_2(VAR_2,&VAR_6)) != ((void*)0))
    {

        VAR_3 = (VAR_6 == 3 && FUNC_4(VAR_5,"+OK", 3) == 0) ? VAR_1:VAR_0;


        FUNC_1(VAR_5);
    }


    FUNC_1(VAR_4);


    return VAR_3;
}
