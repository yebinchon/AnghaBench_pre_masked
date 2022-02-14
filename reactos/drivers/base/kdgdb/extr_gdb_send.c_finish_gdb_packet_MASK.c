
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UCHAR ;
typedef scalar_t__ KDSTATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;

KDSTATUS
FUNC_2(void)
{
    UCHAR VAR_6;
    KDSTATUS VAR_7;


    FUNC_1('#');
    FUNC_1(VAR_5[(VAR_4 >> 4) & 0xf]);
    FUNC_1(VAR_5[VAR_4 & 0xf]);


    VAR_7 = FUNC_0(&VAR_6);

    if (VAR_7 != VAR_2)
    {
        VAR_0 = VAR_3;
        return VAR_7;
    }

    if (VAR_6 != '+')
        return VAR_1;

    return VAR_2;
}
