
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ dwBytesRecorded; int reserved; } ;
struct TYPE_5__ {scalar_t__ BytesCompleted; scalar_t__ BytesCommitted; } ;
typedef TYPE_1__* PWAVEHDR_EXTENSION ;
typedef TYPE_2__* PWAVEHDR ;


 int FUNC_0 (TYPE_1__*) ;

VOID
FUNC_1(
    PWAVEHDR VAR_0)
{
    PWAVEHDR_EXTENSION VAR_1 = (PWAVEHDR_EXTENSION) VAR_0->reserved;
    FUNC_0( VAR_1 );

    VAR_0->dwBytesRecorded = 0;

    VAR_1->BytesCommitted = 0;
    VAR_1->BytesCompleted = 0;
}
