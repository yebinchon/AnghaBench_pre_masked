
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int model; } ;
typedef TYPE_1__ CPU_MODEL ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static CPU_MODEL *FUNC_2(char *VAR_0) {
 static CPU_MODEL *VAR_1 = ((void*)0);

 if (VAR_1 && !FUNC_1 (VAR_0, VAR_1->model)) {
  return VAR_1;
 }

 VAR_1 = FUNC_0 (VAR_0);
 return VAR_1;
}
