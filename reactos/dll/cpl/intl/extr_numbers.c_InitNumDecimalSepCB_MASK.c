
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ szNumDecimalSep; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_0 (int ,int ,int ,int,int ) ;
 scalar_t__* VAR_8 ;

__attribute__((used)) static VOID
FUNC_1(HWND VAR_9, PGLOBALDATA VAR_10)
{
    INT VAR_11;
    INT VAR_12;


    FUNC_0(VAR_9, VAR_5,
                        VAR_2,
                        VAR_6 - 1,
                        0);


    FUNC_0(VAR_9, VAR_5,
                        VAR_3,
                        (WPARAM)0,
                        (LPARAM)0);


    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
        FUNC_0(VAR_9, VAR_5,
                            VAR_0,
                            0,
                            (LPARAM)VAR_8[VAR_11]);
    }


    VAR_12 = FUNC_0(VAR_9, VAR_5,
                                   VAR_4,
                                   -1,
                                   (LPARAM)VAR_10->szNumDecimalSep);


    if (VAR_12 == VAR_1)
    {
        FUNC_0(VAR_9, VAR_5,
                            VAR_0,
                            VAR_7,
                            (LPARAM)VAR_10->szNumDecimalSep);
        FUNC_0(VAR_9, VAR_5,
                            VAR_4,
                            -1,
                            (LPARAM)VAR_10->szNumDecimalSep);
    }
}
