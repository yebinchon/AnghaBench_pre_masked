
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Protseq; } ;
typedef TYPE_1__ RpcBinding ;
typedef int RPC_STATUS ;
typedef int LPCSTR ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__**,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static RPC_STATUS FUNC_3(RpcBinding** VAR_1, BOOL VAR_2, LPCSTR VAR_3)
{
  RpcBinding* VAR_4;

  FUNC_0(&VAR_4, VAR_2);
  VAR_4->Protseq = FUNC_1(VAR_3);

  FUNC_2("binding: %p\n", VAR_4);
  *VAR_1 = VAR_4;

  return VAR_0;
}
