
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cout; int * fout; } ;
typedef TYPE_1__ Output ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, int *VAR_1) {
 char *VAR_2;
 Output VAR_3;
 VAR_3.fout = ((void*)0);
 VAR_3.cout = FUNC_2 ("");
 int VAR_4 = FUNC_3 (VAR_0, &VAR_3);
 VAR_2 = FUNC_4 (FUNC_1 (VAR_3.cout));
 FUNC_0 (VAR_3.cout);
 if (VAR_1) {
  *VAR_1 = VAR_4;
 }
 return VAR_2;
}
