
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_name; } ;
typedef int WORD ;
typedef scalar_t__ UINT ;
typedef int PCSTR ;
typedef int * PCHAR ;
typedef int INT ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 struct servent* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;

PCHAR
FUNC_4(UINT VAR_1, PCSTR VAR_2, CHAR VAR_3[], INT VAR_4)
{
    struct servent *VAR_5;

    if (VAR_0)
    {
        FUNC_2(VAR_3, "%d", FUNC_1((WORD)VAR_1));
        return VAR_3;
    }

    if ((VAR_5 = FUNC_0(VAR_1, VAR_2)))
        FUNC_3(VAR_3, VAR_5->s_name );
    else
        FUNC_2(VAR_3, "%d", FUNC_1((WORD)VAR_1));
    return VAR_3;
}
