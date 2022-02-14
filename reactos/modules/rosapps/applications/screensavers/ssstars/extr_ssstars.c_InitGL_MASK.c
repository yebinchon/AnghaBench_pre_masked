
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bFinePerspective; scalar_t__ bEnableFiltering; scalar_t__ bSmoothShading; } ;
struct TYPE_6__ {float x1; float y1; float x2; float y2; float z; } ;
struct TYPE_5__ {int bmBits; int bmHeight; int bmWidth; } ;
typedef int HBITMAP ;
typedef TYPE_1__ BITMAP ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 unsigned int VAR_30 ;
 float VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 TYPE_3__ VAR_36 ;
 TYPE_2__* VAR_37 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,float) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_38 ;
 int FUNC_13 (int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(HBITMAP VAR_39)
{
    BITMAP VAR_40;
    unsigned int VAR_41;
    float VAR_42, VAR_43, VAR_44;


    FUNC_3(VAR_34, VAR_33, VAR_32, VAR_35);

    if (VAR_36.bSmoothShading)

        FUNC_12( VAR_24 );
    else

        FUNC_12( VAR_12 );


    FUNC_11( VAR_14, VAR_11 );

    FUNC_5( VAR_9 );


    FUNC_6( VAR_16 );

    FUNC_9( VAR_13, VAR_28 );

    FUNC_4( VAR_13, VAR_4 );

    FUNC_6( VAR_7 );

    FUNC_6( VAR_15 );


    FUNC_10( VAR_15, VAR_8, 0.01f);
    FUNC_10( VAR_15, VAR_18, 0.01f);
    FUNC_10( VAR_15, VAR_22, 0.005f);


    FUNC_2( VAR_6 );


    FUNC_17( FUNC_18( ((void*)0) ) );


    for (VAR_41 = 0; VAR_41 < VAR_30; VAR_41++)
    {
        VAR_42 = ( (float) FUNC_16() / VAR_31 - .5f ) * VAR_3;
        VAR_43 = ( (float) FUNC_16() / VAR_31 - .5f ) * VAR_2;
        VAR_44 = ( (float) FUNC_16() / VAR_31 ) * VAR_1 + VAR_0;

        VAR_37[VAR_41].x1 = -1.f + VAR_42;
        VAR_37[VAR_41].y1 = -1.f + VAR_43;
        VAR_37[VAR_41].x2 = 1.f + VAR_42;
        VAR_37[VAR_41].y2 = 1.f + VAR_43;
        VAR_37[VAR_41].z = VAR_44;
    }

    FUNC_7(1, &VAR_38);


    FUNC_1(VAR_25, VAR_38);

    if (VAR_36.bEnableFiltering)
    {
        FUNC_14(VAR_25,VAR_26,VAR_17);
        FUNC_14(VAR_25,VAR_27,VAR_17);
    } else {
        FUNC_14(VAR_25,VAR_26,VAR_19);
        FUNC_14(VAR_25,VAR_27,VAR_19);
    }


    FUNC_0(VAR_39, sizeof(BITMAP), &VAR_40);





    FUNC_15(VAR_25, 4, VAR_40.bmWidth, VAR_40.bmHeight, VAR_23, VAR_29, VAR_40.bmBits);



    FUNC_5(VAR_25);

    if (VAR_36.bFinePerspective)

        FUNC_8(VAR_21, VAR_10);
    else

        FUNC_8(VAR_21, VAR_20);


    FUNC_6( VAR_5 );
}
