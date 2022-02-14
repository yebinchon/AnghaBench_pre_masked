
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_6__ {int * mainwin; } ;
struct TYPE_5__ {scalar_t__ vc_type; } ;
typedef int GtkWidget ;


 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__*,char*) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__* FUNC_13 (TYPE_1__*,scalar_t__*,int *) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__* FUNC_16 (scalar_t__*,int) ;
 scalar_t__* FUNC_17 (scalar_t__*,scalar_t__*) ;

char_u *
FUNC_18(char_u *VAR_9)
{
    GtkWidget *VAR_10;
    int VAR_11;
    char_u *VAR_12 = ((void*)0);
    char_u *VAR_13;

    VAR_10 = FUNC_8(((void*)0));

    FUNC_12(FUNC_2(VAR_10), FUNC_2(VAR_6.mainwin));
    FUNC_11(FUNC_2(VAR_10), VAR_5);

    if (VAR_9 != ((void*)0) && VAR_9[0] != VAR_4)
    {
 if (VAR_8.vc_type != VAR_0)
     VAR_13 = FUNC_13(&VAR_8, VAR_9, ((void*)0));
 else
     VAR_13 = VAR_9;



 if (!FUNC_15(VAR_13[FUNC_4(VAR_13) - 1]))
 {
     char_u *VAR_14 = FUNC_16(VAR_13, FUNC_4(VAR_13) + 3);

     if (VAR_14 != ((void*)0))
     {
  FUNC_3(VAR_14 + FUNC_4(VAR_14), " 10");
  if (VAR_13 != VAR_9)
      FUNC_14(VAR_13);
  VAR_13 = VAR_14;
     }
 }

 FUNC_9(
  FUNC_1(VAR_10), (const char *)VAR_13);

 if (VAR_13 != VAR_9)
     FUNC_14(VAR_13);
    }
    else
 FUNC_9(
  FUNC_1(VAR_10), VAR_1);

    VAR_11 = FUNC_6(FUNC_0(VAR_10));

    if (VAR_11 == VAR_3)
    {
 char *VAR_15;

 VAR_15 = FUNC_7(
       FUNC_1(VAR_10));
 if (VAR_15 != ((void*)0))
 {
     char_u *VAR_16;



     VAR_16 = FUNC_17((char_u *)VAR_15, (char_u *)",");
     FUNC_5(VAR_15);
     if (VAR_16 != ((void*)0) && VAR_7.vc_type != VAR_0)
     {
  VAR_12 = FUNC_13(&VAR_7, VAR_16, ((void*)0));
  FUNC_14(VAR_16);
     }
     else
  VAR_12 = VAR_16;
 }
    }

    if (VAR_11 != VAR_2)
 FUNC_10(VAR_10);

    return VAR_12;
}
