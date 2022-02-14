
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* (* signature ) (int *,int ) ;} ;
struct TYPE_5__ {int bin; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RBinPlugin ;
typedef int RBinFile ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(RCore *VAR_0, int VAR_1) {
 RBinFile *VAR_2 = FUNC_2 (VAR_0->bin);
 RBinPlugin *VAR_3 = FUNC_3 (VAR_2);
 if (VAR_3 && VAR_3->signature) {
  const char *VAR_4 = VAR_3->signature (VAR_2, FUNC_0 (VAR_1));
  FUNC_4 (VAR_4);
  FUNC_1 ((char*) VAR_4);
  return 1;
 }
 return 0;
}
