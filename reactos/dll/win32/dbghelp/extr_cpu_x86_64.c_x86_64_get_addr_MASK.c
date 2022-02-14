
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum cpu_addr { ____Placeholder_cpu_addr } cpu_addr ;
struct TYPE_6__ {int Mode; int Offset; int Segment; } ;
struct TYPE_5__ {int Rbp; int SegSs; int Rsp; int Rip; int SegCs; } ;
typedef int HANDLE ;
typedef TYPE_1__ CONTEXT ;
typedef int BOOL ;
typedef TYPE_2__ ADDRESS64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static BOOL FUNC_0(HANDLE VAR_3, const CONTEXT* VAR_4,
                            enum cpu_addr VAR_5, ADDRESS64* VAR_6)
{
    VAR_6->Mode = VAR_0;
    switch (VAR_5)
    {

    case 129: VAR_6->Segment = VAR_4->SegCs; VAR_6->Offset = VAR_4->Rip; return VAR_2;
    case 128: VAR_6->Segment = VAR_4->SegSs; VAR_6->Offset = VAR_4->Rsp; return VAR_2;
    case 130: VAR_6->Segment = VAR_4->SegSs; VAR_6->Offset = VAR_4->Rbp; return VAR_2;

    default: VAR_6->Mode = -1;
        return VAR_1;
    }
}
