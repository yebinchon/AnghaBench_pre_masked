
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_27__ {int QuadPart; } ;
struct TYPE_26__ {int QuadPart; } ;
struct TYPE_25__ {int QuadPart; } ;
struct TYPE_28__ {TYPE_7__ ActualAvailableAllocationUnits; TYPE_6__ CallerAvailableAllocationUnits; TYPE_5__ TotalAllocationUnits; void* BytesPerSector; void* SectorsPerAllocationUnit; } ;
struct TYPE_23__ {int QuadPart; } ;
struct TYPE_22__ {int QuadPart; } ;
struct TYPE_24__ {TYPE_3__ AvailableAllocationUnits; TYPE_2__ TotalAllocationUnits; void* BytesPerSector; void* SectorsPerAllocationUnit; } ;
struct TYPE_17__ {int attribute; TYPE_8__ fullsize; TYPE_4__ size; } ;
struct TYPE_18__ {int query; int len; TYPE_11__ info; } ;
typedef TYPE_12__ volume_upcall_args ;
struct TYPE_21__ {TYPE_12__ volume; } ;
struct TYPE_19__ {TYPE_15__* state_ref; TYPE_1__ args; } ;
typedef TYPE_13__ nfs41_upcall ;
struct TYPE_29__ {int superblock; } ;
struct TYPE_16__ {TYPE_9__ fh; } ;
struct TYPE_20__ {TYPE_10__ file; } ;


 void* VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_15__*,char*,int *,int *,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(nfs41_upcall *VAR_4)
{
    volume_upcall_args *VAR_5 = &VAR_4->args.volume;
    int VAR_6 = VAR_2;

    switch (VAR_5->query) {
    case 128:
        VAR_5->len = sizeof(VAR_5->info.size);
        VAR_5->info.size.SectorsPerAllocationUnit = VAR_3;
        VAR_5->info.size.BytesPerSector = VAR_0;

        VAR_6 = FUNC_1(VAR_4->state_ref,
            "FileFsSizeInformation",
            &VAR_5->info.size.TotalAllocationUnits.QuadPart,
            &VAR_5->info.size.AvailableAllocationUnits.QuadPart,
            ((void*)0));
        break;

    case 129:
        VAR_5->len = sizeof(VAR_5->info.fullsize);
        VAR_5->info.fullsize.SectorsPerAllocationUnit = VAR_3;
        VAR_5->info.fullsize.BytesPerSector = VAR_0;

        VAR_6 = FUNC_1(VAR_4->state_ref,
            "FileFsFullSizeInformation",
            &VAR_5->info.fullsize.TotalAllocationUnits.QuadPart,
            &VAR_5->info.fullsize.CallerAvailableAllocationUnits.QuadPart,
            &VAR_5->info.fullsize.ActualAvailableAllocationUnits.QuadPart);
        break;

    case 130:
        VAR_5->len = sizeof(VAR_5->info.attribute);
        FUNC_2(VAR_4->state_ref->file.fh.superblock,
            &VAR_5->info.attribute);
        break;

    default:
        FUNC_0("unhandled fs query class %d\n", VAR_5->query);
        VAR_6 = VAR_1;
        break;
    }
    return VAR_6;
}
