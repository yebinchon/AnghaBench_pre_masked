
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int qXfer_features_read; } ;
struct TYPE_7__ {TYPE_1__ stub_features; } ;
typedef TYPE_2__ libgdbr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 char* FUNC_2 (TYPE_2__*,char*,int *) ;

int FUNC_3(libgdbr_t *VAR_0) {
 if (!VAR_0->stub_features.qXfer_features_read) {
  return -1;
 }
 char *VAR_1;
 ut64 VAR_2;
 if (!(VAR_1 = FUNC_2 (VAR_0, "target.xml", &VAR_2))) {
  return -1;
 }
 FUNC_1 (VAR_0, VAR_1, VAR_2);
 FUNC_0 (VAR_1);
 return 0;
}
