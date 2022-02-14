
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_3__ {int WidthInPixels; int HeightInPixels; int BytesPerScanLine; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int*,int) ;

__attribute__((used)) static BOOLEAN
FUNC_11(USHORT VAR_12)
{
  VAR_2 = 0;





  VAR_0 = VAR_12;
  VAR_6 = 80;
  VAR_5 = 25;
  VAR_1 = 160;
  VAR_3 = VAR_11;
  VAR_8 = VAR_4;

  switch (VAR_12)
    {
      case 128:
      case 0x03:
        return FUNC_2();
      case 129:
        return FUNC_7();
      case 134:
        return FUNC_3();
      case 133:
        return FUNC_4();
      case 132:
        return FUNC_5();
      case 131:
        return FUNC_6();
      case 130:
        return FUNC_8();
   }

  if (0x12 == VAR_12)
    {

      FUNC_0((UCHAR)VAR_12);
      FUNC_10((USHORT*)0x03CE, 0x0F01);
      VAR_6 = 640;
      VAR_5 = 480;
      VAR_1 = 80;
      VAR_0 = VAR_12;
      VAR_3 = VAR_10;

      return VAR_7;
    }
  else if (0x13 == VAR_12)
    {

      FUNC_0((UCHAR)VAR_12);
      VAR_6 = 320;
      VAR_5 = 200;
      VAR_1 = 320;
      VAR_0 = VAR_12;
      VAR_3 = VAR_10;

      return VAR_7;
    }
  else if (0x0108 <= VAR_12 && VAR_12 <= 0x010C)
    {

      if (! FUNC_9(VAR_12, &VAR_9))
        {
          return VAR_4;
        }

      if (! FUNC_1(VAR_12))
        {
          return VAR_4;
        }

      VAR_6 = VAR_9.WidthInPixels;
      VAR_5 = VAR_9.HeightInPixels;
      VAR_1 = VAR_9.BytesPerScanLine;
      VAR_0 = VAR_12;
      VAR_3 = VAR_11;
      VAR_8 = VAR_7;

      return VAR_7;
    }
  else
    {

      if (! FUNC_9(VAR_12, &VAR_9))
        {
          return VAR_4;
        }

      if (! FUNC_1(VAR_12))
        {
          return VAR_4;
        }

      VAR_6 = VAR_9.WidthInPixels;
      VAR_5 = VAR_9.HeightInPixels;
      VAR_1 = VAR_9.BytesPerScanLine;
      VAR_0 = VAR_12;
      VAR_3 = VAR_10;
      VAR_8 = VAR_7;

      return VAR_7;
    }

  return VAR_4;
}
