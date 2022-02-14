
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct image_section_map {size_t sidx; TYPE_6__* fmap; } ;
struct TYPE_11__ {size_t NumberOfSections; } ;
struct TYPE_10__ {TYPE_5__ FileHeader; } ;
struct TYPE_8__ {TYPE_1__* sect; TYPE_4__ ntheader; } ;
struct TYPE_9__ {TYPE_2__ pe; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_7__ {scalar_t__ mapped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;

void FUNC_1(struct image_section_map* VAR_1)
{
    if (VAR_1->sidx >= 0 && VAR_1->sidx < VAR_1->fmap->u.pe.ntheader.FileHeader.NumberOfSections &&
        VAR_1->fmap->u.pe.sect[VAR_1->sidx].mapped != VAR_0)
    {
        FUNC_0(VAR_1->fmap);
        VAR_1->fmap->u.pe.sect[VAR_1->sidx].mapped = VAR_0;
    }
}
