
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ message; } ;
typedef TYPE_1__ MSG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_3( MSG *VAR_5 )
{
    BOOL VAR_6;

    for (;;)
    {
        VAR_6 = FUNC_2(VAR_5, 0, 0, 0, VAR_1);
        if (VAR_6)
        {
            if (VAR_5->message == VAR_4) FUNC_0(VAR_5);
            else break;
        }
        else if (FUNC_1(0, ((void*)0), VAR_0, 100, VAR_2) == VAR_3) break;
    }
    if (!VAR_6) VAR_5->message = 0;
    return VAR_6;
}
