
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef scalar_t__ HDC ;
typedef int HBITMAP ;
typedef int COLORREF ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int,int,int,int,scalar_t__,int,int,int ) ;
 int FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int,int,int,int,scalar_t__,int,int,int ,int ) ;
 int FUNC_7 (scalar_t__,int,int,int,int,scalar_t__,int,int,int,int,int ,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static inline BOOL FUNC_9 (HDC VAR_4, int VAR_5, int VAR_6,
                                     int VAR_7, int VAR_8,
                                     HDC VAR_9, int VAR_10, int VAR_11,
                                     int VAR_12, int VAR_13,
                                     int VAR_14,
                                     INT VAR_15, COLORREF VAR_16)
{
    if (VAR_14 == VAR_2)
    {
        HDC VAR_17;
        BOOL VAR_18 = VAR_0;

        if (!VAR_12 || !VAR_13) return VAR_3;



        if (VAR_12 >= VAR_7 && VAR_13 >= VAR_8)
        {
            int VAR_19 = FUNC_8 (VAR_7, VAR_12);
            int VAR_20 = FUNC_8 (VAR_8, VAR_13);

            return FUNC_6 (VAR_4, VAR_5, VAR_6, VAR_19, VAR_20,
                                VAR_9, VAR_10, VAR_11,
                                VAR_15, VAR_16);
        }




        VAR_17 = FUNC_2(VAR_9);
        if (VAR_17 != 0)
        {
            HBITMAP VAR_21;
            HBITMAP VAR_22;
            int VAR_23, VAR_24;
            int VAR_25, VAR_26;
            int VAR_27, VAR_28;
            int VAR_29;


            VAR_23 = ((VAR_7 + VAR_12 - 1) / VAR_12) * VAR_12;
            VAR_24 = ((VAR_8 + VAR_13 - 1) / VAR_13) * VAR_13;
            VAR_21 = FUNC_1(VAR_9, VAR_23, VAR_24);
            VAR_22 = FUNC_5(VAR_17, VAR_21);


            FUNC_0(VAR_17, 0, 0, VAR_12, VAR_13, VAR_9, VAR_10, VAR_11, VAR_1);


            VAR_25 = VAR_12;
            VAR_26 = VAR_23 - VAR_12;
            VAR_29 = VAR_12;
            while (VAR_26 > 0)
            {
                VAR_29 = FUNC_8(VAR_29, VAR_26);
                FUNC_0(VAR_17, VAR_25, 0, VAR_29, VAR_13, VAR_17, 0, 0, VAR_1);
                VAR_25 += VAR_29;
                VAR_26 -= VAR_29;
                VAR_29 *= 2;
            }


            VAR_27 = VAR_13;
            VAR_28 = VAR_24 - VAR_13;
            VAR_29 = VAR_13;
            while (VAR_28 > 0)
            {
                VAR_29 = FUNC_8(VAR_29, VAR_28);
                FUNC_0(VAR_17, 0, VAR_27, VAR_23, VAR_29, VAR_17, 0, 0, VAR_1);
                VAR_27 += VAR_29;
                VAR_28 -= VAR_29;
                VAR_29 *= 2;
            }


            VAR_18 = FUNC_6 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                          VAR_17, 0, 0,
                          VAR_15, VAR_16);

            FUNC_5(VAR_17, VAR_22);
            FUNC_4(VAR_21);
        }
        FUNC_3(VAR_17);
        return VAR_18;
    }
    else
    {
        return FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                                   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
                                   VAR_15, VAR_16);
    }
}
