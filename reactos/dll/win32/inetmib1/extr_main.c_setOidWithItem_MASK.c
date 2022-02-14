
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int idLength; int * ids; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ AsnObjectIdentifier ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static INT FUNC_3(AsnObjectIdentifier *VAR_0, AsnObjectIdentifier *VAR_1,
    UINT VAR_2)
{
    UINT VAR_3;
    AsnObjectIdentifier VAR_4;
    INT VAR_5;

    FUNC_2(VAR_0);
    VAR_5 = FUNC_1(VAR_0, VAR_1);
    if (VAR_5)
    {
        VAR_4.idLength = 1;
        VAR_4.ids = &VAR_3;
        VAR_3 = VAR_2;
        VAR_5 = FUNC_0(VAR_0, &VAR_4);
    }
    return VAR_5;
}
