
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sproto_type {char* name; int n; struct field* f; } ;
struct sproto {int type_n; int protocol_n; struct protocol* proto; struct sproto_type* type; } ;
struct protocol {char* name; int tag; scalar_t__ confirm; TYPE_2__** p; } ;
struct field {int type; scalar_t__ extra; char* name; int tag; scalar_t__ key; TYPE_1__* st; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(struct sproto *VAR_5) {
 int VAR_6,VAR_7;
 FUNC_0("=== %d types ===\n", VAR_5->type_n);
 for (VAR_6=0;VAR_6<VAR_5->type_n;VAR_6++) {
  struct sproto_type *VAR_8 = &VAR_5->type[VAR_6];
  FUNC_0("%s\n", VAR_8->name);
  for (VAR_7=0;VAR_7<VAR_8->n;VAR_7++) {
   char VAR_9[2] = { 0, 0 };
   const char * VAR_10 = ((void*)0);
   struct field *VAR_11 = &VAR_8->f[VAR_7];
   int VAR_12 = VAR_11->type & ~VAR_2;
   if (VAR_11->type & VAR_2) {
    VAR_9[0] = '*';
   } else {
    VAR_9[0] = 0;
   }
   if (VAR_12 == VAR_4) {
    VAR_10 = VAR_11->st->name;
   } else {
    switch(VAR_12) {
    case 129:
     if (VAR_11->extra) {
      VAR_10 = "decimal";
     } else {
      VAR_10 = "integer";
     }
     break;
    case 130:
     VAR_10 = "boolean";
     break;
    case 128:
     if (VAR_11->extra == VAR_3)
      VAR_10 = "binary";
     else
      VAR_10 = "string";
     break;
    default:
     VAR_10 = "invalid";
     break;
    }
   }
   FUNC_0("\t%s (%d) %s%s", VAR_11->name, VAR_11->tag, VAR_9, VAR_10);
   if (VAR_12 == 129 && VAR_11->extra > 0) {
    FUNC_0("(%d)", VAR_11->extra);
   }
   if (VAR_11->key >= 0) {
    FUNC_0("[%d]", VAR_11->key);
   }
   FUNC_0("\n");
  }
 }
 FUNC_0("=== %d protocol ===\n", VAR_5->protocol_n);
 for (VAR_6=0;VAR_6<VAR_5->protocol_n;VAR_6++) {
  struct protocol *VAR_13 = &VAR_5->proto[VAR_6];
  if (VAR_13->p[VAR_0]) {
   FUNC_0("\t%s (%d) request:%s", VAR_13->name, VAR_13->tag, VAR_13->p[VAR_0]->name);
  } else {
   FUNC_0("\t%s (%d) request:(null)", VAR_13->name, VAR_13->tag);
  }
  if (VAR_13->p[VAR_1]) {
   FUNC_0(" response:%s", VAR_13->p[VAR_1]->name);
  } else if (VAR_13->confirm) {
   FUNC_0(" response nil");
  }
  FUNC_0("\n");
 }
}
