
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_16__ {int len; scalar_t__ fde; scalar_t__ loctype; int type; int name; int unit; } ;
struct TYPE_12__ {scalar_t__ data; int len; } ;
struct TYPE_13__ {TYPE_2__ b; } ;
struct TYPE_11__ {scalar_t__ location; scalar_t__ name; } ;
struct TYPE_14__ {scalar_t__ tag; TYPE_3__ location; TYPE_1__ have; int type; int name; } ;
struct TYPE_15__ {TYPE_4__ attrs; int unit; } ;
typedef TYPE_5__ DwarfSym ;
typedef TYPE_6__ DwarfParam ;
typedef int Dwarf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,TYPE_5__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ,int ,scalar_t__,scalar_t__,int ) ;

int
FUNC_5(Dwarf *VAR_1, DwarfSym *VAR_2, ulong VAR_3, int VAR_4, DwarfParam *VAR_5)
{
 int VAR_6 = 0;
 DwarfSym VAR_7 = { };
 int VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7);
 while (VAR_8 == 0 && VAR_6 < VAR_4) {
  if (VAR_7.attrs.tag == VAR_0 &&
   VAR_7.attrs.have.name &&
   VAR_7.attrs.have.location) {
   VAR_5[VAR_6].name = FUNC_1(FUNC_3(VAR_7.attrs.name)+1);
   FUNC_2(VAR_5[VAR_6].name, VAR_7.attrs.name);
   VAR_5[VAR_6].unit = VAR_7.unit;
   VAR_5[VAR_6].type = VAR_7.attrs.type;
            VAR_5[VAR_6].loctype = VAR_7.attrs.have.location;
            VAR_5[VAR_6].len = VAR_7.attrs.location.b.len;
   VAR_5[VAR_6].fde = (ulong)VAR_7.attrs.location.b.data;
            FUNC_4("param[%d] block %s -> type %x loctype %x fde %x len %x",
                   VAR_6,
                   VAR_5[VAR_6].name,
                   VAR_5[VAR_6].type,
                   VAR_5[VAR_6].loctype,
                   VAR_5[VAR_6].fde,
                   VAR_5[VAR_6].len);
            VAR_6++;
  }
  VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7);
 }
 return VAR_6;
}
