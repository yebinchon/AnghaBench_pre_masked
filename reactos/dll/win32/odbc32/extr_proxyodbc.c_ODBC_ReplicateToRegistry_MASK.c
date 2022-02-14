
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SQLRETURN ;
typedef int SQLHENV ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6 (void)
{
    SQLRETURN VAR_3;
    SQLHENV VAR_4;

    if ((VAR_3 = FUNC_0 (&VAR_4)) == VAR_1)
    {
        FUNC_2 (VAR_4);
        FUNC_3 (VAR_0 , VAR_4);
        FUNC_3 (VAR_2 , VAR_4);

        if ((VAR_3 = FUNC_1 (VAR_4)) != VAR_1)
        {
            FUNC_4 ("Error %d freeing the SQL environment.\n", (int)VAR_3);
        }
    }
    else
    {
        FUNC_4 ("Error %d opening an SQL environment.\n", (int)VAR_3);
        FUNC_5 ("The external ODBC settings have not been replicated to the"
                " Wine registry\n");
    }
}
