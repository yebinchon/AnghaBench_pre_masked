
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* y; void* x; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 TYPE_1__* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__**,int*,int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*,int) ;

POINT *FUNC_6( const POINT *VAR_4, INT VAR_5, INT *VAR_6 )
{
    POINT *VAR_7;
    INT VAR_8, VAR_9 = VAR_1, VAR_10;

    if (VAR_5 == 1 || (VAR_5 - 1) % 3 != 0) {
        FUNC_2("Invalid no. of points %d\n", VAR_5);
 return ((void*)0);
    }
    *VAR_6 = 0;

    VAR_7 = FUNC_3(VAR_2, VAR_9 * sizeof(POINT), VAR_3);
    if (!VAR_7) return ((void*)0);

    for(VAR_8 = 0; VAR_8 < (VAR_5-1)/3; VAR_8++) {
 POINT VAR_11[4];
 FUNC_5(VAR_11, VAR_4 + VAR_8 * 3, sizeof(POINT) * 4);
 for(VAR_10 = 0; VAR_10 < 4; VAR_10++) {
     VAR_11[VAR_10].x = FUNC_0(VAR_11[VAR_10].x);
     VAR_11[VAR_10].y = FUNC_0(VAR_11[VAR_10].y);
 }
        FUNC_4( VAR_11, &VAR_7, &VAR_9, VAR_6, VAR_0 );
    }
    FUNC_1("Produced %d points\n", *VAR_6);
    return VAR_7;
}
