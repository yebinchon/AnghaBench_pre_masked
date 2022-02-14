
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int lcase; int attr; struct TYPE_9__* name; } ;
struct TYPE_8__ {TYPE_4__ dir_ent; int offset; int lfn_offset; scalar_t__ lfn; struct TYPE_8__* next; TYPE_1__* parent; } ;
struct TYPE_7__ {TYPE_2__* first; } ;
typedef TYPE_2__ DOS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__,TYPE_4__*) ;
 int FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int FUNC_5 (char const*,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(DOS_FILE * VAR_5)
{
    DOS_FILE *VAR_6, *VAR_7;
    uint32_t VAR_8;

    if (!VAR_5->offset)
 return;
    VAR_6 = VAR_5->parent ? VAR_5->parent->first : VAR_4;
    VAR_8 = 0;
    while (1) {
 char VAR_9[8];
 FUNC_4(VAR_9, "%07lu", (unsigned long)VAR_8);
 FUNC_3(VAR_5->dir_ent.name, "FSCK", 4);
 FUNC_3(VAR_5->dir_ent.name + 4, VAR_9, 7);
 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next)
     if (VAR_7 != VAR_5
  && !FUNC_5((const char *)VAR_7->dir_ent.name,
       (const char *)VAR_5->dir_ent.name, VAR_3))
  break;
 if (!VAR_7) {
     if (VAR_5->dir_ent.lcase & VAR_2) {


  VAR_5->dir_ent.lcase &= ~VAR_2;

  VAR_5->dir_ent.attr &= ~(VAR_0 | VAR_1);
  FUNC_1(VAR_5->offset, VAR_3 + 2, &VAR_5->dir_ent);
     } else {
  FUNC_1(VAR_5->offset, VAR_3, VAR_5->dir_ent.name);
     }
     if (VAR_5->lfn)
  FUNC_2(VAR_5->lfn_offset, VAR_5->offset,
     (const char *)VAR_5->dir_ent.name);
     return;
 }
 VAR_8++;
 if (VAR_8 > 9999999) {
     FUNC_0("Too many files need repair.");
 }
    }
    FUNC_0("Can't generate a unique name.");
}
