
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UUID ;
struct TYPE_4__ {int http; } ;
typedef TYPE_1__ RpcPktHdr ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int,unsigned int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int const) ;

RpcPktHdr *FUNC_3(int VAR_1,
                                         const UUID *VAR_2,
                                         const UUID *VAR_3,
                                         const UUID *VAR_4)
{
  RpcPktHdr *VAR_5;
  unsigned int VAR_6;
  char *VAR_7;

  VAR_6 = 8 + 4 + sizeof(UUID) + 4 + sizeof(UUID) + 8;
  if (!VAR_1)
    VAR_6 += 8 + 4 + sizeof(UUID);

  VAR_5 = FUNC_0(VAR_0, 0,
                                  VAR_1 ? 4 : 6, VAR_6);
  if (!VAR_5) return ((void*)0);
  VAR_7 = (char *)(&VAR_5->http+1);


  FUNC_1(VAR_7, 0x00000006, 0x00000001);

  FUNC_2(VAR_7, 0x00000003, *VAR_2);
  FUNC_2(VAR_7, 0x00000003, *VAR_3);

  if (VAR_1)

    FUNC_1(VAR_7, 0x00000000, 0x00010000);
  else
  {

    FUNC_1(VAR_7, 0x00000004, 0x40000000);

    FUNC_1(VAR_7, 0x00000005, 0x000493e0);

    FUNC_2(VAR_7, 0x0000000c, *VAR_4);
  }

  return VAR_5;
}
