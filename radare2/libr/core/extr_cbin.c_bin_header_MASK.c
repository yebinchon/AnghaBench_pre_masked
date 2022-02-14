
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* header ) (int *) ;} ;
struct TYPE_5__ {int bin; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RBinPlugin ;
typedef int RBinFile ;


 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(RCore *VAR_0, int VAR_1) {
 RBinFile *VAR_2 = FUNC_0 (VAR_0->bin);
 RBinPlugin *VAR_3 = FUNC_1 (VAR_2);
 if (VAR_3 && VAR_3->header) {
  VAR_3->header (VAR_2);
  return 1;
 }
 return 0;
}
