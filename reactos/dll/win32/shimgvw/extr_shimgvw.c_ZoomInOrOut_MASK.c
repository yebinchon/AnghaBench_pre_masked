
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t INT ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(BOOL VAR_11)
{
    INT VAR_12;

    if (VAR_11)
    {

        for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); ++VAR_12)
        {
            if (VAR_7 < VAR_8[VAR_12])
                break;
        }
        if (VAR_12 == FUNC_0(VAR_8))
            VAR_7 = VAR_3;
        else
            VAR_7 = VAR_8[VAR_12];


        FUNC_2(VAR_10, VAR_5, VAR_1, VAR_6);
        if (VAR_7 >= VAR_3)
            FUNC_2(VAR_10, VAR_5, VAR_2, VAR_0);
        else
            FUNC_2(VAR_10, VAR_5, VAR_2, VAR_6);
    }
    else
    {

        for (VAR_12 = FUNC_0(VAR_8); VAR_12 > 0; )
        {
            --VAR_12;
            if (VAR_8[VAR_12] < VAR_7)
                break;
        }
        if (VAR_12 < 0)
            VAR_7 = VAR_4;
        else
            VAR_7 = VAR_8[VAR_12];


        FUNC_2(VAR_10, VAR_5, VAR_2, VAR_6);
        if (VAR_7 <= VAR_4)
            FUNC_2(VAR_10, VAR_5, VAR_1, VAR_0);
        else
            FUNC_2(VAR_10, VAR_5, VAR_1, VAR_6);
    }


    FUNC_1(VAR_9, ((void*)0), VAR_6);
}
