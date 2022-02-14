
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {double longitude; double latitude; double dist; double score; int member; } ;
typedef TYPE_1__ geoPoint ;
typedef int geoArray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double,double*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (double,double,double,double,double,double*) ;

int FUNC_3(geoArray *VAR_2, double VAR_3, double VAR_4, double VAR_5, double VAR_6, sds VAR_7) {
    double VAR_8, VAR_9[2];

    if (!FUNC_0(VAR_6,VAR_9)) return VAR_0;


    if (!FUNC_2(VAR_3,VAR_4, VAR_9[0], VAR_9[1],
                                           VAR_5, &VAR_8))
    {
        return VAR_0;
    }


    geoPoint *VAR_10 = FUNC_1(VAR_2);
    VAR_10->longitude = VAR_9[0];
    VAR_10->latitude = VAR_9[1];
    VAR_10->dist = VAR_8;
    VAR_10->member = VAR_7;
    VAR_10->score = VAR_6;
    return VAR_1;
}
