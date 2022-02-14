
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pattern ;
struct TYPE_2__ {int oid; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned char*,int,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,unsigned char*,unsigned int,unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(void)
{
    unsigned VAR_4;



    VAR_2 = FUNC_3("ssl-oids", 0);



    for (VAR_4=0; VAR_3[VAR_4].name; VAR_4++) {
        unsigned char VAR_5[256];
        unsigned VAR_6;

        VAR_6 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_3[VAR_4].oid);

        FUNC_1( VAR_2,
                            VAR_5,
                            VAR_6,
                            VAR_4,
                            VAR_0 | VAR_1
                            );
    }




    FUNC_2(VAR_2);

}
