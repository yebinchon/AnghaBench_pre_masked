
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {scalar_t__ Year; int Month; int Day; } ;
struct TYPE_6__ {int Hour; int Minute; int Second; } ;
struct TYPE_5__ {scalar_t__ wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; scalar_t__ wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__* PDOSTIME ;
typedef TYPE_3__* PDOSDATE ;
typedef int * LPFILETIME ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_1(WORD VAR_2,
                             WORD VAR_3,
                             LPFILETIME VAR_4)
{
    PDOSTIME VAR_5 = (PDOSTIME)&VAR_3;
    PDOSDATE VAR_6 = (PDOSDATE)&VAR_2;
    SYSTEMTIME VAR_7;

    if (VAR_4 == ((void*)0))
        return VAR_0;

    VAR_7.wMilliseconds = 0;
    VAR_7.wSecond = VAR_5->Second;
    VAR_7.wMinute = VAR_5->Minute;
    VAR_7.wHour = VAR_5->Hour;

    VAR_7.wDay = VAR_6->Day;
    VAR_7.wMonth = VAR_6->Month;
    VAR_7.wYear = 1980 + VAR_6->Year;

    FUNC_0(&VAR_7, VAR_4);

    return VAR_1;
}
