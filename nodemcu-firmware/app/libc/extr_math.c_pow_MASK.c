
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double* VAR_4 ;
 double* VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double FUNC_0 (double,int) ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 double VAR_15 ;
 double VAR_16 ;
 double VAR_17 ;
 double VAR_18 ;
 double VAR_19 ;
 double VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 double VAR_25 ;
 double VAR_26 ;
 double VAR_27 ;
 double VAR_28 ;

double FUNC_1(double VAR_29, double VAR_30)
{
    double FUNC_2(), VAR_31, FUNC_0(), VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
    int VAR_42, VAR_43, VAR_44;
    bool VAR_45 = 0;

    if (VAR_30 == 0.0)
        return (1.0);
    if (VAR_29 <= 0.0)
    {
        if (VAR_29 == 0.0)
        {
            if (VAR_30 > 0.0)
                return 0.0;


        }
        else
        {

            VAR_29 = -VAR_29;

            if (VAR_30 != (int) VAR_30) {
                return VAR_3;
            }
            VAR_45 = ((int) VAR_30) & 1;
        }
    }
    VAR_31 = FUNC_2(VAR_29, &VAR_43);
    VAR_44 = 0;
    if (VAR_31 <= VAR_4[8])
        VAR_44 = 8;
    if (VAR_31 <= VAR_4[VAR_44 + 4])
        VAR_44 += 4;
    if (VAR_31 <= VAR_4[VAR_44 + 2])
        VAR_44 += 2;
    VAR_44++;
    VAR_41 = ((VAR_31 - VAR_4[VAR_44]) - VAR_5[VAR_44 / 2]) / (VAR_31 + VAR_4[VAR_44]);
    VAR_41 += VAR_41;
    VAR_35 = VAR_41 * VAR_41;
    VAR_32 = (((VAR_11 * VAR_35 + VAR_10) * VAR_35 + VAR_9) * VAR_35 + VAR_8) * VAR_35 * VAR_41;
    VAR_32 += VAR_7 * VAR_32;
    VAR_34 = (VAR_32 + VAR_41 * VAR_7) + VAR_41;
    VAR_33 = 0.0625 * (double)(16 * VAR_43 - VAR_44);
    VAR_39 = 0.0625 * (double)((int)(16.0 * VAR_30));
    VAR_40 = VAR_30 - VAR_39;
    VAR_36 = VAR_34 * VAR_30 + VAR_33 * VAR_40;
    VAR_37 = 0.0625 * (double)((int)(16.0 * VAR_36));
    VAR_38 = VAR_36 - VAR_37;
    VAR_36 = VAR_37 + VAR_33 * VAR_39;
    VAR_37 = 0.0625 * (double)((int)(16.0 * VAR_36));
    VAR_38 += (VAR_36 - VAR_37);
    VAR_36 = 0.0625 * (double)((int)(16.0 * VAR_38));
    VAR_42 = 16.0 * (VAR_37 + VAR_36);
    VAR_38 -= VAR_36;
    while (VAR_38 > 0.0)
    {
        VAR_42++;
        VAR_38 -= 0.0625;
    }
    if (VAR_42 > VAR_1)
    {

        return (VAR_0);
    }
    if (VAR_42 < VAR_2)
    {

        return (0.0);
    }
    VAR_43 = VAR_42 / 16;
    if (VAR_42 >= 0)
        VAR_43++;
    VAR_44 = 16 * VAR_43 - VAR_42;
    VAR_41 = ((((((VAR_18 * VAR_38 + VAR_17) * VAR_38 + VAR_16) * VAR_38 + VAR_15) * VAR_38 + VAR_14) * VAR_38 + VAR_13) * VAR_38 + VAR_12) * VAR_38;
    VAR_41 = VAR_4[VAR_44] + VAR_4[VAR_44] * VAR_41;
    double VAR_46 = FUNC_0(VAR_41, VAR_43);
    return VAR_45 ? -VAR_46 : VAR_46;
}
