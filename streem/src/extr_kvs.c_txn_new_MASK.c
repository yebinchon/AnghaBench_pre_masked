
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_txn {int serial; int * kvs; int tv; int type; int ns; } ;
typedef struct strm_txn strm_txn ;
typedef int strm_kvs ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct strm_txn* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static strm_txn*
FUNC_3(strm_kvs* VAR_3)
{
  struct strm_txn *VAR_4 = FUNC_2(sizeof(struct strm_txn));

  if (!VAR_4) return ((void*)0);
  VAR_4->ns = VAR_1;
  VAR_4->type = VAR_0;
  VAR_4->tv = FUNC_0(VAR_2);
  VAR_4->kvs = VAR_3;
  VAR_4->serial = FUNC_1(VAR_3);
  return VAR_4;
}
