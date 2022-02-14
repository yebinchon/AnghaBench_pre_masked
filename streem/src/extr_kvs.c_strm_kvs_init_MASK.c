
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_3(strm_state* VAR_13)
{
  VAR_7 = FUNC_1(((void*)0), "kvs");
  FUNC_2(VAR_7, "get", FUNC_0(VAR_1));
  FUNC_2(VAR_7, "put", FUNC_0(VAR_3));
  FUNC_2(VAR_7, "update", FUNC_0(VAR_6));
  FUNC_2(VAR_7, "txn", FUNC_0(VAR_5));
  FUNC_2(VAR_7, "close", FUNC_0(VAR_0));
  FUNC_2(VAR_7, "string", FUNC_0(VAR_4));

  VAR_8 = FUNC_1(((void*)0), "kvs_txn");
  FUNC_2(VAR_8, "get", FUNC_0(VAR_9));
  FUNC_2(VAR_8, "put", FUNC_0(VAR_10));
  FUNC_2(VAR_8, "update", FUNC_0(VAR_12));
  FUNC_2(VAR_7, "string", FUNC_0(VAR_11));

  FUNC_2(VAR_13, "kvs", FUNC_0(VAR_2));
}
