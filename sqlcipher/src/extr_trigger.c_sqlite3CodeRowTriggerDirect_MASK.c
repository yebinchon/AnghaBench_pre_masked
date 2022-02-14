
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdbe ;
struct TYPE_12__ {scalar_t__ pProgram; } ;
typedef TYPE_2__ TriggerPrg ;
struct TYPE_13__ {char* zName; } ;
typedef TYPE_3__ Trigger ;
typedef int Table ;
struct TYPE_14__ {int nMem; TYPE_1__* db; scalar_t__ nErr; } ;
struct TYPE_11__ {int flags; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,TYPE_3__*,int *,int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ,int,int,int ,char const*,int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(
  Parse *VAR_3,
  Trigger *VAR_4,
  Table *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8
){
  Vdbe *VAR_9 = FUNC_4(VAR_3);
  TriggerPrg *VAR_10;
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_1( VAR_10 || VAR_3->nErr || VAR_3->db->mallocFailed );



  if( VAR_10 ){
    int VAR_11 = (VAR_4->zName && 0==(VAR_3->db->flags&VAR_2));

    FUNC_5(VAR_9, VAR_0, VAR_6, VAR_8, ++VAR_3->nMem,
                      (const char *)VAR_10->pProgram, VAR_1);
    FUNC_0(
        (VAR_9, "Call: %s.%s", (VAR_4->zName?VAR_4->zName:"fkey"), FUNC_3(VAR_7)));






    FUNC_6(VAR_9, (u8)VAR_11);
  }
}
