
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t NumberOfSections; } ;
struct TYPE_10__ {TYPE_2__ FileHeader; } ;
struct pe_file_map {TYPE_6__* sect; TYPE_3__ ntheader; } ;
struct image_section_map {size_t sidx; TYPE_7__* fmap; } ;
struct TYPE_8__ {struct pe_file_map pe; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct TYPE_11__ {scalar_t__ VirtualSize; } ;
struct TYPE_12__ {scalar_t__ SizeOfRawData; int VirtualAddress; TYPE_4__ Misc; } ;
struct TYPE_13__ {scalar_t__ mapped; TYPE_5__ shdr; } ;
typedef int IMAGE_NT_HEADERS ;


 int FUNC_0 (char*,size_t,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,void*,int ,int *) ;
 void* FUNC_2 (TYPE_7__*,int **) ;

const char* FUNC_3(struct image_section_map* VAR_1)
{
    void* VAR_2;
    struct pe_file_map* VAR_3 = &VAR_1->fmap->u.pe;

    if (VAR_1->sidx >= 0 && VAR_1->sidx < VAR_3->ntheader.FileHeader.NumberOfSections &&
        VAR_3->sect[VAR_1->sidx].mapped == VAR_0)
    {
        IMAGE_NT_HEADERS* VAR_4;

        if (VAR_3->sect[VAR_1->sidx].shdr.Misc.VirtualSize > VAR_3->sect[VAR_1->sidx].shdr.SizeOfRawData)
        {
            FUNC_0("Section %ld: virtual (0x%x) > raw (0x%x) size - not supported\n",
                  VAR_1->sidx, VAR_3->sect[VAR_1->sidx].shdr.Misc.VirtualSize,
                  VAR_3->sect[VAR_1->sidx].shdr.SizeOfRawData);
            return VAR_0;
        }




        if ((VAR_2 = FUNC_2(VAR_1->fmap, &VAR_4)))
        {
            VAR_3->sect[VAR_1->sidx].mapped = FUNC_1(VAR_4, VAR_2,
                                                           VAR_3->sect[VAR_1->sidx].shdr.VirtualAddress,
                                                           ((void*)0));
            return VAR_3->sect[VAR_1->sidx].mapped;
        }
    }
    return VAR_0;
}
