
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bool_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static bool_t FUNC_7()
{
    FILE *VAR_5;
    VAR_5 = FUNC_5(VAR_1, "r");

    if (VAR_5 == ((void*)0)) {



        FUNC_6(VAR_4,"nfsd() failed to open file '%s'\n", VAR_1);

        return VAR_0;
    }
    FUNC_4(VAR_5);
    return VAR_3;
}
