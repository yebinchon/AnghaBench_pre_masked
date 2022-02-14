
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int length; scalar_t__ sos; TYPE_1__* item; } ;
struct TYPE_6__ {scalar_t__* pcls; } ;
typedef TYPE_2__ IsolatedRun ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(IsolatedRun * VAR_12)
{
    int VAR_13;


    for (VAR_13=0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_9)
        {
            int VAR_14 = FUNC_1(VAR_12, VAR_13);
            if (VAR_14 == -1)
                *VAR_12->item[VAR_13].pcls = VAR_12->sos;
            else if (*VAR_12->item[VAR_14].pcls >= VAR_8)
                *VAR_12->item[VAR_13].pcls = VAR_10;
            else
                *VAR_12->item[VAR_13].pcls = *VAR_12->item[VAR_14].pcls;
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_4)
        {
            int VAR_15 = FUNC_1(VAR_12, VAR_13);
            while (VAR_15 > -1)
            {
                if (*VAR_12->item[VAR_15].pcls == VAR_11 || *VAR_12->item[VAR_15].pcls == VAR_7 || *VAR_12->item[VAR_15].pcls == VAR_0)
                {
                    if (*VAR_12->item[VAR_15].pcls == VAR_0)
                        *VAR_12->item[VAR_13].pcls = VAR_1;
                    break;
                }
                VAR_15 = FUNC_1(VAR_12, VAR_15);
            }
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_0)
            *VAR_12->item[VAR_13].pcls = VAR_11;
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_5)
        {
            int VAR_16 = FUNC_1(VAR_12, VAR_13);
            int VAR_17 = FUNC_0(VAR_12, VAR_13);

            if (VAR_16 > -1 && VAR_17 > -1 && *VAR_12->item[VAR_16].pcls == VAR_4 && *VAR_12->item[VAR_17].pcls == VAR_4)
                *VAR_12->item[VAR_13].pcls = VAR_4;
        }
        else if (*VAR_12->item[VAR_13].pcls == VAR_3)
        {
            int VAR_18 = FUNC_1(VAR_12, VAR_13);
            int VAR_19 = FUNC_0(VAR_12, VAR_13);

            if (VAR_18 > -1 && VAR_19 > -1 && *VAR_12->item[VAR_18].pcls == VAR_4 && *VAR_12->item[VAR_19].pcls == VAR_4)
                *VAR_12->item[VAR_13].pcls = VAR_4;
            else if (VAR_18 > -1 && VAR_19 > -1 && *VAR_12->item[VAR_18].pcls == VAR_1 && *VAR_12->item[VAR_19].pcls == VAR_1)
                *VAR_12->item[VAR_13].pcls = VAR_1;
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_6)
        {
            int VAR_20;
            for (VAR_20 = VAR_13-1 ; VAR_20 > -1; VAR_20--)
            {
                if (*VAR_12->item[VAR_20].pcls == VAR_2) continue;
                if (*VAR_12->item[VAR_20].pcls == VAR_6) continue;
                else if (*VAR_12->item[VAR_20].pcls == VAR_4) *VAR_12->item[VAR_13].pcls = VAR_4;
                else break;
            }
            if (*VAR_12->item[VAR_13].pcls == VAR_6)
            {
                for (VAR_20 = VAR_13+1; VAR_20 < VAR_12->length; VAR_20++)
                {
                    if (*VAR_12->item[VAR_20].pcls == VAR_2) continue;
                    if (*VAR_12->item[VAR_20].pcls == VAR_6) continue;
                    else if (*VAR_12->item[VAR_20].pcls == VAR_4) *VAR_12->item[VAR_13].pcls = VAR_4;
                    else break;
                }
            }
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_6 || *VAR_12->item[VAR_13].pcls == VAR_5 || *VAR_12->item[VAR_13].pcls == VAR_3 || *VAR_12->item[VAR_13].pcls == VAR_10)
        {
            int VAR_21 = VAR_13-1;
            int VAR_22 = VAR_13+1;
            if (VAR_21 > -1 && *VAR_12->item[VAR_21].pcls == VAR_2)
                *VAR_12->item[VAR_21].pcls = VAR_10;
            if (VAR_22 < VAR_12->length && *VAR_12->item[VAR_22].pcls == VAR_2)
                *VAR_12->item[VAR_22].pcls = VAR_10;

            *VAR_12->item[VAR_13].pcls = VAR_10;
        }
    }


    for (VAR_13 = 0; VAR_13 < VAR_12->length; VAR_13++)
    {
        if (*VAR_12->item[VAR_13].pcls == VAR_4)
        {
            int VAR_23;
            for (VAR_23 = FUNC_1(VAR_12, VAR_13); VAR_23 > -1; VAR_23 = FUNC_1(VAR_12, VAR_23))
                if (*VAR_12->item[VAR_23].pcls == VAR_11 || *VAR_12->item[VAR_23].pcls == VAR_7)
                {
                    if (*VAR_12->item[VAR_23].pcls == VAR_7)
                        *VAR_12->item[VAR_13].pcls = VAR_7;
                    break;
                }
            if (VAR_12->sos == VAR_7 && VAR_23 == -1)
                *VAR_12->item[VAR_13].pcls = VAR_7;
        }
    }
}
