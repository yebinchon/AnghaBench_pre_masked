
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct TYPE_5__ {int pConfig; } ;
typedef TYPE_2__ Fts5Table ;
typedef TYPE_3__ Fts5Cursor ;
typedef int Fts5Context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,void*,int (*) (void*,int,char const*,int,int,int)) ;

__attribute__((used)) static int FUNC_1(
  Fts5Context *VAR_1,
  const char *VAR_2, int VAR_3,
  void *VAR_4,
  int (*VAR_5)(void*, int, const char*, int, int, int)
){
  Fts5Cursor *VAR_6 = (Fts5Cursor*)VAR_1;
  Fts5Table *VAR_7 = (Fts5Table*)(VAR_6->base.pVtab);
  return FUNC_0(
      VAR_7->pConfig, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5
  );
}
