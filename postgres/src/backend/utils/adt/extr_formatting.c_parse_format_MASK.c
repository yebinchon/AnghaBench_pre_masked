
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {scalar_t__ len; } ;
struct TYPE_10__ {int suffix; char* character; void* type; TYPE_7__* key; } ;
struct TYPE_9__ {int id; scalar_t__ len; } ;
typedef int NUMDesc ;
typedef int KeyWord ;
typedef TYPE_1__ KeySuffix ;
typedef TYPE_2__ FormatNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 TYPE_7__* FUNC_5 (char const*,int const*,int const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int) ;
 int * FUNC_11 (char*,char const) ;
 TYPE_1__* FUNC_12 (char const*,TYPE_1__ const*,int ) ;

__attribute__((used)) static void
FUNC_13(FormatNode *VAR_13, const char *VAR_14, const KeyWord *VAR_15,
    const KeySuffix *VAR_16, const int *VAR_17, uint32 VAR_18, NUMDesc *VAR_19)
{
 FormatNode *VAR_20;





 VAR_20 = VAR_13;

 while (*VAR_14)
 {
  int VAR_21 = 0;
  const KeySuffix *VAR_22;




  if ((VAR_18 & VAR_0) &&
   (VAR_22 = FUNC_12(VAR_14, VAR_16, VAR_12)) != ((void*)0))
  {
   VAR_21 |= VAR_22->id;
   if (VAR_22->len)
    VAR_14 += VAR_22->len;
  }




  if (*VAR_14 && (VAR_20->key = FUNC_5(VAR_14, VAR_15, VAR_17)) != ((void*)0))
  {
   VAR_20->type = VAR_4;
   VAR_20->suffix = VAR_21;
   if (VAR_20->key->len)
    VAR_14 += VAR_20->key->len;




   if (VAR_18 & VAR_9)
    FUNC_0(VAR_19, VAR_20);




   if ((VAR_18 & VAR_0) && *VAR_14 &&
    (VAR_22 = FUNC_12(VAR_14, VAR_16, VAR_11)) != ((void*)0))
   {
    VAR_20->suffix |= VAR_22->id;
    if (VAR_22->len)
     VAR_14 += VAR_22->len;
   }

   VAR_20++;
  }
  else if (*VAR_14)
  {
   int VAR_23;

   if (VAR_18 & VAR_10)
   {



    if (FUNC_11("-./,':; ", *VAR_14) == ((void*)0))
     FUNC_2(VAR_3,
       (FUNC_3(VAR_2),
        FUNC_4("invalid datetime format separator: \"%s\"",
         FUNC_10(VAR_14, FUNC_9(VAR_14)))));

    if (*VAR_14 == ' ')
     VAR_20->type = VAR_8;
    else
     VAR_20->type = VAR_7;

    VAR_20->character[0] = *VAR_14;
    VAR_20->character[1] = '\0';
    VAR_20->key = ((void*)0);
    VAR_20->suffix = 0;
    VAR_20++;
    VAR_14++;
   }
   else if (*VAR_14 == '"')
   {



    VAR_14++;
    while (*VAR_14)
    {
     if (*VAR_14 == '"')
     {
      VAR_14++;
      break;
     }

     if (*VAR_14 == '\\' && *(VAR_14 + 1))
      VAR_14++;
     VAR_23 = FUNC_9(VAR_14);
     VAR_20->type = VAR_5;
     FUNC_8(VAR_20->character, VAR_14, VAR_23);
     VAR_20->character[VAR_23] = '\0';
     VAR_20->key = ((void*)0);
     VAR_20->suffix = 0;
     VAR_20++;
     VAR_14 += VAR_23;
    }
   }
   else
   {




    if (*VAR_14 == '\\' && *(VAR_14 + 1) == '"')
     VAR_14++;
    VAR_23 = FUNC_9(VAR_14);

    if ((VAR_18 & VAR_0) && FUNC_6(VAR_14))
     VAR_20->type = VAR_7;
    else if (FUNC_7((unsigned char) *VAR_14))
     VAR_20->type = VAR_8;
    else
     VAR_20->type = VAR_5;

    FUNC_8(VAR_20->character, VAR_14, VAR_23);
    VAR_20->character[VAR_23] = '\0';
    VAR_20->key = ((void*)0);
    VAR_20->suffix = 0;
    VAR_20++;
    VAR_14 += VAR_23;
   }
  }
 }

 VAR_20->type = VAR_6;
 VAR_20->suffix = 0;
}
