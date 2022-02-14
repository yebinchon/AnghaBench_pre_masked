
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_10__ {scalar_t__ BaseDateYear; } ;
struct TYPE_9__ {scalar_t__ Year; int Month; int Day; } ;
struct TYPE_8__ {int Second; int Hour; int Minute; } ;
struct TYPE_7__ {int Second; scalar_t__ Year; int Month; int Day; int Hour; int Minute; scalar_t__ Milliseconds; } ;
typedef TYPE_1__ TIME_FIELDS ;
typedef int * PLARGE_INTEGER ;
typedef TYPE_2__* PDOSTIME ;
typedef TYPE_3__* PDOSDATE ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef int LARGE_INTEGER ;
typedef scalar_t__ CSHORT ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_1 ;

BOOLEAN
FUNC_2(
    PDEVICE_EXTENSION VAR_2,
    USHORT VAR_3,
    USHORT VAR_4,
    PLARGE_INTEGER VAR_5)
{
    PDOSTIME VAR_6 = (PDOSTIME)&VAR_4;
    PDOSDATE VAR_7 = (PDOSDATE)&VAR_3;
    TIME_FIELDS VAR_8;
    LARGE_INTEGER VAR_9;

    if (VAR_5 == ((void*)0))
        return VAR_0;

    VAR_8.Milliseconds = 0;
    VAR_8.Second = VAR_6->Second * 2;
    VAR_8.Minute = VAR_6->Minute;
    VAR_8.Hour = VAR_6->Hour;

    VAR_8.Day = VAR_7->Day;
    VAR_8.Month = VAR_7->Month;
    VAR_8.Year = (CSHORT)(VAR_2->BaseDateYear + VAR_7->Year);

    FUNC_1(&VAR_8, &VAR_9);
    FUNC_0(&VAR_9, VAR_5);

    return VAR_1;
}
