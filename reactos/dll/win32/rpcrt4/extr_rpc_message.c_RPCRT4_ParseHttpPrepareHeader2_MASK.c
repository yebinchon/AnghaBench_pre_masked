
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int flags; int num_data_items; } ;
struct TYPE_5__ {TYPE_1__ http; } ;
typedef TYPE_2__ RpcPktHdr ;
typedef int RPC_STATUS ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;

RPC_STATUS FUNC_4(RpcPktHdr *VAR_2,
                                          unsigned char *VAR_3, ULONG *VAR_4,
                                          ULONG *VAR_5,
                                          ULONG *VAR_6)
{
  ULONG VAR_7;
  if (VAR_2->http.flags != 0x0)
  {
    FUNC_0("invalid flags 0x%x\n", VAR_2->http.flags);
    return VAR_1;
  }
  if (VAR_2->http.num_data_items != 3)
  {
    FUNC_0("invalid number of data items %d\n", VAR_2->http.num_data_items);
    return VAR_1;
  }

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 != 0x00000006)
  {
    FUNC_0("invalid type for field 1: 0x%08x\n", VAR_7);
    return VAR_1;
  }
  *VAR_4 = *(ULONG *)FUNC_1(VAR_3);
  VAR_3 = FUNC_3(VAR_3);

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 != 0x00000000)
  {
    FUNC_0("invalid type for field 2: 0x%08x\n", VAR_7);
    return VAR_1;
  }
  *VAR_5 = *(ULONG *)FUNC_1(VAR_3);
  VAR_3 = FUNC_3(VAR_3);

  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7 != 0x00000002)
  {
    FUNC_0("invalid type for field 3: 0x%08x\n", VAR_7);
    return VAR_1;
  }
  *VAR_6 = *(ULONG *)FUNC_1(VAR_3);

  return VAR_0;
}
