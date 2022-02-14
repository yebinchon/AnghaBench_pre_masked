
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (unsigned char const) ;

__attribute__((used)) static unsigned char *
FUNC_5( const unsigned char *VAR_1,
                        unsigned VAR_2,
                        unsigned VAR_3)
{
    unsigned char *VAR_4;


    VAR_4 = (unsigned char *)FUNC_2(VAR_2+1);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }


    if (VAR_3) {
        unsigned VAR_5;
        for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
            VAR_4[VAR_5] = (unsigned char)(FUNC_4(VAR_1[VAR_5]));
        }
    } else
        FUNC_3(VAR_4, VAR_1, VAR_2);




    VAR_4[VAR_2] = '\0';

    return VAR_4;
}
