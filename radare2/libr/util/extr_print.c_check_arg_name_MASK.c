
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_4__ {int (* exists_var ) (TYPE_1__*,scalar_t__,char*) ;} ;
typedef TYPE_1__ RPrint ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,char*) ;

__attribute__((used)) static bool FUNC_3 (RPrint *VAR_0, char *VAR_1, ut64 VAR_2) {
 if (VAR_2 && VAR_0->exists_var) {
  int VAR_3;
  for (VAR_3 = 0; VAR_1[VAR_3] && (FUNC_0 (VAR_1[VAR_3]) || FUNC_1 (VAR_1[VAR_3]) || VAR_1[VAR_3] == '_'); VAR_3++) {
   ;
  }
  char VAR_4 = VAR_1[VAR_3];
  VAR_1[VAR_3] = '\0';
  bool VAR_5 = VAR_0->exists_var (VAR_0, VAR_2, VAR_1);
  VAR_1[VAR_3] = VAR_4;
  return VAR_5;
 }
 return 0;
}
