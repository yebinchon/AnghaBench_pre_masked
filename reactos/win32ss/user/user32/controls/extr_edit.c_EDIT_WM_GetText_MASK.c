
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; } ;
typedef int LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef int INT ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static INT FUNC_4(const EDITSTATE *VAR_1, INT VAR_2, LPWSTR VAR_3, BOOL VAR_4)
{
    if(!VAR_2) return 0;

    if(VAR_4)
    {
 FUNC_1(VAR_3, VAR_1->text, VAR_2);
 return FUNC_3(VAR_3);
    }
    else
    {
 LPSTR VAR_5 = (LPSTR)VAR_3;
 if (!FUNC_0(VAR_0, 0, VAR_1->text, -1, VAR_5, VAR_2, ((void*)0), ((void*)0)))
            VAR_5[VAR_2 - 1] = 0;
 return FUNC_2(VAR_5);
    }
}
