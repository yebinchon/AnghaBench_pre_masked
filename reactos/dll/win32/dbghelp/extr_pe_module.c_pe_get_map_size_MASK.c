
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct image_section_map {size_t sidx; TYPE_8__* fmap; } ;
struct TYPE_9__ {size_t NumberOfSections; } ;
struct TYPE_10__ {TYPE_1__ FileHeader; } ;
struct TYPE_15__ {TYPE_5__* sect; TYPE_2__ ntheader; } ;
struct TYPE_14__ {TYPE_7__ pe; } ;
struct TYPE_16__ {TYPE_6__ u; } ;
struct TYPE_11__ {int VirtualSize; } ;
struct TYPE_12__ {TYPE_3__ Misc; } ;
struct TYPE_13__ {TYPE_4__ shdr; } ;



unsigned FUNC_0(const struct image_section_map* VAR_0)
{
    if (VAR_0->sidx < 0 || VAR_0->sidx >= VAR_0->fmap->u.pe.ntheader.FileHeader.NumberOfSections)
        return 0;
    return VAR_0->fmap->u.pe.sect[VAR_0->sidx].shdr.Misc.VirtualSize;
}
