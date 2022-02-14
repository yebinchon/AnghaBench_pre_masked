
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* pTW_IDENTITY ;
struct TYPE_8__ {scalar_t__ Id; } ;
struct TYPE_10__ {scalar_t__ (* dsEntry ) (TYPE_2__*,int ,int ,int ,int ) ;struct TYPE_10__* next; TYPE_1__ identity; } ;
typedef TYPE_3__ activeDS ;
struct TYPE_9__ {scalar_t__ Id; } ;
typedef scalar_t__ TW_UINT16 ;
typedef int TW_MEMREF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,int ,int ) ;

TW_UINT16 FUNC_4 (pTW_IDENTITY VAR_10, TW_MEMREF VAR_11)
{
 TW_UINT16 VAR_12 = VAR_8;
 pTW_IDENTITY VAR_13 = (pTW_IDENTITY) VAR_11;
 activeDS *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);

 FUNC_2 ("DG_CONTROL/DAT_IDENTITY/MSG_CLOSEDS\n");

 for (VAR_14 = VAR_9; VAR_14; VAR_14 = VAR_14->next) {
  if (VAR_14->identity.Id == VAR_13->Id)
   break;
  VAR_15 = VAR_14;
 }
 if (!VAR_14) {
  VAR_2 = VAR_4;
  return VAR_7;
 }
 VAR_12 = VAR_14->dsEntry (VAR_10, VAR_1, VAR_0, VAR_3, VAR_11);



 if (VAR_15)
  VAR_15->next = VAR_14->next;
 else
  VAR_9 = VAR_14->next;
 FUNC_1 (FUNC_0(), 0, VAR_14);
 if (VAR_12 == VAR_8)
  VAR_2 = VAR_6;
 else
  VAR_2 = VAR_5;
 return VAR_12;
}
