
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ RpcConnection_tcp ;
typedef int RpcConnection ;


 int FUNC_0 (char*,int ,void*,unsigned int,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,unsigned int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(RpcConnection *VAR_2,
                                void *VAR_3, unsigned int VAR_4)
{
  RpcConnection_tcp *VAR_5 = (RpcConnection_tcp *) VAR_2;
  int VAR_6 = 0;
  while (VAR_6 != VAR_4)
  {
    int VAR_7 = FUNC_3(VAR_5->sock, (char *)VAR_3 + VAR_6, VAR_4 - VAR_6, 0);
    if (!VAR_7)
      return -1;
    else if (VAR_7 > 0)
      VAR_6 += VAR_7;
    else if (FUNC_2() == VAR_0)
      continue;
    else if (FUNC_2() != VAR_1)
    {
      FUNC_1("recv() failed: %u\n", FUNC_2());
      return -1;
    }
    else
    {
      if (!FUNC_4(VAR_5))
        return -1;
    }
  }
  FUNC_0("%d %p %u -> %d\n", VAR_5->sock, VAR_3, VAR_4, VAR_6);
  return VAR_6;
}
