
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwCount; int* dwValues; int* dwFlags; int dwParseFlags; } ;
struct TYPE_6__ {int wYear; int wHour; int wMinute; int wSecond; int wDay; int wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ DATEPARSE ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ FUNC_3 (int,int,int) ;

__attribute__((used)) static inline HRESULT FUNC_4(DATEPARSE *VAR_10, DWORD VAR_11,
                                       DWORD VAR_12, SYSTEMTIME *VAR_13)
{
  DWORD VAR_14, VAR_15, VAR_16 = 0, VAR_17, VAR_18, VAR_19;

  if (!VAR_10->dwCount)
  {
    VAR_17 = 30;
    VAR_18 = 12;
    VAR_19 = 1899;
    goto VARIANT_MakeDate_OK;
  }

  VAR_17 = VAR_10->dwValues[VAR_12 + 0];
  VAR_18 = VAR_10->dwValues[VAR_12 + 1];
  if (VAR_10->dwCount == 2)
  {
    SYSTEMTIME VAR_20;
    FUNC_1(&VAR_20);
    VAR_19 = VAR_20.wYear;
  }
  else
    VAR_19 = VAR_10->dwValues[VAR_12 + 2];

  FUNC_2("(%d,%d,%d,%d,%d)\n", VAR_17, VAR_18, VAR_19, VAR_11, VAR_12);





  if (VAR_10->dwFlags[VAR_12 + 0] & VAR_2)
  {
    VAR_14 = VAR_5;
  }
  else if (VAR_10->dwFlags[VAR_12 + 1] & VAR_2)
  {
    VAR_14 = VAR_4;
    if (VAR_10->dwCount > 2)
      VAR_14 |= VAR_8;
  }
  else if (VAR_10->dwCount > 2 && VAR_10->dwFlags[VAR_12 + 2] & VAR_2)
  {
    VAR_14 = VAR_7;
  }
  else
  {
    VAR_14 = VAR_5|VAR_4;
    if (VAR_10->dwCount > 2)
      VAR_14 |= (VAR_8|VAR_7);
  }

VARIANT_MakeDate_Start:
  FUNC_2("dwAllOrders is 0x%08x\n", VAR_14);

  while (VAR_14)
  {
    DWORD VAR_21;

    if (VAR_16 == 0)
    {

      switch (VAR_11)
      {
      case 0: VAR_15 = VAR_14 & VAR_5; break;
      case 1: VAR_15 = VAR_14 & VAR_4; break;
      default: VAR_15 = VAR_14 & VAR_8; break;
      }
    }
    else if (VAR_16 == 1)
    {

      switch (VAR_11)
      {
      case 0: VAR_15 = VAR_14 & ~(VAR_4|VAR_7); break;
      case 1: VAR_15 = VAR_14 & ~(VAR_5|VAR_7|VAR_6); break;
      default: VAR_15 = VAR_14 & ~(VAR_4|VAR_7); break;
      }
    }
    else
    {

      VAR_15 = VAR_14;
    }

    FUNC_2("Attempt %d, dwTry is 0x%08x\n", VAR_16, VAR_15);

    VAR_16++;
    if (!VAR_15)
      continue;



    if (VAR_15 & VAR_5)
    {
      if (FUNC_3(VAR_18,VAR_17,VAR_19))
      {
        do { VAR_21 = VAR_17; VAR_17 = VAR_18; VAR_18 = VAR_21; } while (0);
        goto VARIANT_MakeDate_OK;
      }
      VAR_14 &= ~VAR_5;
    }
    if (VAR_15 & VAR_8)
    {
      if (FUNC_3(VAR_19,VAR_18,VAR_17))
      {
        do { VAR_21 = VAR_17; VAR_17 = VAR_19; VAR_19 = VAR_21; } while (0);
        goto VARIANT_MakeDate_OK;
      }
      VAR_14 &= ~VAR_8;
    }
    if (VAR_15 & VAR_7)
    {
      if (FUNC_3(VAR_18,VAR_19,VAR_17))
      {
        do { VAR_21 = VAR_17; VAR_17 = VAR_18; VAR_18 = VAR_21; } while (0);
        do { VAR_21 = VAR_18; VAR_18 = VAR_19; VAR_19 = VAR_21; } while (0);
        goto VARIANT_MakeDate_OK;
      }
      VAR_14 &= ~VAR_7;
    }
    if (VAR_15 & VAR_4)
    {
      if (FUNC_3(VAR_17,VAR_18,VAR_19))
        goto VARIANT_MakeDate_OK;
      VAR_14 &= ~VAR_4;
    }
    if (VAR_15 & VAR_6)
    {

      if (FUNC_3(VAR_19,VAR_17,VAR_18))
      {
        do { VAR_21 = VAR_17; VAR_17 = VAR_19; VAR_19 = VAR_21; } while (0);
        do { VAR_21 = VAR_18; VAR_18 = VAR_19; VAR_19 = VAR_21; } while (0);
        goto VARIANT_MakeDate_OK;
      }
      VAR_14 &= ~VAR_6;
    }
  }

  if (VAR_10->dwCount == 2)
  {

    VAR_19 = 1;
    VAR_14 = VAR_8|VAR_6;
    VAR_10->dwCount = 0;
    VAR_16 = 0;
    goto VARIANT_MakeDate_Start;
  }


  return VAR_0;

VARIANT_MakeDate_OK:


  if (VAR_13->wHour > 23 || VAR_13->wMinute > 59 || VAR_13->wSecond > 59)
    return VAR_0;

  FUNC_2("Time %d %d %d\n", VAR_13->wHour, VAR_13->wMinute, VAR_13->wSecond);
  if (VAR_13->wHour < 12 && (VAR_10->dwParseFlags & VAR_3))
    VAR_13->wHour += 12;
  else if (VAR_13->wHour == 12 && (VAR_10->dwParseFlags & VAR_1))
    VAR_13->wHour = 0;
  FUNC_2("Time %d %d %d\n", VAR_13->wHour, VAR_13->wMinute, VAR_13->wSecond);

  VAR_13->wDay = VAR_17;
  VAR_13->wMonth = VAR_18;





  VAR_13->wYear = VAR_19 < 30 ? 2000 + VAR_19 : VAR_19 < 100 ? 1900 + VAR_19 : VAR_19;
  FUNC_2("Returning date %d/%d/%d\n", VAR_17, VAR_18, VAR_13->wYear);
  return VAR_9;
}
