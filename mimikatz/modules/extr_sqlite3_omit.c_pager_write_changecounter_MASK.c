
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ pData; TYPE_1__* pPager; } ;
struct TYPE_4__ {scalar_t__ dbFileVers; } ;
typedef TYPE_2__ PgHdr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(PgHdr *VAR_1){
  u32 VAR_2;


  VAR_2 = FUNC_1((u8*)VAR_1->pPager->dbFileVers)+1;
  FUNC_0(((char*)VAR_1->pData)+24, VAR_2);




  FUNC_0(((char*)VAR_1->pData)+92, VAR_2);
  FUNC_0(((char*)VAR_1->pData)+96, VAR_0);
}
