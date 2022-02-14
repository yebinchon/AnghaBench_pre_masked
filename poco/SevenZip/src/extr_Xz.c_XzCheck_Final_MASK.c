
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_3__ {int mode; int sha; int crc64; int crc; } ;
typedef TYPE_1__ CXzCheck ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;




int FUNC_4(CXzCheck *VAR_0, Byte *VAR_1)
{
  switch (VAR_0->mode)
  {
    case 130:
      FUNC_2(VAR_1, FUNC_1(VAR_0->crc));
      break;
    case 129:
    {
      int VAR_2;
      UInt64 VAR_3 = FUNC_0(VAR_0->crc64);
      for (VAR_2 = 0; VAR_2 < 8; VAR_2++, VAR_3 >>= 8)
        VAR_1[VAR_2] = (Byte)(VAR_3 & 0xFF);
      break;
    }
    case 128:
      FUNC_3(&VAR_0->sha, VAR_1);
      break;
    default:
      return 0;
  }
  return 1;
}
