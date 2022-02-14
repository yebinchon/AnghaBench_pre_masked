
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG64 ;
typedef size_t ULONG ;
struct TYPE_5__ {int Valid; int Write; int PageFrameNumber; } ;
typedef TYPE_1__* PHARDWARE_PTE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static
BOOLEAN
FUNC_6(ULONG64 VAR_4, ULONG64 VAR_5)
{
    PHARDWARE_PTE VAR_6, VAR_7, VAR_8;
    ULONG VAR_9;

    VAR_6 = FUNC_1(VAR_2, FUNC_5(VAR_4));
    VAR_7 = FUNC_1(VAR_6, FUNC_3(VAR_4));
    VAR_8 = FUNC_1(VAR_7, FUNC_2(VAR_4));

    if (!VAR_8)
    {
        FUNC_0("!!!No Dir %p, %p, %p, %p\n", VAR_2, VAR_6, VAR_7, VAR_8);
        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_4);
    if (VAR_8[VAR_9].Valid)
    {
        FUNC_0("!!!Already mapped %ld\n", VAR_9);
        return VAR_0;
    }

    VAR_8[VAR_9].Valid = 1;
    VAR_8[VAR_9].Write = 1;
    VAR_8[VAR_9].PageFrameNumber = VAR_5 / VAR_1;

    return VAR_3;
}
