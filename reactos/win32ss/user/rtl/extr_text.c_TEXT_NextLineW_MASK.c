
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {unsigned int before; scalar_t__ under; int after; int len; } ;
typedef TYPE_1__ ellipsis_data ;
typedef scalar_t__ WCHAR ;
struct TYPE_13__ {scalar_t__ cy; int cx; int member_1; int member_0; } ;
typedef TYPE_2__ SIZE ;
typedef int PULONG ;
typedef int HDC ;
typedef int DWORD ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__*,unsigned int,int,int*,int *,TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__*,unsigned int,int,int ,int *,TYPE_2__*,int ) ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;
 scalar_t__ const VAR_11 ;
 scalar_t__ const VAR_12 ;
 int FUNC_2 (int ,scalar_t__*,int,unsigned int*,int,TYPE_2__*,scalar_t__*,int*,int*) ;
 int FUNC_3 (int ,scalar_t__*,int,unsigned int*,int,TYPE_2__*,scalar_t__*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__ const*,int,TYPE_1__*) ;
 int FUNC_5 (int*,scalar_t__ const**,int,scalar_t__ const*,int,unsigned int,int) ;
 int FUNC_6 (int ,scalar_t__*,int,unsigned int*,int,int,int,unsigned int*,TYPE_2__*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,scalar_t__ const*) ;

__attribute__((used)) static const WCHAR *FUNC_9( HDC VAR_13, const WCHAR *VAR_14, int *VAR_15,
                                 WCHAR *VAR_16, int *VAR_17, int VAR_18, DWORD VAR_19,
                                 SIZE *VAR_20, int VAR_21, WCHAR **VAR_22,
                                 int VAR_23, int *VAR_24,
                                 ellipsis_data *VAR_25)
{
    int VAR_26 = 0, VAR_27 = 0;
    int VAR_28 = 0;
    SIZE VAR_29 = {0, 0};
    int VAR_30 = *VAR_17;
    int VAR_31, VAR_32, VAR_33;
    int VAR_34;
    int VAR_35;
    int VAR_36;
    int VAR_37;
    unsigned int VAR_38;
    int VAR_39;
    *VAR_24 = -1;



    VAR_20->cy = 0;
    while (*VAR_15)
    {



        if (VAR_14[VAR_26] == VAR_12 && (VAR_19 & VAR_3))
        {
            VAR_28 = ((VAR_28/VAR_23)+1)*VAR_23;
            (*VAR_15)--; if (VAR_27 < VAR_30) VAR_16[VAR_27++] = VAR_14[VAR_26++]; else VAR_26++;
            while (*VAR_15 && VAR_14[VAR_26] == VAR_12)
            {
                VAR_28 += VAR_23;
                (*VAR_15)--; if (VAR_27 < VAR_30) VAR_16[VAR_27++] = VAR_14[VAR_26++]; else VAR_26++;
            }
        }




        VAR_31 = VAR_26;
        VAR_32 = *VAR_15;
        VAR_33 = VAR_27;

        while (*VAR_15 &&
               (VAR_14[VAR_26] != VAR_12 || !(VAR_19 & VAR_3)) &&
               ((VAR_14[VAR_26] != VAR_1 && VAR_14[VAR_26] != VAR_10) || (VAR_19 & VAR_6)))
        {
            if ((VAR_19 & VAR_4) || *VAR_15 <= 1)
            {
                (*VAR_15)--; if (VAR_27 < VAR_30) VAR_16[VAR_27++] = VAR_14[VAR_26++]; else VAR_26++;
                continue;
            }

     if (VAR_14[VAR_26] == VAR_11 || VAR_14[VAR_26] == VAR_0) {
                (*VAR_15)--, VAR_26++;
                if (VAR_14[VAR_26] == VAR_11)
                {

      (*VAR_15)--; if (VAR_27 < VAR_30) VAR_16[VAR_27++] = VAR_14[VAR_26++]; else VAR_26++;
                }
  else if (*VAR_24 == -1 || *VAR_24 >= VAR_33)
                {
                    *VAR_24 = VAR_27;
                }




     }
     else if (VAR_14[VAR_26] == VAR_9)
            {

                (*VAR_15)--, VAR_26++;
                (*VAR_15)--, VAR_26++;
            }
            else
            {
                (*VAR_15)--; if (VAR_27 < VAR_30) VAR_16[VAR_27++] = VAR_14[VAR_26++]; else VAR_26++;
            }
        }






        VAR_38 = VAR_27 - VAR_33;
        VAR_34 = VAR_18 - VAR_28;



        FUNC_0 (VAR_13, VAR_16 + VAR_33, VAR_38, VAR_34, &VAR_35, ((void*)0), &VAR_29);







        VAR_36 = 0;
        VAR_37 = (VAR_35 >= VAR_38);
        if (!VAR_37 && (VAR_19 & VAR_7))
        {
            const WCHAR *VAR_40;
            unsigned int VAR_41;
            FUNC_6 (VAR_13, VAR_16+VAR_33, VAR_30-VAR_33, &VAR_38,
                            VAR_34, VAR_19, VAR_35, &VAR_41, &VAR_29);
            VAR_37 = (VAR_29.cx <= VAR_34);

            FUNC_5 (VAR_15, &VAR_40, VAR_32, VAR_14+VAR_31, VAR_26-VAR_31,
                            VAR_41, !(VAR_19 & VAR_4));
            VAR_26 = VAR_40 - VAR_14;
            VAR_36 = 1;
        }
        VAR_25->before = VAR_38;
        VAR_25->under = 0;
        VAR_25->after = 0;
        VAR_25->len = 0;
        VAR_39 = 0;
        if (!VAR_37 && (VAR_19 & VAR_5))
        {
            FUNC_3 (VAR_13, VAR_16 + VAR_33, VAR_30-VAR_33, &VAR_38,
                                VAR_34, &VAR_29, *VAR_22, VAR_25);
            VAR_37 = (VAR_29.cx <= VAR_34);
            VAR_39 = 1;
        }


        if ((!VAR_37 && (VAR_19 & VAR_8)) ||
            ((VAR_19 & VAR_2) &&
              ((VAR_21 && *VAR_15) ||
               (FUNC_8 (*VAR_15, &VAR_14[VAR_26]) && !VAR_37))))
        {
            int VAR_42, VAR_43;
            FUNC_2 (VAR_13, VAR_16 + VAR_33, VAR_30-VAR_33, &VAR_38,
                            VAR_34, &VAR_29, *VAR_22, &VAR_42, &VAR_43);
            if (VAR_42 > VAR_25->before)
            {

                VAR_25->after = VAR_42 - VAR_25->before - VAR_25->len;

            }
            else
            {



                FUNC_7 (VAR_25->under == 0 && VAR_25->after == 0);
                VAR_25->before = VAR_42;
                VAR_25->len = VAR_43;



            }
            VAR_37 = (VAR_29.cx <= VAR_34);
            VAR_39 = 1;
        }




        if ((VAR_19 & VAR_3) && VAR_39)
        {
            if (VAR_19 & VAR_6)
                *VAR_15 = 0;
            else
            {
                while ((*VAR_15) && VAR_14[VAR_26] != VAR_1 && VAR_14[VAR_26] != VAR_10)
                {
                    (*VAR_15)--, VAR_26++;
                }
            }
        }

        VAR_27 = VAR_33 + VAR_38;
        if (*VAR_24 >= VAR_33 + VAR_25->before)
        {
            *VAR_24 = FUNC_4 (VAR_14 + VAR_31, VAR_26 - VAR_31, VAR_25);
            if (*VAR_24 != -1)
                *VAR_24 += VAR_33;
        }

        VAR_28 += VAR_29.cx;
        if (VAR_29.cy > VAR_20->cy)
            VAR_20->cy = VAR_29.cy;

        if (VAR_36)
            break;
        else if (!*VAR_15)
            break;
        else if (VAR_14[VAR_26] == VAR_1 || VAR_14[VAR_26] == VAR_10)
        {
            (*VAR_15)--, VAR_26++;
            if (*VAR_15 && (VAR_14[VAR_26] == VAR_1 || VAR_14[VAR_26] == VAR_10) && VAR_14[VAR_26] != VAR_14[VAR_26-1])
            {
                (*VAR_15)--, VAR_26++;
            }
            break;
        }

    }

    VAR_20->cx = VAR_28;
    *VAR_17 = VAR_27;
    if (*VAR_15)
        return (&VAR_14[VAR_26]);
    else
        return ((void*)0);
}
