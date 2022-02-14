
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct module_pair {TYPE_4__* effective; int pcs; TYPE_4__* requested; } ;
typedef int idslW64 ;
struct TYPE_11__ {scalar_t__ SymType; int NumSyms; int ImageName; int TimeDateStamp; int CheckSum; int BaseOfImage; } ;
struct TYPE_10__ {int num_elts; } ;
struct TYPE_13__ {int type; TYPE_2__ module; TYPE_1__ ht_symbols; scalar_t__ is_virtual; } ;
struct TYPE_12__ {int SizeOfStruct; int Reparse; int hFile; int FileName; int TimeDateStamp; int CheckSum; int BaseOfImage; } ;
typedef TYPE_3__ IMAGEHLP_DEFERRED_SYMBOL_LOADW64 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_4__* FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_4__*) ;

BOOL FUNC_7(struct module_pair* VAR_7)
{
    IMAGEHLP_DEFERRED_SYMBOL_LOADW64 VAR_8;

    if (!VAR_7->requested) return VAR_3;

    if (!(VAR_7->effective = FUNC_4(VAR_7->pcs, VAR_7->requested)))
        VAR_7->effective = VAR_7->requested;

    if (VAR_7->effective->module.SymType == VAR_5)
    {
        BOOL VAR_9;

        if (VAR_7->effective->is_virtual) VAR_9 = VAR_3;
        else switch (VAR_7->effective->type)
        {

        case 130:
            VAR_9 = FUNC_1(VAR_7->effective);
            break;

        case 128:
            VAR_8 = sizeof(VAR_8);
            VAR_8 = VAR_7->effective->module.BaseOfImage;
            VAR_8 = VAR_7->effective->module.CheckSum;
            VAR_8 = VAR_7->effective->module.TimeDateStamp;
            FUNC_3(VAR_8, VAR_7->effective->module.ImageName,
                   sizeof(VAR_7->effective->module.ImageName));
            VAR_8 = VAR_3;
            VAR_8 = VAR_4;

            FUNC_5(VAR_7->pcs, VAR_2, &VAR_8);
            VAR_9 = FUNC_6(VAR_7->pcs, VAR_7->effective);
            FUNC_5(VAR_7->pcs,
                         VAR_9 ? VAR_0 : VAR_1,
                         &VAR_8);
            break;

        case 129:
            VAR_9 = FUNC_2(VAR_7->effective);
            break;

        default:
            VAR_9 = VAR_3;
            break;
        }
        if (!VAR_9) VAR_7->effective->module.SymType = VAR_6;
        FUNC_0(VAR_7->effective->module.SymType != VAR_5);
        VAR_7->effective->module.NumSyms = VAR_7->effective->ht_symbols.num_elts;
    }
    return VAR_7->effective->module.SymType != VAR_6;
}
