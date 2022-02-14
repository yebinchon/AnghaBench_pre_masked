
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {size_t (* Handler ) (int ) ;int Context; } ;
struct TYPE_3__ {int EnableRegisterId; int StatusRegisterId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static UINT32
FUNC_5 (
    UINT32 VAR_6)
{

    FUNC_1 ();




    (void) FUNC_3 (
        VAR_5[VAR_6].StatusRegisterId,
        VAR_0);





    if (!VAR_4[VAR_6].Handler)
    {
        (void) FUNC_3 (
            VAR_5[VAR_6].EnableRegisterId,
            VAR_1);

        FUNC_0 ((VAR_3,
            "No installed handler for fixed event - %s (%u), disabling",
            FUNC_2 (VAR_6), VAR_6));

        return (VAR_2);
    }



    return ((VAR_4[VAR_6].Handler)(
        VAR_4[VAR_6].Context));
}
