
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {unsigned short num_data_items; } ;
struct TYPE_5__ {TYPE_1__ http; } ;
typedef TYPE_2__ RpcPktHdr ;
typedef int GUID ;
typedef unsigned char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;

BOOL FUNC_1(RpcPktHdr *VAR_2, unsigned char *VAR_3,
                              unsigned short VAR_4)
{
  unsigned short VAR_5;
  BYTE *VAR_6 = VAR_3;

  for (VAR_5 = 0; VAR_5 < VAR_2->http.num_data_items; VAR_5++)
  {
    ULONG VAR_7;

    if (VAR_4 < sizeof(ULONG))
      return VAR_0;

    VAR_7 = *(ULONG *)VAR_6;
    VAR_6 += sizeof(ULONG);
    VAR_4 -= sizeof(ULONG);

    switch (VAR_7)
    {
      case 0x3:
      case 0xc:
        if (VAR_4 < sizeof(GUID))
          return VAR_0;
        VAR_6 += sizeof(GUID);
        VAR_4 -= sizeof(GUID);
        break;
      case 0x0:
      case 0x2:
      case 0x4:
      case 0x5:
      case 0x6:
      case 0xd:
        if (VAR_4 < sizeof(ULONG))
          return VAR_0;
        VAR_6 += sizeof(ULONG);
        VAR_4 -= sizeof(ULONG);
        break;
      case 0x1:
        if (VAR_4 < 24)
          return VAR_0;
        VAR_6 += 24;
        VAR_4 -= 24;
        break;
      default:
        FUNC_0("unimplemented type 0x%x\n", VAR_7);
        break;
    }
  }
  return VAR_1;
}
