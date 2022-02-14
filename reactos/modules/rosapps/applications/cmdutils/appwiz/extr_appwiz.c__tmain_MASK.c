
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCHAR ;
typedef int TCHAR ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(int VAR_3, _TCHAR* VAR_4[])
{
    INT VAR_5;
    TCHAR VAR_6[4 + 1];

    FUNC_2(FUNC_4("Application Wizard"));

    if (VAR_3 < 2)
    {
        FUNC_1();
        return 0;
    }

 if (FUNC_5(VAR_4[1], FUNC_4("/?"), 2) == 0)
 {
  FUNC_0();
  return 0;
 }

    if (FUNC_5(VAR_4[1], FUNC_4("/l"), 2) == 0)
    {
        if (VAR_3 < 3) goto ShowAll;
        if (FUNC_5(VAR_4[2], FUNC_4("/all"), 4) == 0)
        {
ShowAll:
            if (FUNC_3(VAR_1, -1) == 0) return 0;
            FUNC_7(FUNC_4("%s"), VAR_6);

            VAR_5 = FUNC_6(VAR_6);

            if (VAR_5 == 0) return 0;
            FUNC_3(VAR_1, VAR_5);
        }
        else if (FUNC_5(VAR_4[2], FUNC_4("/app"), 4) == 0)
        {
            if (FUNC_3(VAR_0, -1) == 0) return 0;

            FUNC_7(FUNC_4("%s"), VAR_6);

            VAR_5 = FUNC_6(VAR_6);

            if (VAR_5 == 0) return 0;
            FUNC_3(VAR_0, VAR_5);
        }
        else if (FUNC_5(VAR_4[2], FUNC_4("/upd"), 4) == 0)
        {
            if (FUNC_3(VAR_2, -1) == 0) return 0;

            FUNC_7(FUNC_4("%s"), VAR_6);

            VAR_5 = FUNC_6(VAR_6);

            if (VAR_5 == 0) return 0;
            FUNC_3(VAR_2, VAR_5);
        }

        return 0;
    }

 return 0;
}
