
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int south_west; int south_east; int north_east; int north_west; int north; int south; int west; int east; } ;
typedef TYPE_1__ GeoHashNeighbors ;
typedef int GeoHashBits ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(const GeoHashBits *VAR_0, GeoHashNeighbors *VAR_1) {
    VAR_1->east = *VAR_0;
    VAR_1->west = *VAR_0;
    VAR_1->north = *VAR_0;
    VAR_1->south = *VAR_0;
    VAR_1->south_east = *VAR_0;
    VAR_1->south_west = *VAR_0;
    VAR_1->north_east = *VAR_0;
    VAR_1->north_west = *VAR_0;

    FUNC_0(&VAR_1->east, 1);
    FUNC_1(&VAR_1->east, 0);

    FUNC_0(&VAR_1->west, -1);
    FUNC_1(&VAR_1->west, 0);

    FUNC_0(&VAR_1->south, 0);
    FUNC_1(&VAR_1->south, -1);

    FUNC_0(&VAR_1->north, 0);
    FUNC_1(&VAR_1->north, 1);

    FUNC_0(&VAR_1->north_west, -1);
    FUNC_1(&VAR_1->north_west, 1);

    FUNC_0(&VAR_1->north_east, 1);
    FUNC_1(&VAR_1->north_east, 1);

    FUNC_0(&VAR_1->south_east, 1);
    FUNC_1(&VAR_1->south_east, -1);

    FUNC_0(&VAR_1->south_west, -1);
    FUNC_1(&VAR_1->south_west, -1);
}
