
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct FilePage {int nData; int * aData; } ;
typedef int Page ;



__attribute__((used)) static u8 *FUNC_0(Page *VAR_0, int *VAR_1){
  *VAR_1 = ((struct FilePage *)(VAR_0))->nData;
  return ((struct FilePage *)(VAR_0))->aData;
}
