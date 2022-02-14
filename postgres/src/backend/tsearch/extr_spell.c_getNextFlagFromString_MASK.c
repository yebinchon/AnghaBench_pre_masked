
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int flagMode; } ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(IspellDict *VAR_5, char **VAR_6, char *VAR_7)
{
 int32 VAR_8;
 char *VAR_9,
      *VAR_10 = *VAR_6;
 int VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_11 = (VAR_5->flagMode == 129) ? 2 : 1;

 while (**VAR_6)
 {
  switch (VAR_5->flagMode)
  {
   case 129:
   case 130:
    FUNC_0(VAR_7, *VAR_6);
    VAR_7 += FUNC_5(*VAR_6);


    *VAR_6 += FUNC_5(*VAR_6);


    VAR_11--;
    VAR_12 = (VAR_11 == 0);
    break;
   case 128:
    VAR_8 = FUNC_7(*VAR_6, &VAR_9, 10);
    if (*VAR_6 == VAR_9 || VAR_4 == VAR_0)
     FUNC_2(VAR_2,
       (FUNC_3(VAR_1),
        FUNC_4("invalid affix flag \"%s\"", *VAR_6)));
    if (VAR_8 < 0 || VAR_8 > VAR_3)
     FUNC_2(VAR_2,
       (FUNC_3(VAR_1),
        FUNC_4("affix flag \"%s\" is out of range",
         *VAR_6)));
    VAR_7 += FUNC_6(VAR_7, "%0d", VAR_8);


    *VAR_6 = VAR_9;
    while (**VAR_6)
    {
     if (FUNC_8(*VAR_6))
     {
      if (!VAR_13)
       FUNC_2(VAR_2,
         (FUNC_3(VAR_1),
          FUNC_4("invalid affix flag \"%s\"",
           *VAR_6)));
      break;
     }
     else if (FUNC_9(*VAR_6, ','))
     {
      if (VAR_13)
       FUNC_2(VAR_2,
         (FUNC_3(VAR_1),
          FUNC_4("invalid affix flag \"%s\"",
           *VAR_6)));
      VAR_13 = 1;
     }
     else if (!FUNC_10(*VAR_6))
     {
      FUNC_2(VAR_2,
        (FUNC_3(VAR_1),
         FUNC_4("invalid character in affix flag \"%s\"",
          *VAR_6)));
     }

     *VAR_6 += FUNC_5(*VAR_6);
    }
    VAR_12 = 1;
    break;
   default:
    FUNC_1(VAR_2, "unrecognized type of Conf->flagMode: %d",
      VAR_5->flagMode);
  }

  if (VAR_12)
   break;
 }

 if (VAR_5->flagMode == 129 && VAR_11 > 0)
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("invalid affix flag \"%s\" with \"long\" flag value",
      VAR_10)));

 *VAR_7 = '\0';
}
