
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; } ;
typedef TYPE_1__ RSysInfo ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (scalar_t__,char) ;

__attribute__((used)) static bool FUNC_4() {
 int VAR_0 = 0;
 RSysInfo *VAR_1 = FUNC_1 ();
 if (VAR_1 && VAR_1->version) {
  char *VAR_2 = FUNC_3 (VAR_1->version, '.');
  if (VAR_2) {
   *VAR_2 = '\0';
   VAR_0 = FUNC_0 (VAR_1->version);
  }
 }
 FUNC_2 (VAR_1);
 return VAR_0 == 10;
}
