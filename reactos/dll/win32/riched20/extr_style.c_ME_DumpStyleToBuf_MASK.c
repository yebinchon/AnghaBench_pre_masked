
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int dwMask; int* szFaceName; int yHeight; int yOffset; int dwEffects; scalar_t__ crTextColor; scalar_t__ bCharSet; } ;
typedef TYPE_1__ CHARFORMAT2W ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char**,char*,TYPE_1__*,int ) ;
 int FUNC_1 (char*,char*,...) ;

void FUNC_2(CHARFORMAT2W *VAR_12, char VAR_13[2048])
{


  char *VAR_14;
  VAR_14 = VAR_13;
  VAR_14 += FUNC_1(VAR_14, "Font face:            ");
  if (VAR_12->dwMask & VAR_4) {
    WCHAR *VAR_15 = VAR_12->szFaceName;
    while(*VAR_15) {
      *VAR_14++ = (*VAR_15 > 255) ? '?' : *VAR_15;
      VAR_15++;
    }
  } else
    VAR_14 += FUNC_1(VAR_14, "N/A");

  if (VAR_12->dwMask & VAR_9)
    VAR_14 += FUNC_1(VAR_14, "\nFont size:            %d\n", VAR_12->yHeight);
  else
    VAR_14 += FUNC_1(VAR_14, "\nFont size:            N/A\n");

  if (VAR_12->dwMask & VAR_7)
    VAR_14 += FUNC_1(VAR_14, "Char offset:          %d\n", VAR_12->yOffset);
  else
    VAR_14 += FUNC_1(VAR_14, "Char offset:          N/A\n");

  if (VAR_12->dwMask & VAR_2)
    VAR_14 += FUNC_1(VAR_14, "Font charset:         %d\n", (int)VAR_12->bCharSet);
  else
    VAR_14 += FUNC_1(VAR_14, "Font charset:         N/A\n");


  FUNC_0(&VAR_14, "Font bold:", VAR_12, VAR_1);
  FUNC_0(&VAR_14, "Font italic:", VAR_12, VAR_6);
  FUNC_0(&VAR_14, "Font underline:", VAR_12, VAR_11);
  FUNC_0(&VAR_14, "Font strikeout:", VAR_12, VAR_10);
  FUNC_0(&VAR_14, "Hidden text:", VAR_12, VAR_5);
  VAR_14 += FUNC_1(VAR_14, "Text color:           ");
  if (VAR_12->dwMask & VAR_3)
  {
    if (VAR_12->dwEffects & VAR_0)
      VAR_14 += FUNC_1(VAR_14, "auto\n");
    else
      VAR_14 += FUNC_1(VAR_14, "%06x\n", (int)VAR_12->crTextColor);
  }
  else
    VAR_14 += FUNC_1(VAR_14, "N/A\n");
  FUNC_0(&VAR_14, "Text protected:", VAR_12, VAR_8);
}
