
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int USHORT ;
typedef int ULONG ;
struct TYPE_2__ {int WindowGranularity; int HeightInPixels; int BytesPerScanLine; } ;
typedef char* PVOID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

VOID
FUNC_3(PVOID VAR_8)
{
  USHORT VAR_9;
  ULONG VAR_10;
  USHORT VAR_11;
  ULONG VAR_12;




  if (VAR_7 == VAR_0)
    {
      FUNC_2((PVOID) VAR_2, VAR_8, FUNC_0());
    }

  else if (VAR_6 == VAR_0 && VAR_4)
    {
      VAR_12 = VAR_5.WindowGranularity << 10;
      VAR_9 = (USHORT)((VAR_5.HeightInPixels * VAR_5.BytesPerScanLine) / VAR_12);
      VAR_10 = (VAR_5.HeightInPixels * VAR_5.BytesPerScanLine) % VAR_12;



      for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
        {
          FUNC_1(VAR_11);
          FUNC_2((PVOID) VAR_3, (char *) VAR_8 + VAR_11 * VAR_12, VAR_12);
        }


      FUNC_1(VAR_11);
      FUNC_2((PVOID)VAR_3, (char *) VAR_8 + VAR_11 * VAR_12, VAR_10);
    }

  else
    {
      VAR_1;
    }
}
