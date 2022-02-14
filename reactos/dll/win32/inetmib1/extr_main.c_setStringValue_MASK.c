
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dynamic; int length; int * stream; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {TYPE_2__ asnValue; int asnType; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_3__ AsnAny ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(AsnAny *VAR_1, BYTE VAR_2, DWORD VAR_3, BYTE *VAR_4)
{
    AsnAny VAR_5;

    VAR_5.asnType = VAR_2;
    VAR_5.asnValue.string.stream = VAR_4;
    VAR_5.asnValue.string.length = VAR_3;
    VAR_5.asnValue.string.dynamic = VAR_0;
    FUNC_0(VAR_1, &VAR_5);
}
