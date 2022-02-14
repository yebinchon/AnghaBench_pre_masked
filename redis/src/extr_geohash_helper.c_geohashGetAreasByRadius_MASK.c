
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {double max; double min; } ;
struct TYPE_9__ {double max; double min; } ;
struct TYPE_13__ {TYPE_2__ longitude; TYPE_1__ latitude; } ;
struct TYPE_12__ {int north_east; int south_east; int east; int north_west; int south_west; int west; int north; int south; } ;
struct TYPE_11__ {TYPE_5__ area; TYPE_4__ neighbors; int hash; } ;
typedef int GeoHashRange ;
typedef TYPE_3__ GeoHashRadius ;
typedef TYPE_4__ GeoHashNeighbors ;
typedef int GeoHashBits ;
typedef TYPE_5__ GeoHashArea ;


 int FUNC_0 (int ) ;
 int FUNC_1 (double,double,double,double*) ;
 int FUNC_2 (int ,int ,int ,TYPE_5__*) ;
 int FUNC_3 (int *,int *,double,double,int,int *) ;
 int FUNC_4 (double,double) ;
 int FUNC_5 (int *,int *) ;
 double FUNC_6 (double,double,double,double) ;
 int FUNC_7 (int *,TYPE_4__*) ;

GeoHashRadius FUNC_8(double VAR_0, double VAR_1, double VAR_2) {
    GeoHashRange VAR_3, VAR_4;
    GeoHashRadius VAR_5;
    GeoHashBits VAR_6;
    GeoHashNeighbors VAR_7;
    GeoHashArea VAR_8;
    double VAR_9, VAR_10, VAR_11, VAR_12;
    double VAR_13[4];
    int VAR_14;

    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_13);
    VAR_9 = VAR_13[0];
    VAR_11 = VAR_13[1];
    VAR_10 = VAR_13[2];
    VAR_12 = VAR_13[3];

    VAR_14 = FUNC_4(VAR_2,VAR_1);

    FUNC_5(&VAR_3,&VAR_4);
    FUNC_3(&VAR_3,&VAR_4,VAR_0,VAR_1,VAR_14,&VAR_6);
    FUNC_7(&VAR_6,&VAR_7);
    FUNC_2(VAR_3,VAR_4,VAR_6,&VAR_8);






    int VAR_15 = 0;
    {
        GeoHashArea VAR_16, VAR_17, VAR_18, VAR_19;

        FUNC_2(VAR_3, VAR_4, VAR_7.north, &VAR_16);
        FUNC_2(VAR_3, VAR_4, VAR_7.south, &VAR_17);
        FUNC_2(VAR_3, VAR_4, VAR_7.east, &VAR_18);
        FUNC_2(VAR_3, VAR_4, VAR_7.west, &VAR_19);

        if (FUNC_6(VAR_0,VAR_1,VAR_0,VAR_16.latitude.max)
            < VAR_2) VAR_15 = 1;
        if (FUNC_6(VAR_0,VAR_1,VAR_0,VAR_17.latitude.min)
            < VAR_2) VAR_15 = 1;
        if (FUNC_6(VAR_0,VAR_1,VAR_18.longitude.max,VAR_1)
            < VAR_2) VAR_15 = 1;
        if (FUNC_6(VAR_0,VAR_1,VAR_19.longitude.min,VAR_1)
            < VAR_2) VAR_15 = 1;
    }

    if (VAR_14 > 1 && VAR_15) {
        VAR_14--;
        FUNC_3(&VAR_3,&VAR_4,VAR_0,VAR_1,VAR_14,&VAR_6);
        FUNC_7(&VAR_6,&VAR_7);
        FUNC_2(VAR_3,VAR_4,VAR_6,&VAR_8);
    }


    if (VAR_14 >= 2) {
        if (VAR_8.latitude.min < VAR_11) {
            FUNC_0(VAR_7.south);
            FUNC_0(VAR_7.south_west);
            FUNC_0(VAR_7.south_east);
        }
        if (VAR_8.latitude.max > VAR_12) {
            FUNC_0(VAR_7.north);
            FUNC_0(VAR_7.north_east);
            FUNC_0(VAR_7.north_west);
        }
        if (VAR_8.longitude.min < VAR_9) {
            FUNC_0(VAR_7.west);
            FUNC_0(VAR_7.south_west);
            FUNC_0(VAR_7.north_west);
        }
        if (VAR_8.longitude.max > VAR_10) {
            FUNC_0(VAR_7.east);
            FUNC_0(VAR_7.south_east);
            FUNC_0(VAR_7.north_east);
        }
    }
    VAR_5.hash = VAR_6;
    VAR_5.neighbors = VAR_7;
    VAR_5.area = VAR_8;
    return VAR_5;
}
