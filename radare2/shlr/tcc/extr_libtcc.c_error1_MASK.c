
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
typedef int buf ;
struct TYPE_6__ {char* filename; scalar_t__ line_num; struct TYPE_6__* prev; } ;
struct TYPE_5__ {int nb_errors; scalar_t__ warn_error; int error_opaque; int (* error_func ) (int ,char*) ;TYPE_2__** include_stack_ptr; TYPE_2__** include_stack; } ;
typedef TYPE_1__ TCCState ;
typedef TYPE_2__ BufferedFile ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*,int,char const*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(TCCState *VAR_2, int VAR_3, const char *VAR_4, va_list VAR_5)
{
 char VAR_6[2048];
 BufferedFile **VAR_7, *VAR_8;

 VAR_6[0] = '\0';

 for (VAR_8 = VAR_0; VAR_8 && VAR_8->filename[0] == ':'; VAR_8 = VAR_8->prev) {
  ;
 }
 if (VAR_8) {
  for (VAR_7 = VAR_2->include_stack; VAR_7 < VAR_2->include_stack_ptr; VAR_7++) {
   FUNC_1 (VAR_6, sizeof(VAR_6), "In file included from %s:%d:\n",
    (*VAR_7)->filename, (*VAR_7)->line_num);
  }
  if (VAR_8->line_num > 0) {
   FUNC_1 (VAR_6, sizeof(VAR_6), "%s:%d: ",
    VAR_8->filename, VAR_8->line_num);
  } else {
   FUNC_1 (VAR_6, sizeof(VAR_6), "%s: ",
    VAR_8->filename);
  }
 } else {
  FUNC_1 (VAR_6, sizeof(VAR_6), "tcc: ");
 }
 if (VAR_3) {
  FUNC_1 (VAR_6, sizeof(VAR_6), "warning: ");
 } else {
  FUNC_1 (VAR_6, sizeof(VAR_6), "error: ");
 }
 FUNC_2 (VAR_6, sizeof(VAR_6), VAR_4, VAR_5);

 if (!VAR_2->error_func) {

  FUNC_0 (VAR_1, "%s\n", VAR_6);
 } else {
  VAR_2->error_func (VAR_2->error_opaque, VAR_6);
 }
 if (!VAR_3 || VAR_2->warn_error) {
  VAR_2->nb_errors++;
 }
}
