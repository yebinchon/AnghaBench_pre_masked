
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_tbl_s {size_t type; int format; int name; scalar_t__ len; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 struct type_tbl_s* VAR_3 ;

__attribute__((used)) static void FUNC_0(void) {
 static int VAR_4 = 0;
 const struct type_tbl_s *VAR_5;
 if (VAR_4) {
  return;
 }
 VAR_4++;
 for (VAR_5 = VAR_3; VAR_5->len; VAR_5++) {
  if (VAR_5->type >= VAR_0) {
   continue;
  }
  VAR_2[VAR_5->type] = VAR_5->name;
  VAR_1[VAR_5->type] = VAR_5->format;
 }
}
