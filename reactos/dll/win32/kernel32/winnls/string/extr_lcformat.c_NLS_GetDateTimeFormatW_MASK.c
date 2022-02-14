
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int st ;
typedef int buff ;
typedef char WCHAR ;
struct TYPE_25__ {char* szShortAM; char* szShortPM; } ;
struct TYPE_24__ {int wYear; int szEraName; } ;
struct TYPE_23__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; int wDayOfWeek; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__* PCJAPANESE_ERA ;
typedef TYPE_3__ NLS_FORMAT_NODE ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int LCID ;
typedef size_t INT ;
typedef int FILETIME ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 char* FUNC_3 (TYPE_3__ const*) ;
 char* FUNC_4 (TYPE_3__ const*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_3__ const*) ;
 char* FUNC_7 (TYPE_3__ const*,int) ;
 char* FUNC_8 (TYPE_3__ const*,int ) ;
 char* FUNC_9 (TYPE_3__ const*) ;
 char* FUNC_10 (TYPE_3__ const*) ;
 char* FUNC_11 (TYPE_3__ const*,int) ;
 char* FUNC_12 (TYPE_3__ const*,int ) ;
 char* FUNC_13 (TYPE_3__ const*) ;
 char* FUNC_14 (TYPE_3__ const*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (char) ;
 scalar_t__ FUNC_17 (char) ;
 scalar_t__ FUNC_18 (char) ;
 TYPE_2__* FUNC_19 (TYPE_1__ const*) ;
 int FUNC_20 () ;
 TYPE_3__* FUNC_21 (int ,int) ;
 int FUNC_22 (char*,int,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_1__*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_25 (char*,...) ;
 scalar_t__ VAR_15 ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*,char*,size_t) ;
 int FUNC_28 (TYPE_1__*,int ,int) ;
 int FUNC_29 (char*,int ,char const*,int,int) ;
 int FUNC_30 (char*) ;

__attribute__((used)) static INT FUNC_31(LCID VAR_16, DWORD VAR_17,
                                  const SYSTEMTIME* VAR_18, LPCWSTR VAR_19,
                                  LPWSTR VAR_20, INT VAR_21)
{
  const NLS_FORMAT_NODE *VAR_22;
  SYSTEMTIME VAR_23;
  INT VAR_24 = 0;
  INT VAR_25 = 0;
  BOOL VAR_26 = VAR_8;
  BOOL VAR_27 = VAR_8;


  if ((VAR_21 && !VAR_20) || !(VAR_22 = FUNC_21(VAR_16, VAR_17)))
    goto invalid_parameter;

  if (VAR_17 & ~(VAR_0|VAR_14))
  {
    if (VAR_19 &&
        ((VAR_17 & VAR_0 && VAR_17 & ~VAR_1) ||
         (VAR_17 & VAR_14 && VAR_17 & ~VAR_10)))
    {
      goto invalid_flags;
    }

    if (VAR_17 & VAR_0)
    {
      if ((VAR_17 & (VAR_2|VAR_3)) == (VAR_2|VAR_3))
        goto invalid_flags;
      else if (VAR_17 & (VAR_2|VAR_3))
        FUNC_1("Unsupported flags: DATE_LTRREADING/DATE_RTLREADING\n");

      switch (VAR_17 & (129|130|128))
      {
      case 0:
        break;
      case 129:
      case 130:
      case 128:
        if (VAR_19)
          goto invalid_flags;
        break;
      default:
        goto invalid_flags;
      }
    }
  }

  if (!VAR_19)
  {

    if (VAR_17 & VAR_0)
    {
      if (VAR_17 & 128)
        VAR_19 = FUNC_14(VAR_22);
      else if (VAR_17 & 130)
        VAR_19 = FUNC_6(VAR_22);
      else
        VAR_19 = FUNC_10(VAR_22);
    }
    else
      VAR_19 = FUNC_13(VAR_22);
  }

  if (!VAR_18)
  {
    FUNC_5(&VAR_23);
    VAR_18 = &VAR_23;
  }
  else
  {
    if (VAR_17 & VAR_0)
    {
      FILETIME VAR_28;


      FUNC_28(&VAR_23, 0, sizeof(VAR_23));
      VAR_23.wYear = VAR_18->wYear;
      VAR_23.wMonth = VAR_18->wMonth;
      VAR_23.wDay = VAR_18->wDay;

      if (VAR_23.wDay > 31 || VAR_23.wMonth > 12 || !FUNC_24(&VAR_23, &VAR_28))
        goto invalid_parameter;

      FUNC_2(&VAR_28, &VAR_23);
      VAR_18 = &VAR_23;
    }

    if (VAR_17 & VAR_14)
    {

      if (VAR_18->wHour > 24 || VAR_18->wMinute > 59 || VAR_18->wSecond > 59)
        goto invalid_parameter;
    }
  }


  while (*VAR_19)
  {
    if (FUNC_17(*VAR_19))
    {

      VAR_19++;


      while (*VAR_19)
      {
        if (FUNC_17(*VAR_19))
        {
          VAR_19++;
          if (!FUNC_17(*VAR_19))
            break;
        }

        if (!VAR_21)
          VAR_24++;
        else if (VAR_24 >= VAR_21)
          goto overrun;
        else if (!VAR_26)
        {
          VAR_20[VAR_24] = *VAR_19;
          VAR_24++;
        }
        VAR_19++;
      }
    }
    else if ((VAR_17 & VAR_0 && FUNC_16(*VAR_19)) ||
             (VAR_17 & VAR_14 && FUNC_18(*VAR_19)))
    {
      WCHAR VAR_29[32], VAR_30;
      LPCWSTR VAR_31 = ((void*)0);
      DWORD VAR_32 = 0;
      int VAR_33 = 0, VAR_34;

      VAR_26 = VAR_8;

      VAR_30 = *VAR_19;
      while (*VAR_19 == VAR_30)
      {
        VAR_33++;
        VAR_19++;
      }
      VAR_29[0] = '\0';

      if (VAR_30 != 'M') VAR_27 = VAR_8;
      switch(VAR_30)
      {
      case 'd':
        if (VAR_33 >= 4)
          VAR_31 = FUNC_7(VAR_22, (VAR_18->wDayOfWeek + 6) % 7);
        else if (VAR_33 == 3)
          VAR_31 = FUNC_11(VAR_22, (VAR_18->wDayOfWeek + 6) % 7);
        else
        {
          VAR_32 = VAR_18->wDay;
          VAR_31 = VAR_29;
          VAR_27 = VAR_15;
        }
        break;

      case 'M':
        if (VAR_33 >= 4)
        {
          LPCWSTR VAR_35 = FUNC_4(VAR_22, VAR_18->wMonth - 1);
          if (VAR_35)
          {
            if (VAR_27)
            {
              VAR_31 = VAR_35;
              break;
            }
            else
            {
              LPCWSTR VAR_36 = VAR_19;


              while (*VAR_36)
              {

                if (FUNC_17(*VAR_36))
                {
                  ++VAR_36;
                  while (*VAR_36)
                  {
                    if (FUNC_17(*VAR_36))
                    {
                      ++VAR_36;
                      if (!FUNC_17(*VAR_36)) break;
                    }
                  }
                }
                if (*VAR_36 != ' ') break;
                ++VAR_36;
              }

              if (*VAR_36 == 'd')
              {
                INT VAR_37 = 1;
                while (*++VAR_36 == 'd') VAR_37++;
                if (VAR_37 < 3)
                {
                  VAR_31 = VAR_35;
                  break;
                }
              }
            }
          }
          VAR_31 = FUNC_8(VAR_22, VAR_18->wMonth - 1);
        }
        else if (VAR_33 == 3)
          VAR_31 = FUNC_12(VAR_22, VAR_18->wMonth - 1);
        else
        {
          VAR_32 = VAR_18->wMonth;
          VAR_31 = VAR_29;
        }
        break;

      case 'y':
        if (VAR_33 >= 4)
        {
          VAR_33 = 4;
          VAR_32 = VAR_18->wYear;
        }
        else
        {
          VAR_33 = VAR_33 > 2 ? 2 : VAR_33;
          VAR_32 = VAR_18->wYear % 100;
        }
        VAR_31 = VAR_29;
        break;

      case 'g':
        if (VAR_33 == 2)
        {



          FUNC_1("Should be using GetCalendarInfo(CAL_SERASTRING), defaulting to 'AD'\n");
          VAR_29[0] = 'A'; VAR_29[1] = 'D'; VAR_29[2] = '\0';
        }
        else
        {
          VAR_29[0] = 'g'; VAR_29[1] = '\0';
        }
        VAR_31 = VAR_29;
        break;

      case 'h':
        if (!(VAR_17 & VAR_9))
        {
          VAR_33 = VAR_33 > 2 ? 2 : VAR_33;
          VAR_32 = VAR_18->wHour == 0 ? 12 : (VAR_18->wHour - 1) % 12 + 1;
          VAR_31 = VAR_29;
          break;
        }


      case 'H':
        VAR_33 = VAR_33 > 2 ? 2 : VAR_33;
        VAR_32 = VAR_18->wHour;
        VAR_31 = VAR_29;
        break;

      case 'm':
        if (VAR_17 & VAR_11)
        {
          VAR_24 = VAR_25;
          VAR_26 = VAR_15;
        }
        else
        {
          VAR_33 = VAR_33 > 2 ? 2 : VAR_33;
          VAR_32 = VAR_18->wMinute;
          VAR_31 = VAR_29;
        }
        break;

      case 's':
        if (VAR_17 & (VAR_12|VAR_11))
        {
          VAR_24 = VAR_25;
          VAR_26 = VAR_15;
        }
        else
        {
          VAR_33 = VAR_33 > 2 ? 2 : VAR_33;
          VAR_32 = VAR_18->wSecond;
          VAR_31 = VAR_29;
        }
        break;

      case 't':
        if (VAR_17 & VAR_13)
        {
          VAR_24 = VAR_25;
          VAR_26 = VAR_15;
        }
        else
        {
          if (VAR_33 == 1)
            VAR_31 = VAR_18->wHour < 12 ? VAR_22->szShortAM : VAR_22->szShortPM;
          else
            VAR_31 = VAR_18->wHour < 12 ? FUNC_3(VAR_22) : FUNC_9(VAR_22);
        }
        break;
      }

      if (VAR_31 == VAR_29 && VAR_29[0] == '\0')
      {
        static const WCHAR VAR_38[] = {'%','.','*','d',0};

        FUNC_29(VAR_29, FUNC_0(VAR_29), VAR_38, VAR_33, VAR_32);
      }

      VAR_34 = VAR_31 ? FUNC_30(VAR_31) : 0;

      if (VAR_21 && VAR_34)
      {
        if (VAR_24 + VAR_34 < VAR_21)
          FUNC_27(VAR_20 + VAR_24, VAR_31, VAR_34 * sizeof(WCHAR));
        else
        {
          FUNC_27(VAR_20 + VAR_24, VAR_31, (VAR_21 - VAR_24) * sizeof(WCHAR));
          goto overrun;
        }
      }
      VAR_24 += VAR_34;
      VAR_25 = VAR_24;
    }
    else
    {

      if (!VAR_21)
        VAR_24++;
      else if (VAR_24 >= VAR_21)
        goto overrun;
      else if (!VAR_26 || *VAR_19 == ' ')
      {
        VAR_20[VAR_24] = *VAR_19;
        VAR_24++;
      }
      VAR_19++;
    }
  }


  if (VAR_21)
  {
   if (VAR_24 >= VAR_21)
     goto overrun;
   else
     VAR_20[VAR_24] = '\0';
  }
  VAR_24++;

  FUNC_25("returning length=%d, output=%s\n", VAR_24, FUNC_26(VAR_20));
  return VAR_24;

overrun:
  FUNC_25("returning 0, (ERROR_INSUFFICIENT_BUFFER)\n");
  FUNC_23(VAR_5);
  return 0;

invalid_parameter:
  FUNC_23(VAR_7);
  return 0;

invalid_flags:
  FUNC_23(VAR_6);
  return 0;
}
