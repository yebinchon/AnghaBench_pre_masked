
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;

INT FUNC_5(int VAR_2, char* VAR_3[])
{
    if ((VAR_2 < 2) || (VAR_2 > 5))
    {
       FUNC_3();
       return VAR_0;
    }

    if (VAR_3[1][0] == '-')
    {
        switch (VAR_3[1][1])
        {
           case 'a':
           case 'g':
                     if (VAR_2 == 2)
                         FUNC_2(((void*)0), ((void*)0));
                     else if (VAR_2 == 3)
                         FUNC_2(VAR_3[2], ((void*)0));
                     else if ((VAR_2 == 4) && ((FUNC_4(VAR_3[2], "-N")) == 0))
                         FUNC_2(((void*)0), VAR_3[3]);
                     else if ((VAR_2 == 5) && ((FUNC_4(VAR_3[3], "-N")) == 0))
                         FUNC_2(VAR_3[2], VAR_3[4]);
                     else
                     {
                         FUNC_3();
                         return VAR_0;
                     }
                     break;
           case 'd': if (VAR_2 == 3)
                         FUNC_1(VAR_3[2], ((void*)0));
                     else if (VAR_2 == 4)
                         FUNC_1(VAR_3[2], VAR_3[3]);
                     else
                     {
                         FUNC_3();
                         return VAR_0;
                     }
                     break;
           case 's': if (VAR_2 == 4)
                         FUNC_0(VAR_3[2], VAR_3[3], ((void*)0));
                     else if (VAR_2 == 5)
                         FUNC_0(VAR_3[2], VAR_3[3], VAR_3[4]);
                     else
                     {
                         FUNC_3();
                         return VAR_0;
                     }
                     break;
           default:
              FUNC_3();
              return VAR_0;
        }
    }
    else
        FUNC_3();

    return VAR_1;
}
