
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* y; void* x; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5( POINT *VAR_3, POINT **VAR_4, INT *VAR_5,
    INT *VAR_6, INT VAR_7 )
{
    if(*VAR_6 == *VAR_5) {
        *VAR_5 *= 2;
        *VAR_4 = FUNC_3(VAR_1, *VAR_5 * sizeof(POINT), VAR_2);
        if (*VAR_4 == ((void*)0))
        {

            FUNC_4(VAR_0);
            return;
        }
    }

    if(!VAR_7 || FUNC_2(VAR_7, VAR_3)) {
        if(*VAR_6 == 0) {
            (*VAR_4)[0].x = FUNC_1(VAR_3[0].x);
            (*VAR_4)[0].y = FUNC_1(VAR_3[0].y);
            *VAR_6 = 1;
        }
 (*VAR_4)[*VAR_6].x = FUNC_1(VAR_3[3].x);
        (*VAR_4)[*VAR_6].y = FUNC_1(VAR_3[3].y);
        (*VAR_6) ++;
    } else {
        POINT VAR_8[4];
        VAR_8[3]=VAR_3[3];
        FUNC_0(VAR_8[2], VAR_3[2], VAR_3[3]);
        FUNC_0(VAR_8[0], VAR_3[1], VAR_3[2]);
        FUNC_0(VAR_8[1],VAR_8[0],VAR_8[2]);

        FUNC_0(VAR_3[1], VAR_3[0], VAR_3[1]);
        FUNC_0(VAR_3[2], VAR_3[1], VAR_8[0]);
        FUNC_0(VAR_3[3], VAR_3[2], VAR_8[1]);

        VAR_8[0]=VAR_3[3];


        FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7-1);
        FUNC_5(VAR_8, VAR_4, VAR_5, VAR_6, VAR_7-1);
    }
}
