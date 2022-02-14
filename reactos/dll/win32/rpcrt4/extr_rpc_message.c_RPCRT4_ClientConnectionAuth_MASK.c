
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int RpcPktHdr ;
typedef int RpcConnection ;
typedef scalar_t__ RPC_STATUS ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned char*) ;
 int VAR_1 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int ,unsigned char*,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ,unsigned char*,unsigned int*) ;

RPC_STATUS FUNC_8(RpcConnection* VAR_3, BYTE *VAR_4,
                                       ULONG VAR_5)
{
  RpcPktHdr *VAR_6;
  RPC_STATUS VAR_7;
  unsigned char *VAR_8;
  unsigned int VAR_9 = 0;

  FUNC_6("challenge %s, %d bytes\n", VAR_4, VAR_5);

  VAR_7 = FUNC_7(VAR_3, VAR_0, VAR_4, VAR_5, ((void*)0), &VAR_9);
  if (VAR_7) return VAR_7;
  VAR_8 = FUNC_1(FUNC_0(), 0, VAR_9);
  if (!VAR_8) return VAR_2;
  VAR_7 = FUNC_7(VAR_3, VAR_0, VAR_4, VAR_5, VAR_8, &VAR_9);
  if (VAR_7) return VAR_7;

  VAR_6 = FUNC_3(VAR_1);

  if (VAR_6)
    VAR_7 = FUNC_5(VAR_3, VAR_6, ((void*)0), 0, VAR_8, VAR_9);
  else
    VAR_7 = VAR_2;

  FUNC_2(FUNC_0(), 0, VAR_8);
  FUNC_4(VAR_6);

  return VAR_7;
}
