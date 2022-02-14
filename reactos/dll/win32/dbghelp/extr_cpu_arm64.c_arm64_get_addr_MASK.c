
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum cpu_addr { ____Placeholder_cpu_addr } cpu_addr ;
struct TYPE_10__ {int Mode; int Offset; scalar_t__ Segment; } ;
struct TYPE_7__ {int Fp; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_2__ u; int Sp; int Pc; } ;
typedef int HANDLE ;
typedef TYPE_3__ CONTEXT ;
typedef int BOOL ;
typedef TYPE_4__ ADDRESS64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static BOOL FUNC_0(HANDLE VAR_3, const CONTEXT* VAR_4,
                           enum cpu_addr VAR_5, ADDRESS64* VAR_6)
{
    VAR_6->Mode = VAR_0;
    VAR_6->Segment = 0;
    switch (VAR_5)
    {





    default: VAR_6->Mode = -1;
        return VAR_1;
    }
}
