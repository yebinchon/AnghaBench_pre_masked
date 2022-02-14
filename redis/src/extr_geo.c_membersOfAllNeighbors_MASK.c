
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int robj ;
typedef int neighbors ;
typedef int geoArray ;
struct TYPE_16__ {unsigned int min; unsigned int max; } ;
struct TYPE_15__ {unsigned int min; unsigned int max; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_19__ {TYPE_4__ latitude; TYPE_3__ longitude; TYPE_2__ member_0; } ;
struct TYPE_18__ {scalar_t__ bits; scalar_t__ step; } ;
struct TYPE_13__ {TYPE_6__ south_west; TYPE_6__ south_east; TYPE_6__ north_west; TYPE_6__ north_east; TYPE_6__ west; TYPE_6__ east; TYPE_6__ south; TYPE_6__ north; } ;
struct TYPE_17__ {TYPE_1__ neighbors; TYPE_6__ hash; } ;
typedef int GeoHashRange ;
typedef TYPE_5__ GeoHashRadius ;
typedef TYPE_6__ GeoHashBits ;
typedef TYPE_7__ GeoHashArea ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_6__) ;
 int FUNC_2 (int ,int ,TYPE_6__,TYPE_7__*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_6__,int *,double,double,double) ;

int FUNC_5(robj *VAR_0, GeoHashRadius VAR_1, double VAR_2, double VAR_3, double VAR_4, geoArray *VAR_5) {
    GeoHashBits VAR_6[9];
    unsigned int VAR_7, VAR_8 = 0, VAR_9 = 0;
    int VAR_10 = 0;

    VAR_6[0] = VAR_1.hash;
    VAR_6[1] = VAR_1.neighbors.north;
    VAR_6[2] = VAR_1.neighbors.south;
    VAR_6[3] = VAR_1.neighbors.east;
    VAR_6[4] = VAR_1.neighbors.west;
    VAR_6[5] = VAR_1.neighbors.north_east;
    VAR_6[6] = VAR_1.neighbors.north_west;
    VAR_6[7] = VAR_1.neighbors.south_east;
    VAR_6[8] = VAR_1.neighbors.south_west;



    for (VAR_7 = 0; VAR_7 < sizeof(VAR_6) / sizeof(*VAR_6); VAR_7++) {
        if (FUNC_1(VAR_6[VAR_7])) {
            if (VAR_10) FUNC_0("neighbors[%d] is zero",VAR_7);
            continue;
        }


        if (VAR_10) {
            GeoHashRange VAR_11, VAR_12;
            FUNC_3(&VAR_11,&VAR_12);
            GeoHashArea VAR_13 = {{0}};
            FUNC_2(VAR_11, VAR_12, VAR_6[VAR_7], &VAR_13);


            FUNC_0("neighbors[%d]:\n",VAR_7);
            FUNC_0("area.longitude.min: %f\n", VAR_13.longitude.min);
            FUNC_0("area.longitude.max: %f\n", VAR_13.longitude.max);
            FUNC_0("area.latitude.min: %f\n", VAR_13.latitude.min);
            FUNC_0("area.latitude.max: %f\n", VAR_13.latitude.max);
            FUNC_0("\n");
        }





        if (VAR_9 &&
            VAR_6[VAR_7].bits == VAR_6[VAR_9].bits &&
            VAR_6[VAR_7].step == VAR_6[VAR_9].step)
        {
            if (VAR_10)
                FUNC_0("Skipping processing of %d, same as previous\n",VAR_7);
            continue;
        }
        VAR_8 += FUNC_4(VAR_0, VAR_6[VAR_7], VAR_5, VAR_2, VAR_3, VAR_4);
        VAR_9 = VAR_7;
    }
    return VAR_8;
}
