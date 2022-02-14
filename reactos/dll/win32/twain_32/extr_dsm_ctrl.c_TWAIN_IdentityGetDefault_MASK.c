
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * pTW_IDENTITY ;
struct TYPE_2__ {int identity; } ;
typedef int TW_UINT16 ;
typedef int TW_MEMREF ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;

TW_UINT16 FUNC_2 (pTW_IDENTITY VAR_7, TW_MEMREF VAR_8)
{
 pTW_IDENTITY VAR_9 = (pTW_IDENTITY) VAR_8;

 FUNC_0("DG_CONTROL/DAT_IDENTITY/MSG_GETDEFAULT\n");
 VAR_0 = VAR_1;
 FUNC_1();
 if (!VAR_6)
  return VAR_3;
 *VAR_9 = VAR_5[0].identity;
 VAR_0 = VAR_2;
 return VAR_4;
}
