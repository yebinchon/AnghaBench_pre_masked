
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ AuthInfo; } ;
typedef int RpcPktHdr ;
typedef TYPE_1__ RpcConnection ;
typedef scalar_t__ RPC_STATUS ;


 int FUNC_0 () ;
 unsigned char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,void*,unsigned int,unsigned char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *,int ,unsigned char*,unsigned int*) ;
 int FUNC_6 (TYPE_1__*) ;

RPC_STATUS FUNC_7(RpcConnection *VAR_3, RpcPktHdr *VAR_4,
                       void *VAR_5, unsigned int VAR_6)
{
  RPC_STATUS VAR_7;

  if (FUNC_4(VAR_4) &&
      VAR_3->AuthInfo &&
      !FUNC_6(VAR_3))
  {
      unsigned int VAR_8 = 0;
      unsigned char *VAR_9;

      VAR_7 = FUNC_5(VAR_3, VAR_2, ((void*)0), 0, ((void*)0), &VAR_8);
      if (VAR_7 != VAR_0) return VAR_7;

      VAR_9 = FUNC_1(FUNC_0(), 0, VAR_8);
      if (!VAR_9) return VAR_1;


      VAR_7 = FUNC_5(VAR_3, VAR_2, ((void*)0), 0, VAR_9, &VAR_8);
      if (VAR_7 == VAR_0)
          VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9, VAR_8);

      FUNC_2(FUNC_0(), 0, VAR_9);
  }
  else
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0), 0);

  return VAR_7;
}
