
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ synctex_status_t ;
typedef TYPE_1__* synctex_scanner_t ;
struct TYPE_6__ {int y_offset; int x_offset; int unit; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 char* FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char**) ;

synctex_status_t FUNC_6(synctex_scanner_t VAR_7) {
 synctex_status_t VAR_8 = 0;
 char * VAR_9 = ((void*)0);



 if (((void*)0) == VAR_7) {
  return VAR_2;
 }

post_scriptum_not_found:
 VAR_8 = FUNC_1(VAR_7,"Post scriptum:");
 if (VAR_8<VAR_5) {
  return VAR_8;
 }
 if (VAR_8 == VAR_5) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8<VAR_3) {
   return VAR_8;
  } else if (VAR_8<VAR_6) {
   return VAR_6;
  }
  goto post_scriptum_not_found;
 }

next_line:
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8<VAR_3) {
  return VAR_8;
 } else if (VAR_8<VAR_6) {
  return VAR_6;
 }

 VAR_8 = FUNC_1(VAR_7,"Magnification:");
 if (VAR_8 == VAR_6 ) {



  VAR_7->unit = FUNC_5(VAR_1,&VAR_9);



  if (VAR_9 == VAR_1) {
   FUNC_0("bad magnification in the post scriptum, a float was expected.");
   return VAR_4;
  }
  if (VAR_7->unit<=0) {
   FUNC_0("bad magnification in the post scriptum, a positive float was expected.");
   return VAR_4;
  }
  VAR_1 = VAR_9;
  goto next_line;
 }
 if (VAR_8<VAR_3){
report_record_problem:
  FUNC_0("Problem reading the Post Scriptum records");
  return VAR_8;
 }
 VAR_8 = FUNC_1(VAR_7,"X Offset:");
 if (VAR_8 == VAR_6) {
  VAR_8 = FUNC_3(VAR_7, &(VAR_7->x_offset));
  if (VAR_8<VAR_6) {
   FUNC_0("problem with X offset in the Post Scriptum.");
   return VAR_8;
  }
  goto next_line;
 } else if (VAR_8<VAR_3){
  goto report_record_problem;
 }
 VAR_8 = FUNC_1(VAR_7,"Y Offset:");
 if (VAR_8==VAR_6) {
  VAR_8 = FUNC_3(VAR_7, &(VAR_7->y_offset));
  if (VAR_8<VAR_6) {
   FUNC_0("problem with Y offset in the Post Scriptum.");
   return VAR_8;
  }
  goto next_line;
 } else if (VAR_8<VAR_3){
  goto report_record_problem;
 }
 goto next_line;
}
