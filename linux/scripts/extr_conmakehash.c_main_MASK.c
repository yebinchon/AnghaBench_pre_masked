
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 int * VAR_4 ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char**,int ) ;
 int* VAR_5 ;
 int** VAR_6 ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_7, char *VAR_8[])
{
  FILE *VAR_9;
  char *VAR_10;
  char VAR_11[65536];
  int VAR_12;
  int VAR_13, VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19;
  char *VAR_20, *VAR_21;

  if ( VAR_7 < 2 || VAR_7 > 5 )
    FUNC_13(VAR_8[0]);

  if ( !FUNC_10(VAR_8[1],"-") )
    {
      VAR_9 = VAR_4;
      VAR_10 = "stdin";
    }
  else
    {
      VAR_9 = FUNC_4(VAR_10 = VAR_8[1], "r");
      if ( !VAR_9 )
 {
   FUNC_7(VAR_10);
   FUNC_1(VAR_1);
 }
    }


  VAR_12 = 256;



  for ( VAR_13 = 0 ; VAR_13 < VAR_12 ; VAR_13++ )
    VAR_5[VAR_13] = 0;



  while ( FUNC_3(VAR_11, sizeof(VAR_11), VAR_9) != ((void*)0) )
    {
      if ( (VAR_20 = FUNC_9(VAR_11, '\n')) != ((void*)0) )
 *VAR_20 = '\0';
      else
 FUNC_5(VAR_3, "%s: Warning: line too long\n", VAR_10);

      VAR_20 = VAR_11;
      while (*VAR_20 == ' ' || *VAR_20 == '\t')
 VAR_20++;
      if (!*VAR_20 || *VAR_20 == '#')
 continue;

      VAR_16 = FUNC_12(VAR_20, &VAR_21, 0);
      if (VAR_21 == VAR_20)
 {
   FUNC_5(VAR_3, "Bad input line: %s\n", VAR_11);
   FUNC_1(VAR_0);
        }
      VAR_20 = VAR_21;

      while (*VAR_20 == ' ' || *VAR_20 == '\t')
 VAR_20++;
      if (*VAR_20 == '-')
 {
   VAR_20++;
   VAR_17 = FUNC_12(VAR_20, &VAR_21, 0);
   if (VAR_21 == VAR_20)
     {
       FUNC_5(VAR_3, "Bad input line: %s\n", VAR_11);
       FUNC_1(VAR_0);
     }
   VAR_20 = VAR_21;
        }
      else
 VAR_17 = 0;

      if ( VAR_16 < 0 || VAR_16 >= VAR_12 )
 {
     FUNC_5(VAR_3,
      "%s: Glyph number (0x%x) larger than font length\n",
      VAR_10, VAR_16);
     FUNC_1(VAR_0);
 }
      if ( VAR_17 && (VAR_17 < VAR_16 || VAR_17 >= VAR_12) )
 {
     FUNC_5(VAR_3,
      "%s: Bad end of range (0x%x)\n",
      VAR_10, VAR_17);
     FUNC_1(VAR_0);
 }

      if (VAR_17)
 {


   while (*VAR_20 == ' ' || *VAR_20 == '\t')
     VAR_20++;
   if (!FUNC_11(VAR_20, "idem", 4))
     {
       for (VAR_13=VAR_16; VAR_13<=VAR_17; VAR_13++)
  FUNC_0(VAR_13,VAR_13);
       VAR_20 += 4;
     }
   else
     {
       VAR_18 = FUNC_6(&VAR_20);
       while (*VAR_20 == ' ' || *VAR_20 == '\t')
  VAR_20++;
       if (*VAR_20 != '-')
  {
    FUNC_5(VAR_3,
"%s: Corresponding to a range of font positions, there should be a Unicode range\n",
     VAR_10);
    FUNC_1(VAR_0);
         }
       VAR_20++;
       VAR_19 = FUNC_6(&VAR_20);
       if (VAR_18 < 0 || VAR_19 < 0)
  {
    FUNC_5(VAR_3,
"%s: Bad Unicode range corresponding to font position range 0x%x-0x%x\n",
     VAR_10, VAR_16, VAR_17);
    FUNC_1(VAR_0);
         }
       if (VAR_19 - VAR_18 != VAR_17 - VAR_16)
  {
    FUNC_5(VAR_3,
"%s: Unicode range U+%x-U+%x not of the same length as font position range 0x%x-0x%x\n",
     VAR_10, VAR_18, VAR_19, VAR_16, VAR_17);
    FUNC_1(VAR_0);
         }
       for(VAR_13=VAR_16; VAR_13<=VAR_17; VAR_13++)
  FUNC_0(VAR_13,VAR_18-VAR_16+VAR_13);
     }
        }
      else
 {


     while ( (VAR_18 = FUNC_6(&VAR_20)) >= 0 )
       FUNC_0(VAR_16, VAR_18);
 }
      while (*VAR_20 == ' ' || *VAR_20 == '\t')
 VAR_20++;
      if (*VAR_20 && *VAR_20 != '#')
 FUNC_5(VAR_3, "%s: trailing junk (%s) ignored\n", VAR_10, VAR_20);
    }



  FUNC_2(VAR_9);



  VAR_14 = 0;
  for ( VAR_13 = 0 ; VAR_13 < VAR_12 ; VAR_13++ )
    VAR_14 += VAR_5[VAR_13];

  FUNC_8("/*\n * Do not edit this file; it was automatically generated by\n *\n * conmakehash %s > [this file]\n *\n */\n\n#include <linux/types.h>\n\nu8 dfont_unicount[%d] = \n{\n\t", VAR_8[1], VAR_12);
  for ( VAR_13 = 0 ; VAR_13 < VAR_12 ; VAR_13++ )
    {
      FUNC_8("%3d", VAR_5[VAR_13]);
      if ( VAR_13 == VAR_12-1 )
        FUNC_8("\n};\n");
      else if ( VAR_13 % 8 == 7 )
        FUNC_8(",\n\t");
      else
        FUNC_8(", ");
    }

  FUNC_8("\nu16 dfont_unitable[%d] = \n{\n\t", VAR_14);

  VAR_16 = 0;
  VAR_15 = 0;
  for ( VAR_13 = 0 ; VAR_13 < VAR_14 ; VAR_13++ )
    {
      while ( VAR_15 >= VAR_5[VAR_16] )
 {
   VAR_16++;
   VAR_15 = 0;
 }
      FUNC_8("0x%04x", VAR_6[VAR_16][VAR_15++]);
      if ( VAR_13 == VAR_14-1 )
         FUNC_8("\n};\n");
       else if ( VAR_13 % 8 == 7 )
         FUNC_8(",\n\t");
       else
         FUNC_8(", ");
    }

  FUNC_1(VAR_2);
}
