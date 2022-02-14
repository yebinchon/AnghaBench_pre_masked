
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int method_size; int types_size; } ;
struct TYPE_10__ {TYPE_2__ header; TYPE_1__* methods; scalar_t__ types; } ;
struct TYPE_8__ {int class_id; } ;
typedef TYPE_3__ RBinDexObj ;


 char* FUNC_0 (TYPE_3__*,int) ;
 char* FUNC_1 (TYPE_3__*,int) ;
 char* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char*,char const*,char*) ;
 int FUNC_7 (char*,char,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char const*) ;

__attribute__((used)) static char *FUNC_11(RBinDexObj *VAR_1, int VAR_2) {
 FUNC_4 (VAR_1 && VAR_1->types, ((void*)0));
 if (VAR_2 < 0 || VAR_2 >= VAR_1->header.method_size) {
  return ((void*)0);
 }
 int VAR_3 = VAR_1->methods[VAR_2].class_id;
 if (VAR_3 < 0 || VAR_3 >= VAR_1->header.types_size) {
  return ((void*)0);
 }
 const char *VAR_4 = FUNC_1 (VAR_1, VAR_2);
 if (!VAR_4) {
  return ((void*)0);
 }
 const char *VAR_5 = FUNC_0 (VAR_1, VAR_3);
 char *VAR_6 = ((void*)0);
 if (VAR_5) {
  char *VAR_7 = FUNC_10 (VAR_5);
  FUNC_7 (VAR_7, ';', 0);
  char *VAR_8 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_8) {
   VAR_6 = FUNC_6 ("%s.%s%s", VAR_7, VAR_4, VAR_8);
   FUNC_3 (VAR_8);
  } else {
   VAR_6 = FUNC_6 ("%s.%s%s", VAR_7, VAR_4, "???");
  }
  FUNC_3 (VAR_7);
 } else {
  char *VAR_9 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_9) {
   VAR_6 = FUNC_6 ("%s.%s%s", "???", VAR_4, VAR_9);
   FUNC_3 (VAR_9);
  } else {
   VAR_6 = FUNC_6 ("%s.%s%s", "???", VAR_4, "???");
   FUNC_3 (VAR_9);
  }
 }
 if (VAR_6 && VAR_0) {
  char *VAR_10 = FUNC_9 (VAR_6, '(');
  if (VAR_10) {
   *VAR_10 = 0;
   char *VAR_11 = FUNC_9 (VAR_10 + 1, ')');
   if (VAR_11) {
    FUNC_8 (VAR_11 + 1);
    FUNC_5 (VAR_10, VAR_11 + 1);
   }
   FUNC_8 (VAR_6);
  }
 }

 return VAR_6;
}
