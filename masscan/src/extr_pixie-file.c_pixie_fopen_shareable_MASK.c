
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,int,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (intptr_t,int) ;
 int VAR_11 ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(FILE **VAR_12, const char *VAR_13, unsigned VAR_14)
{
    FILE *VAR_15;

    *VAR_12 = ((void*)0);
    VAR_15 = FUNC_3(VAR_13, VAR_14?"a":"w");
    if (VAR_15 == ((void*)0))
        return VAR_11;


    *VAR_12 = VAR_15;
    return 0;
}
