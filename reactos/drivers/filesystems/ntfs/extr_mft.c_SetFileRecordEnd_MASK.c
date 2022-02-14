
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_6__ {int BytesInUse; } ;
struct TYPE_5__ {int Length; int Type; } ;
typedef TYPE_1__* PNTFS_ATTR_RECORD ;
typedef TYPE_2__* PFILE_RECORD_HEADER ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

VOID
FUNC_1(PFILE_RECORD_HEADER VAR_2,
                 PNTFS_ATTR_RECORD VAR_3,
                 ULONG VAR_4)
{

    FUNC_0(((ULONG_PTR)VAR_3 - (ULONG_PTR)VAR_2) % VAR_0 == 0);


    VAR_3->Type = VAR_1;


    VAR_3->Length = VAR_4;


    VAR_2->BytesInUse = (ULONG_PTR)VAR_3 - (ULONG_PTR)VAR_2 + sizeof(ULONG) * 2;
}
