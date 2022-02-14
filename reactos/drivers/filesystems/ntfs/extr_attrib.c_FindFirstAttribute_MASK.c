
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int UCHAR ;
struct TYPE_16__ {int AttributeOffset; int BytesInUse; } ;
struct TYPE_15__ {int Offset; TYPE_1__* CurrAttr; TYPE_1__* FirstAttr; int * NonResidentEnd; int * NonResidentStart; TYPE_1__* LastAttr; int OnlyResident; int Vcb; } ;
struct TYPE_14__ {scalar_t__ Type; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PNTFS_ATTR_RECORD ;
typedef TYPE_3__* PFIND_ATTR_CONTXT ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_3__*,int ,TYPE_4__*,int ,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_4(PFIND_ATTR_CONTXT VAR_4,
                   PDEVICE_EXTENSION VAR_5,
                   PFILE_RECORD_HEADER VAR_6,
                   BOOLEAN VAR_7,
                   PNTFS_ATTR_RECORD * VAR_8)
{
    NTSTATUS VAR_9;

    FUNC_0("FindFistAttribute(%p, %p, %p, %p, %u, %p)\n", VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

    VAR_4->Vcb = VAR_5;
    VAR_4->OnlyResident = VAR_7;
    VAR_4->FirstAttr = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_6 + VAR_6->AttributeOffset);
    VAR_4->CurrAttr = VAR_4->FirstAttr;
    VAR_4->LastAttr = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_6 + VAR_6->BytesInUse);
    VAR_4->NonResidentStart = ((void*)0);
    VAR_4->NonResidentEnd = ((void*)0);
    VAR_4->Offset = VAR_6->AttributeOffset;

    if (VAR_4->FirstAttr->Type == VAR_1)
    {
        VAR_4->CurrAttr = (PVOID)-1;
        return VAR_2;
    }
    else if (VAR_4->FirstAttr->Type == VAR_0)
    {
        VAR_9 = FUNC_2(VAR_4);
        if (!FUNC_3(VAR_9))
        {
            return VAR_9;
        }

        *VAR_8 = FUNC_1(VAR_4);
        if (*VAR_8 == ((void*)0))
        {
            return VAR_2;
        }
    }
    else
    {
        *VAR_8 = VAR_4->CurrAttr;
        VAR_4->Offset = (UCHAR*)VAR_4->CurrAttr - (UCHAR*)VAR_6;
    }

    return VAR_3;
}
