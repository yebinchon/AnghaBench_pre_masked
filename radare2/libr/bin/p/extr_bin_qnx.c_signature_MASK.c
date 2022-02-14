
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int signature; } ;
struct TYPE_9__ {TYPE_2__ rwend; } ;
struct TYPE_8__ {TYPE_1__* o; } ;
struct TYPE_6__ {TYPE_4__* bin_obj; } ;
typedef TYPE_3__ RBinFile ;
typedef TYPE_4__ QnxObj ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static char *FUNC_2(RBinFile *VAR_0, bool VAR_1) {
  char VAR_2[64];
  QnxObj *VAR_3 = VAR_0->o->bin_obj;
 return VAR_3? FUNC_0 (((void*)0), FUNC_1 (VAR_3->rwend.signature, VAR_2, 10)): ((void*)0);
}
