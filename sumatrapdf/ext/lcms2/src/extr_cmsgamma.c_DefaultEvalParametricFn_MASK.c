
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int const FUNC_2 (int const) ;
 int const FUNC_3 (int) ;
 int const FUNC_4 (int const,int const) ;

__attribute__((used)) static
cmsFloat64Number FUNC_5(cmsContext VAR_2, cmsInt32Number VAR_3, const cmsFloat64Number VAR_4[], cmsFloat64Number VAR_5)
{
    cmsFloat64Number VAR_6, VAR_7, VAR_8;
    FUNC_0(VAR_2);

    switch (VAR_3) {


    case 1:
        if (VAR_5 < 0) {

            if (FUNC_1(VAR_4[0] - 1.0) < VAR_0)
                VAR_7 = VAR_5;
            else
                VAR_7 = 0;
        }
        else
            VAR_7 = FUNC_4(VAR_5, VAR_4[0]);
        break;


    case -1:
        if (VAR_5 < 0) {

            if (FUNC_1(VAR_4[0] - 1.0) < VAR_0)
                VAR_7 = VAR_5;
            else
                VAR_7 = 0;
        }
        else
        {
            if (FUNC_1(VAR_4[0]) < VAR_0)
                VAR_7 = VAR_1;
            else
                VAR_7 = FUNC_4(VAR_5, 1 / VAR_4[0]);
        }
        break;




    case 2:
    {

        if (FUNC_1(VAR_4[1]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_8 = -VAR_4[2] / VAR_4[1];

            if (VAR_5 >= VAR_8) {

                VAR_6 = VAR_4[1] * VAR_5 + VAR_4[2];

                if (VAR_6 > 0)
                    VAR_7 = FUNC_4(VAR_6, VAR_4[0]);
                else
                    VAR_7 = 0;
            }
            else
                VAR_7 = 0;
        }
    }
    break;



     case -2:
     {
         if (FUNC_1(VAR_4[0]) < VAR_0 ||
             FUNC_1(VAR_4[1]) < VAR_0)
         {
             VAR_7 = 0;
         }
         else
         {
             if (VAR_5 < 0)
                 VAR_7 = 0;
             else
                 VAR_7 = (FUNC_4(VAR_5, 1.0 / VAR_4[0]) - VAR_4[2]) / VAR_4[1];

             if (VAR_7 < 0)
                 VAR_7 = 0;
         }
     }
     break;





    case 3:
    {
        if (FUNC_1(VAR_4[1]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_8 = -VAR_4[2] / VAR_4[1];
            if (VAR_8 < 0)
                VAR_8 = 0;

            if (VAR_5 >= VAR_8) {

                VAR_6 = VAR_4[1] * VAR_5 + VAR_4[2];

                if (VAR_6 > 0)
                    VAR_7 = FUNC_4(VAR_6, VAR_4[0]) + VAR_4[3];
                else
                    VAR_7 = 0;
            }
            else
                VAR_7 = VAR_4[3];
        }
    }
    break;





    case -3:
    {
        if (FUNC_1(VAR_4[1]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            if (VAR_5 >= VAR_4[3]) {

                VAR_6 = VAR_5 - VAR_4[3];

                if (VAR_6 > 0)
                    VAR_7 = (FUNC_4(VAR_6, 1 / VAR_4[0]) - VAR_4[2]) / VAR_4[1];
                else
                    VAR_7 = 0;
            }
            else {
                VAR_7 = -VAR_4[2] / VAR_4[1];
            }
        }
    }
    break;





    case 4:
        if (VAR_5 >= VAR_4[4]) {

            VAR_6 = VAR_4[1]*VAR_5 + VAR_4[2];

            if (VAR_6 > 0)
                VAR_7 = FUNC_4(VAR_6, VAR_4[0]);
            else
                VAR_7 = 0;
        }
        else
            VAR_7 = VAR_5 * VAR_4[3];
        break;




    case -4:
    {
        if (FUNC_1(VAR_4[0]) < VAR_0 ||
            FUNC_1(VAR_4[1]) < VAR_0 ||
            FUNC_1(VAR_4[3]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_6 = VAR_4[1] * VAR_4[4] + VAR_4[2];
            if (VAR_6 < 0)
                VAR_8 = 0;
            else
                VAR_8 = FUNC_4(VAR_6, VAR_4[0]);

            if (VAR_5 >= VAR_8) {

                VAR_7 = (FUNC_4(VAR_5, 1.0 / VAR_4[0]) - VAR_4[2]) / VAR_4[1];
            }
            else {
                VAR_7 = VAR_5 / VAR_4[3];
            }
        }
    }
    break;




    case 5:
        if (VAR_5 >= VAR_4[4]) {

            VAR_6 = VAR_4[1]*VAR_5 + VAR_4[2];

            if (VAR_6 > 0)
                VAR_7 = FUNC_4(VAR_6, VAR_4[0]) + VAR_4[5];
            else
                VAR_7 = VAR_4[5];
        }
        else
            VAR_7 = VAR_5*VAR_4[3] + VAR_4[6];
        break;





    case -5:
    {
        if (FUNC_1(VAR_4[1]) < VAR_0 ||
            FUNC_1(VAR_4[3]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_8 = VAR_4[3] * VAR_4[4] + VAR_4[6];
            if (VAR_5 >= VAR_8) {

                VAR_6 = VAR_5 - VAR_4[5];
                if (VAR_6 < 0)
                    VAR_7 = 0;
                else
                    VAR_7 = (FUNC_4(VAR_6, 1.0 / VAR_4[0]) - VAR_4[2]) / VAR_4[1];
            }
            else {
                VAR_7 = (VAR_5 - VAR_4[6]) / VAR_4[3];
            }
        }
    }
    break;






    case 6:
        VAR_6 = VAR_4[1]*VAR_5 + VAR_4[2];

        if (VAR_6 < 0)
            VAR_7 = VAR_4[3];
        else
            VAR_7 = FUNC_4(VAR_6, VAR_4[0]) + VAR_4[3];
        break;


    case -6:
    {
        if (FUNC_1(VAR_4[1]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_6 = VAR_5 - VAR_4[3];
            if (VAR_6 < 0)
                VAR_7 = 0;
            else
                VAR_7 = (FUNC_4(VAR_6, 1.0 / VAR_4[0]) - VAR_4[2]) / VAR_4[1];
        }
    }
    break;



    case 7:

       VAR_6 = VAR_4[2] * FUNC_4(VAR_5, VAR_4[0]) + VAR_4[3];
       if (VAR_6 <= 0)
           VAR_7 = VAR_4[4];
       else
           VAR_7 = VAR_4[1]*FUNC_3(VAR_6) + VAR_4[4];
       break;




    case -7:
    {
        if (FUNC_1(VAR_4[0]) < VAR_0 ||
            FUNC_1(VAR_4[1]) < VAR_0 ||
            FUNC_1(VAR_4[2]) < VAR_0)
        {
            VAR_7 = 0;
        }
        else
        {
            VAR_7 = FUNC_4((FUNC_4(10.0, (VAR_5 - VAR_4[4]) / VAR_4[1]) - VAR_4[3]) / VAR_4[2], 1.0 / VAR_4[0]);
        }
    }
    break;



   case 8:
       VAR_7 = (VAR_4[0] * FUNC_4(VAR_4[1], VAR_4[2] * VAR_5 + VAR_4[3]) + VAR_4[4]);
       break;




   case -8:

       VAR_8 = VAR_5 - VAR_4[4];
       if (VAR_8 < 0) VAR_7 = 0;
       else
       {
           if (FUNC_1(VAR_4[0]) < VAR_0 ||
               FUNC_1(VAR_4[2]) < VAR_0)
           {
               VAR_7 = 0;
           }
           else
           {
               VAR_7 = (FUNC_2(VAR_8 / VAR_4[0]) / FUNC_2(VAR_4[1]) - VAR_4[3]) / VAR_4[2];
           }
       }
       break;


   case 108:
       if (FUNC_1(VAR_4[0]) < VAR_0)
           VAR_7 = 0;
       else
           VAR_7 = FUNC_4(1.0 - FUNC_4(1 - VAR_5, 1/VAR_4[0]), 1/VAR_4[0]);
      break;






    case -108:
        VAR_7 = 1 - FUNC_4(1 - FUNC_4(VAR_5, VAR_4[0]), VAR_4[0]);
        break;

    default:

        return 0;
    }

    return VAR_7;
}
