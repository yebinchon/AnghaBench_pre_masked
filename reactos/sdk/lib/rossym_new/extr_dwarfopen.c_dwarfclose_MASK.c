
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_9__* data; } ;
struct TYPE_13__ {TYPE_9__* data; } ;
struct TYPE_12__ {TYPE_9__* data; } ;
struct TYPE_19__ {TYPE_9__* data; } ;
struct TYPE_18__ {TYPE_9__* data; } ;
struct TYPE_17__ {TYPE_9__* data; } ;
struct TYPE_16__ {TYPE_9__* data; } ;
struct TYPE_15__ {TYPE_9__* data; } ;
struct TYPE_20__ {int pe; TYPE_3__ info; TYPE_2__ str; TYPE_1__ ranges; TYPE_8__ pubnames; TYPE_7__ line; TYPE_6__ frame; TYPE_5__ aranges; TYPE_4__ abbrev; } ;
typedef TYPE_9__ Dwarf ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(Dwarf *VAR_0)
{
 FUNC_0(VAR_0->abbrev.data);
 FUNC_0(VAR_0->aranges.data);
 FUNC_0(VAR_0->frame.data);
 FUNC_0(VAR_0->line.data);
 FUNC_0(VAR_0->pubnames.data);
 FUNC_0(VAR_0->ranges.data);
 FUNC_0(VAR_0->str.data);
 FUNC_0(VAR_0->info.data);
 FUNC_1(VAR_0->pe);
 FUNC_0(VAR_0);
}
