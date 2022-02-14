
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hb_font_t ;
typedef int hb_bool_t ;
struct TYPE_4__ {int nfont; int * fonts; } ;
typedef int FcPattern ;
typedef int FcObjectSet ;
typedef TYPE_1__ FcFontSet ;
typedef char FcChar8 ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int ,int ,int ,char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int ,char const*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,int,int,int) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int,char**,char*) ;
 int FUNC_18 (int,char**,char*,int ,int *) ;
 int FUNC_19 (int *,char const*) ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_22 (char*,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (char*,int) ;

int
FUNC_25 (int VAR_11, char **VAR_12)
{
    int VAR_13 = 0;
    int VAR_14 = 0;
    const FcChar8 *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    int VAR_17;
    FcObjectSet *VAR_18 = 0;
    FcFontSet *VAR_19;
    FcPattern *VAR_20;
    const char *VAR_21;
    VAR_17 = 1;


    if (!VAR_12[VAR_17])
 FUNC_24 (VAR_12[0], 1);

    VAR_21 = VAR_12[VAR_17];
    VAR_17++;

    if (VAR_12[VAR_17])
    {
 VAR_20 = FUNC_3 ((FcChar8 *) VAR_12[VAR_17]);
 if (!VAR_20)
 {
     FUNC_16 ("Unable to parse the pattern\n", VAR_10);
     return 1;
 }
 while (VAR_12[++VAR_17])
 {
     if (!VAR_18)
  VAR_18 = FUNC_6 ();
     FUNC_4 (VAR_18, VAR_12[VAR_17]);
 }
    }
    else
 VAR_20 = FUNC_8 ();
    if (VAR_14 && !VAR_18)
 VAR_18 = FUNC_6 ();
    if (!VAR_13 && !VAR_15 && !VAR_18)
 VAR_18 = FUNC_5 (VAR_1, VAR_6, VAR_2, (char *) 0);
    FUNC_4 (VAR_18, VAR_0);
    if (!VAR_15)
        VAR_15 = (const FcChar8 *) "%{=fclist}\n";
    VAR_19 = FUNC_1 (0, VAR_20, VAR_18);
    if (VAR_18)
 FUNC_7 (VAR_18);
    if (VAR_20)
 FUNC_10 (VAR_20);

    if (!VAR_14 && VAR_19)
    {
 int VAR_22;

 for (VAR_22 = 0; VAR_22 < VAR_19->nfont; VAR_22++)
 {
     hb_font_t *VAR_23 = FUNC_20 (VAR_19->fonts[VAR_22]);
     hb_bool_t VAR_24 = FUNC_19 (VAR_23, VAR_21);
     FUNC_21 (VAR_23);

     if (!VAR_24)
  continue;

     FUNC_9 (VAR_19->fonts[VAR_22], VAR_0);

     if (VAR_13)
     {
  FUNC_12 (VAR_19->fonts[VAR_22]);
     }
     else
     {
         FcChar8 *VAR_25;

  VAR_25 = FUNC_11 (VAR_19->fonts[VAR_22], VAR_15);
  if (VAR_25)
  {
      FUNC_22 ("%s", VAR_25);
      FUNC_13 (VAR_25);
  }
     }
 }
    }

    if (VAR_19) {
 VAR_16 = VAR_19->nfont;
 FUNC_2 (VAR_19);
    }

    FUNC_0 ();

    return VAR_14 ? (VAR_16 == 0 ? 1 : 0) : 0;
}
