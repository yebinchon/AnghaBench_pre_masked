
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_7__ {int pb; int lc; int lp; } ;
struct TYPE_8__ {int dicPos; TYPE_1__ prop; } ;
struct TYPE_9__ {int state; int control; int unpackSize; int packSize; int needInitProp; TYPE_2__ decoder; } ;
typedef int ELzma2State ;
typedef TYPE_3__ CLzma2Dec ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static ELzma2State FUNC_5(CLzma2Dec *VAR_5, Byte VAR_6)
{
  switch(VAR_5->state)
  {
    case 133:
      VAR_5->control = VAR_6;
      FUNC_3(FUNC_4("\n %4X ", VAR_5->decoder.dicPos));
      FUNC_3(FUNC_4(" %2X", VAR_6));
      if (VAR_5->control == 0)
        return VAR_4;
      if (FUNC_2(VAR_5))
      {
        if ((VAR_5->control & 0x7F) > 2)
          return VAR_3;
        VAR_5->unpackSize = 0;
      }
      else
        VAR_5->unpackSize = (UInt32)(VAR_5->control & 0x1F) << 16;
      return 129;

    case 129:
      VAR_5->unpackSize |= (UInt32)VAR_6 << 8;
      return 128;

    case 128:
      VAR_5->unpackSize |= (UInt32)VAR_6;
      VAR_5->unpackSize++;
      FUNC_3(FUNC_4(" %8d", VAR_5->unpackSize));
      return (FUNC_2(VAR_5)) ? VAR_2 : 132;

    case 132:
      VAR_5->packSize = (UInt32)VAR_6 << 8;
      return 131;

    case 131:
      VAR_5->packSize |= (UInt32)VAR_6;
      VAR_5->packSize++;
      FUNC_3(FUNC_4(" %8d", VAR_5->packSize));
      return FUNC_1(FUNC_0(VAR_5)) ? 130:
        (VAR_5->needInitProp ? VAR_3 : VAR_2);

    case 130:
    {
      int VAR_7, VAR_8;
      if (VAR_6 >= (9 * 5 * 5))
        return VAR_3;
      VAR_7 = VAR_6 % 9;
      VAR_6 /= 9;
      VAR_5->decoder.prop.pb = VAR_6 / 5;
      VAR_8 = VAR_6 % 5;
      if (VAR_7 + VAR_8 > VAR_1)
        return VAR_3;
      VAR_5->decoder.prop.lc = VAR_7;
      VAR_5->decoder.prop.lp = VAR_8;
      VAR_5->needInitProp = VAR_0;
      return VAR_2;
    }
  }
  return VAR_3;
}
