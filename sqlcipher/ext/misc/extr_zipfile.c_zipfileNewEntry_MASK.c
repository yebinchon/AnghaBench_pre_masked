
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ zFile; } ;
struct TYPE_8__ {TYPE_1__ cds; } ;
typedef TYPE_2__ ZipfileEntry ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static ZipfileEntry *FUNC_4(const char *VAR_0){
  ZipfileEntry *VAR_1;
  VAR_1 = FUNC_2(sizeof(ZipfileEntry));
  if( VAR_1 ){
    FUNC_0(VAR_1, 0, sizeof(ZipfileEntry));
    VAR_1->cds.zFile = FUNC_3("%s", VAR_0);
    if( VAR_1->cds.zFile==0 ){
      FUNC_1(VAR_1);
      VAR_1 = 0;
    }
  }
  return VAR_1;
}
