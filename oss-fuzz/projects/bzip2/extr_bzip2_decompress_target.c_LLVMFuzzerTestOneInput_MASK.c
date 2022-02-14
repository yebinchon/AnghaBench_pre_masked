
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,unsigned int*,char*,size_t,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (unsigned int) ;
 int VAR_1 ;

int
FUNC_4(const uint8_t *VAR_2, size_t VAR_3)
{
    int VAR_4, VAR_5;
    unsigned int VAR_6, VAR_7;


    VAR_7 = VAR_3*2;
    char *VAR_8 = FUNC_3(VAR_7);
    VAR_5 = VAR_3 % 2;
    VAR_4 = FUNC_0(VAR_8, &VAR_7, (char *)VAR_2, VAR_3,
            VAR_5, 0);

    if (VAR_4 != VAR_0) {



    }
    FUNC_2(VAR_8);
    return 0;
}
