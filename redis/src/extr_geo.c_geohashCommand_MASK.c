
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int robj ;
struct TYPE_13__ {int argc; TYPE_4__** argv; int db; } ;
typedef TYPE_1__ client ;
struct TYPE_16__ {int ptr; } ;
struct TYPE_15__ {int bits; } ;
struct TYPE_14__ {int min; int max; } ;
typedef TYPE_2__ GeoHashRange ;
typedef TYPE_3__ GeoHashBits ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (double,double*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,double,double,int,TYPE_3__*) ;
 int * FUNC_6 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int *,int ,double*) ;

void FUNC_8(client *VAR_2) {
    char *VAR_3= "0123456789bcdefghjkmnpqrstuvwxyz";
    int VAR_4;


    robj *VAR_5 = FUNC_6(VAR_2->db, VAR_2->argv[1]);
    if (VAR_5 && FUNC_3(VAR_2, VAR_5, VAR_1)) return;



    FUNC_0(VAR_2,VAR_2->argc-2);
    for (VAR_4 = 2; VAR_4 < VAR_2->argc; VAR_4++) {
        double VAR_6;
        if (!VAR_5 || FUNC_7(VAR_5, VAR_2->argv[VAR_4]->ptr, &VAR_6) == VAR_0) {
            FUNC_2(VAR_2);
        } else {







            double VAR_7[2];
            if (!FUNC_4(VAR_6,VAR_7)) {
                FUNC_2(VAR_2);
                continue;
            }


            GeoHashRange VAR_8[2];
            GeoHashBits VAR_9;
            VAR_8[0].min = -180;
            VAR_8[0].max = 180;
            VAR_8[1].min = -90;
            VAR_8[1].max = 90;
            FUNC_5(&VAR_8[0],&VAR_8[1],VAR_7[0],VAR_7[1],26,&VAR_9);

            char VAR_10[11];
            int VAR_11;
            for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
                int VAR_12 = (VAR_9.bits >> (52-((VAR_11+1)*5))) & 0x1f;
                VAR_10[VAR_11] = VAR_3[VAR_12];
            }
            VAR_10[10] = '\0';
            FUNC_1(VAR_2,VAR_10,10);
        }
    }
}
