
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UUID ;
typedef int ULONG ;
struct TYPE_4__ {int http; } ;
typedef TYPE_1__ RpcPktHdr ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (char*,int ,int ,int const) ;
 int FUNC_2 (char*,int,int) ;

RpcPktHdr *FUNC_3(BOOL VAR_1, ULONG VAR_2,
                                             ULONG VAR_3,
                                             const UUID *VAR_4)
{
  RpcPktHdr *VAR_5;
  char *VAR_6;

  VAR_5 = FUNC_0(VAR_0, 0x2, 2,
                                  5 * sizeof(ULONG) + sizeof(UUID));
  if (!VAR_5) return ((void*)0);
  VAR_6 = (char *)(&VAR_5->http+1);

  FUNC_2(VAR_6, 0x0000000d, (VAR_1 ? 0x0 : 0x3));

  FUNC_1(VAR_6, VAR_2,
                                        VAR_3, *VAR_4);
  return VAR_5;
}
