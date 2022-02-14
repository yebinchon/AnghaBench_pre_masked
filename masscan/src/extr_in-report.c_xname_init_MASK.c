
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; unsigned int length; unsigned int code; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char const*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
    unsigned VAR_2;

    VAR_0 = FUNC_2("readscan-x509-names", 0);

    for (VAR_2=0; VAR_1[VAR_2].name; VAR_2++) {
        const char *VAR_3 = VAR_1[VAR_2].name;
        unsigned VAR_4 = VAR_1[VAR_2].length;
        unsigned VAR_5 = VAR_1[VAR_2].code;


        FUNC_0( VAR_0,
                            VAR_3,
                            VAR_4,
                            VAR_5,
                            0
                            );
    }

    FUNC_1(VAR_0);

}
