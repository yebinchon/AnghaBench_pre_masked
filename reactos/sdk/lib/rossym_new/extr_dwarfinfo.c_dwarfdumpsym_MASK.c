
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int haveoff; int off; int namestr; scalar_t__ name; } ;
struct TYPE_7__ {int tag; } ;
struct TYPE_10__ {TYPE_1__ attrs; } ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {TYPE_2__ b; } ;
typedef TYPE_3__ DwarfVal ;
typedef TYPE_4__ DwarfSym ;
typedef int Dwarf ;


 char VAR_0 ;
 char VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (char*,int ,...) ;

void
FUNC_1(Dwarf *VAR_3, DwarfSym *VAR_4)
{
    int VAR_5;
    FUNC_0("tag %x\n", VAR_4->attrs.tag);
    for (VAR_5 = 0; VAR_2[VAR_5].name; VAR_5++) {
        char *VAR_6 = ((char*)&VAR_4->attrs) + VAR_2[VAR_5].haveoff;
        char *VAR_7 = ((char*)&VAR_4->attrs) + VAR_2[VAR_5].off;
        if (*VAR_6 == VAR_1) {
            char *VAR_8 = *((char **)VAR_7);
            FUNC_0("%s: %s\n", VAR_2[VAR_5].namestr, VAR_8);
        } else if (*VAR_6 == VAR_0) {
            DwarfVal *VAR_9 = ((DwarfVal*)VAR_7);
            FUNC_0("%s: %x:%x\n", VAR_2[VAR_5].namestr, VAR_9->b.data, VAR_9->b.len);
        } else if (*VAR_6)
            FUNC_0("%s: (%x)\n", VAR_2[VAR_5].namestr, *VAR_6);
    }
}
