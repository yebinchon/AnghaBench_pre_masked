
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_6__ {int ninserts; } ;
typedef TYPE_1__ ckh_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void const*,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,void const**,void const**) ;

bool
FUNC_4(tsd_t *VAR_0, ckh_t *VAR_1, const void *VAR_2, const void *VAR_3) {
 bool VAR_4;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(FUNC_2(VAR_1, VAR_2, ((void*)0), ((void*)0)));





 while (FUNC_3(VAR_1, &VAR_2, &VAR_3)) {
  if (FUNC_1(VAR_0, VAR_1)) {
   VAR_4 = 1;
   goto label_return;
  }
 }

 VAR_4 = 0;
label_return:
 return VAR_4;
}
