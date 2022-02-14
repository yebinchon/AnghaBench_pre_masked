
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_27__ {TYPE_1__* data; } ;
struct TYPE_26__ {scalar_t__ (* loadsection ) (TYPE_1__*,char*,TYPE_4__*) ;TYPE_4__ loc; TYPE_4__ info; TYPE_4__ str; TYPE_4__ ranges; TYPE_4__ pubnames; TYPE_4__ line; TYPE_4__ frame; TYPE_4__ aranges; TYPE_4__ abbrev; struct TYPE_26__* pe; } ;
typedef TYPE_1__ Pe ;
typedef TYPE_1__ Dwarf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char*,TYPE_4__*) ;
 int FUNC_12 (char*) ;

Dwarf*
FUNC_13(Pe *VAR_1)
{
 Dwarf *VAR_2;

 if(VAR_1 == VAR_0){
  FUNC_12("nil pe passed to dwarfopen");
  return VAR_0;
 }

 VAR_2 = FUNC_2(sizeof(Dwarf), 1);
 if(VAR_2 == VAR_0)
  return VAR_0;

 VAR_2->pe = VAR_1;
 if(VAR_1->loadsection(VAR_1, ".debug_abbrev", &VAR_2->abbrev) < 0
 || VAR_1->loadsection(VAR_1, ".debug_aranges", &VAR_2->aranges) < 0
 || VAR_1->loadsection(VAR_1, ".debug_line", &VAR_2->line) < 0
 || VAR_1->loadsection(VAR_1, ".debug_info", &VAR_2->info) < 0
    || VAR_1->loadsection(VAR_1, ".debug_loc", &VAR_2->loc) < 0)
  goto err;
 VAR_1->loadsection(VAR_1, ".debug_pubnames", &VAR_2->pubnames);
 VAR_1->loadsection(VAR_1, ".debug_frame", &VAR_2->frame);
 VAR_1->loadsection(VAR_1, ".debug_ranges", &VAR_2->ranges);
 VAR_1->loadsection(VAR_1, ".debug_str", &VAR_2->str);

 return VAR_2;

err:
 FUNC_0("Failed to open dwarf\n");
 FUNC_1(VAR_2->abbrev.data);
 FUNC_1(VAR_2->aranges.data);
 FUNC_1(VAR_2->frame.data);
 FUNC_1(VAR_2->line.data);
 FUNC_1(VAR_2->pubnames.data);
 FUNC_1(VAR_2->ranges.data);
 FUNC_1(VAR_2->str.data);
 FUNC_1(VAR_2->info.data);
    FUNC_1(VAR_2->loc.data);
 FUNC_1(VAR_2);
 return VAR_0;
}
