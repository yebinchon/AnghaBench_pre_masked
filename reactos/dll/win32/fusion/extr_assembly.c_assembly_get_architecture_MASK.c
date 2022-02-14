
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* corhdr; TYPE_2__* nthdr; } ;
struct TYPE_8__ {int MajorRuntimeVersion; scalar_t__ MinorRuntimeVersion; int Flags; } ;
struct TYPE_6__ {scalar_t__ Magic; } ;
struct TYPE_7__ {TYPE_1__ OptionalHeader; } ;
typedef int PEKIND ;
typedef TYPE_4__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

PEKIND FUNC_0(ASSEMBLY *VAR_7)
{
    if ((VAR_7->corhdr->MajorRuntimeVersion == 2) && (VAR_7->corhdr->MinorRuntimeVersion == 0))
        return VAR_6;

    if (VAR_7->nthdr->OptionalHeader.Magic == VAR_2)
        return VAR_3;

    if ((VAR_7->corhdr->Flags & VAR_1) && !(VAR_7->corhdr->Flags & VAR_0))
        return VAR_5;

    return VAR_4;
}
