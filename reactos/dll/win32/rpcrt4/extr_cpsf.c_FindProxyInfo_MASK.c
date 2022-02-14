
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* pIIDLookupRtn ) (int ,int*) ;} ;
typedef int REFIID ;
typedef TYPE_1__ ProxyFileInfo ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int*) ;

__attribute__((used)) static BOOL FUNC_2(const ProxyFileInfo **VAR_2, REFIID VAR_3, const ProxyFileInfo **VAR_4, int *VAR_5)
{
  while (*VAR_2) {
    if ((*VAR_2)->pIIDLookupRtn(VAR_3, VAR_5)) {
      *VAR_4 = *VAR_2;
      FUNC_0("found: ProxyInfo %p Index %d\n", *VAR_4, *VAR_5);
      return VAR_1;
    }
    VAR_2++;
  }
  FUNC_0("not found\n");
  return VAR_0;
}
