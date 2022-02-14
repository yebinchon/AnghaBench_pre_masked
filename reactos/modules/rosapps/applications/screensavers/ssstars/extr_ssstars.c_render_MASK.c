
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int uiRotation; unsigned int uiNumStars; scalar_t__ uiSpeed; } ;
struct TYPE_3__ {float x1; float y1; scalar_t__ z; float x2; float y2; } ;


 scalar_t__ VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 float VAR_9 ;


 TYPE_2__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 (float) ;
 float VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (float,float,float,float) ;
 int FUNC_8 (float,float) ;
 int FUNC_9 (float,float,scalar_t__) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(void)
{
    unsigned int VAR_13;
    float VAR_14;
    float VAR_15;
    float VAR_16, VAR_17;


    VAR_15 = (float)VAR_10.uiSpeed / 100.f;

    FUNC_5(VAR_7);

    FUNC_2(VAR_6,VAR_4);

    switch (VAR_10.uiRotation) {
    case 129:
        VAR_12 += VAR_15;
        FUNC_7( VAR_12, 0.0f, 0.0f, 1.0f );
        break;

    case 128:
        VAR_12 += VAR_15 / 75.f;
        VAR_14 = (float)(50. * FUNC_0(VAR_12));
        FUNC_7( VAR_14, 0.0f, 0.0f, 1.0f );
        break;
    }

    FUNC_3(255, 255, 255);

    FUNC_1(VAR_5);


    for (VAR_13 = 0; VAR_13 < VAR_10.uiNumStars; VAR_13++)
    {
        FUNC_8(0.0f, 0.0f); FUNC_9(VAR_11[VAR_13].x1, VAR_11[VAR_13].y1, VAR_11[VAR_13].z);
        FUNC_8(1.0f, 0.0f); FUNC_9(VAR_11[VAR_13].x2, VAR_11[VAR_13].y1, VAR_11[VAR_13].z);
        FUNC_8(1.0f, 1.0f); FUNC_9(VAR_11[VAR_13].x2, VAR_11[VAR_13].y2, VAR_11[VAR_13].z);
        FUNC_8(0.0f, 1.0f); FUNC_9(VAR_11[VAR_13].x1, VAR_11[VAR_13].y2, VAR_11[VAR_13].z);


        VAR_11[VAR_13].z += VAR_15;


        if( VAR_11[VAR_13].z > VAR_8 + VAR_3 ||
            VAR_11[VAR_13].z < VAR_0 )
        {
            VAR_16 = ( (float) FUNC_10() / VAR_9 - .5f ) * VAR_2;
            VAR_17 = ( (float) FUNC_10() / VAR_9 - .5f ) * VAR_1;

            VAR_11[VAR_13].x1 = -1.f + VAR_16;
            VAR_11[VAR_13].y1 = -1.f + VAR_17;
            VAR_11[VAR_13].x2 = 1.f + VAR_16;
            VAR_11[VAR_13].y2 = 1.f + VAR_17;
            VAR_11[VAR_13].z = VAR_0;
        }
    }

    FUNC_6();

    FUNC_4(VAR_7);
}
