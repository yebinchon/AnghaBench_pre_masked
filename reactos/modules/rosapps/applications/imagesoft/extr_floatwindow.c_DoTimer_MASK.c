
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT_PTR ;
struct TYPE_3__ {int Transparancy; int hSelf; int bOpaque; } ;
typedef int RECT ;
typedef int POINT ;
typedef TYPE_1__* PFLT_WND ;
typedef int LONG_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;



 int FUNC_3 (int ,int const) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static VOID
FUNC_8(PFLT_WND VAR_5,
        UINT_PTR VAR_6)
{
    switch (VAR_6)
    {

        case 130:
        {
            POINT VAR_7;


            if (VAR_5->bOpaque != VAR_3)
            {
                FUNC_3(VAR_5->hSelf,
                          130);
                break;
            }

            if (FUNC_0(&VAR_7))
            {
                RECT VAR_8;

                if (FUNC_2(VAR_5->hSelf,
                                  &VAR_8))
                {
                    if (!FUNC_4(&VAR_8,
                                  VAR_7))
                    {
                        FUNC_3(VAR_5->hSelf,
                                  130);
                        FUNC_3(VAR_5->hSelf,
                                  129);


                        FUNC_6(VAR_5->hSelf,
                                 128,
                                 50,
                                 ((void*)0));
                    }
                }
            }
        }
        break;


        case 129:
        {
            FUNC_5(VAR_5->hSelf,
                                       0,
                                       (255 * VAR_5->Transparancy) / 100,
                                       VAR_2);


            VAR_5->Transparancy += 5;

            if (VAR_5->Transparancy == 100)
            {
                FUNC_7(VAR_5->hSelf,
                                 VAR_1,
                                 FUNC_1(VAR_5->hSelf,
                                                  VAR_1) & ~VAR_4);

                VAR_5->bOpaque = VAR_3;

                FUNC_3(VAR_5->hSelf,
                          129);
            }
        }
        break;

        case 128:
        {
            LONG_PTR VAR_9;

            VAR_9 = FUNC_1(VAR_5->hSelf,
                                     VAR_1);

            if (VAR_9 & ~VAR_4)
            {
                FUNC_7(VAR_5->hSelf,
                                 VAR_1,
                                 VAR_9 | VAR_4);
            }

            VAR_5->Transparancy -= 5;

            if (VAR_5->Transparancy >= 60)
            {

                FUNC_5(VAR_5->hSelf,
                                           0,
                                           (255 * VAR_5->Transparancy) / 100,
                                           VAR_2);

                if (VAR_5->Transparancy == 60)
                {
                    VAR_5->bOpaque = VAR_0;

                    FUNC_3(VAR_5->hSelf,
                              128);
                }

            }
        }
        break;
    }
}
