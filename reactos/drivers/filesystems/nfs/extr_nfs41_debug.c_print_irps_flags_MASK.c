
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
typedef TYPE_1__* PIO_STACK_LOCATION ;


 int FUNC_0 (char*,int,char*,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(int VAR_4, PIO_STACK_LOCATION VAR_5)
{
    if (!VAR_4) return;
    if (VAR_5->Flags)
        FUNC_0("IRPSP FLAGS 0x%x %s %s %s %s\n", VAR_5->Flags,
            (VAR_5->Flags & VAR_0)?"CASE_SENSITIVE":"",
            (VAR_5->Flags & VAR_2)?"PAGING_FILE":"",
            (VAR_5->Flags & VAR_1)?"ACCESS_CHECK":"",
            (VAR_5->Flags & VAR_3)?"TARGET_DIR":"");
}
