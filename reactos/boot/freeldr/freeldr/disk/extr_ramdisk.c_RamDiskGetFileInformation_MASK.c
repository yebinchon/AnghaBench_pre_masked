
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_8__ {TYPE_2__ CurrentAddress; TYPE_1__ EndingAddress; } ;
typedef TYPE_3__ FILEINFORMATION ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static ARC_STATUS FUNC_1(ULONG VAR_3, FILEINFORMATION* VAR_4)
{
    FUNC_0(VAR_4, sizeof(*VAR_4));
    VAR_4->EndingAddress.QuadPart = VAR_1;
    VAR_4->CurrentAddress.QuadPart = VAR_2;

    return VAR_0;
}
