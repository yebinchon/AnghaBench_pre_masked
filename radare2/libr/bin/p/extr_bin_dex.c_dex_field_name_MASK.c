
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fields_size; int types_size; } ;
struct TYPE_10__ {TYPE_3__* types; TYPE_2__* fields; TYPE_1__ header; } ;
struct TYPE_9__ {int descriptor_id; } ;
struct TYPE_8__ {int class_id; int type_id; int name_id; } ;
typedef TYPE_4__ RBinDexObj ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int,int *) ;
 char* FUNC_3 (char*,...) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(RBinDexObj *VAR_1, int VAR_2) {
 int VAR_3, VAR_4, VAR_5;
 FUNC_2 (VAR_1 && VAR_1->fields, ((void*)0));

 if (VAR_2 < 0 || VAR_2 >= VAR_1->header.fields_size) {
  return ((void*)0);
 }
 VAR_3 = VAR_1->fields[VAR_2].class_id;
 if (VAR_3 < 0 || VAR_3 >= VAR_1->header.types_size) {
  return ((void*)0);
 }
 VAR_5 = VAR_1->fields[VAR_2].type_id;
 if (VAR_5 < 0 || VAR_5 >= VAR_1->header.types_size) {
  return ((void*)0);
 }
 VAR_4 = VAR_1->fields[VAR_2].name_id;
 const char *VAR_6 = FUNC_1 (VAR_1, VAR_1->types[VAR_3].descriptor_id);
 const char *VAR_7 = FUNC_1 (VAR_1, VAR_4);
 const char *VAR_8 = FUNC_1 (VAR_1, VAR_1->types[VAR_5].descriptor_id);
 if (VAR_0) {
  if (VAR_6 && VAR_7 && VAR_8) {
   char *VAR_9 = FUNC_4(FUNC_5 (VAR_6));
   char *VAR_10 = FUNC_4(FUNC_5 (VAR_7));
   char *VAR_11 = FUNC_4(FUNC_5 (VAR_8));
   char *VAR_12 = FUNC_3 ("(%s) %s.%s", VAR_11, VAR_9, VAR_10);
   FUNC_0 (VAR_9);
   FUNC_0 (VAR_10);
   FUNC_0 (VAR_11);
   return VAR_12;
  }
  return FUNC_3 ("(%d) %d.%d",
    VAR_1->types[VAR_5].descriptor_id,
    VAR_4,
    VAR_1->types[VAR_3].descriptor_id
        );
 }
 return (VAR_6 && VAR_7 && VAR_8)
  ? FUNC_3 ("%s->%s %s", VAR_6, VAR_7, VAR_8)
  : FUNC_3 ("%d->%d %d", VAR_1->types[VAR_3].descriptor_id, VAR_4, VAR_1->types[VAR_5].descriptor_id);
}
