
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int nrFields; int* fieldspec; int* buflen; scalar_t__ textbuf; } ;
struct TYPE_5__ {int cx; } ;
typedef TYPE_1__ SIZE ;
typedef int SHORT ;
typedef char const* LPCWSTR ;
typedef int LONG ;
typedef int LCTYPE ;
typedef int INT ;
typedef int HDC ;
typedef TYPE_2__ DATETIME_INFO ;


 int VAR_0 ;



 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ,char const*,int ,TYPE_1__*) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7 (const DATETIME_INFO *VAR_6, HDC VAR_7, int VAR_8, SHORT *VAR_9)
{


    static const WCHAR VAR_10[] = { '2', 0 };
    static const WCHAR VAR_11[] = { '2', '2', 0 };
    static const WCHAR VAR_12[] = { '2', '2', '2', '2', 0 };
    static const WCHAR VAR_13[] = { 'A', 0 };
    static const WCHAR VAR_14[] = { 'A', 'M', 0 };
    int VAR_15;
    WCHAR VAR_16[80];
    LPCWSTR VAR_17;
    SIZE VAR_18;

    FUNC_2 ("%d,%d\n", VAR_6->nrFields, VAR_8);
    if (VAR_8>VAR_6->nrFields || VAR_8 < 0) {
 FUNC_3 ("buffer overrun, have %d want %d\n", VAR_6->nrFields, VAR_8);
 return;
    }

    if (!VAR_6->fieldspec) return;

    VAR_15 = VAR_6->fieldspec[VAR_8];
    if (VAR_15 & VAR_0) {
 int VAR_19 = VAR_6->buflen[VAR_8];

        if (VAR_19 > 79)
            VAR_19 = 79;
 FUNC_5 (VAR_16, VAR_6->textbuf + (VAR_15 &~ VAR_0), VAR_19 * sizeof(WCHAR));
 VAR_16[VAR_19] = 0;
 VAR_17 = VAR_16;
    }
    else {
        switch (VAR_15) {
     case 143:
     case 145:
     case 144:
     case 140:
     case 142:
     case 141:
     case 139:

     case 133:
     case 135:
     case 134:
     case 130:
     case 132:
     case 131:
     case 129:
         VAR_17 = VAR_11;
         break;
            case 146:
     case 147:
         VAR_17 = VAR_12;
         break;
     case 136:
     case 148:
     case 137:
     case 149:
     {
  static const WCHAR VAR_20[] = {'W','e','d','n','e','s','d','a','y',0};
  static const WCHAR VAR_21[] = {'W','e','d',0};
  static const WCHAR VAR_22[] = {'S','e','p','t','e','m','b','e','r',0};
  static const WCHAR VAR_23[] = {'D','e','c',0};

  const WCHAR *VAR_24;
  LCTYPE VAR_25;
  INT VAR_26, VAR_27;
  LONG VAR_28;


  switch (VAR_15) {
  case 137:
      VAR_24 = VAR_21;
      VAR_25 = VAR_1;
      VAR_27 = 7;
      break;
  case 149:
      VAR_24 = VAR_20;
      VAR_25 = VAR_3;
      VAR_27 = 7;
      break;
  case 136:
      VAR_24 = VAR_23;
      VAR_25 = VAR_2;
      VAR_27 = 12;
      break;
  default:
      VAR_24 = VAR_22;
      VAR_25 = VAR_4;
      VAR_27 = 12;
      break;
  }

  VAR_28 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++)
  {
      if(FUNC_0(VAR_5, VAR_25 + VAR_26,
   VAR_16, FUNC_4(VAR_16)))
      {
   FUNC_1(VAR_7, VAR_16, FUNC_4(VAR_16), &VAR_18);
   if (VAR_18.cx > VAR_28) VAR_28 = VAR_18.cx;
      }
      else
      {
          FUNC_1(VAR_7, VAR_24, FUNC_4(VAR_24), &VAR_18);
   VAR_28 = VAR_18.cx;
          break;
      }
  }
  *VAR_9 = VAR_28;
  return;
     }
     case 138:
         VAR_17 = VAR_13;
         break;
     case 128:
         VAR_17 = VAR_14;
         break;
     default:
         VAR_17 = VAR_10;
         break;
        }
    }
    FUNC_1 (VAR_7, VAR_17, FUNC_6(VAR_17), &VAR_18);
    *VAR_9 = VAR_18.cx;
}
