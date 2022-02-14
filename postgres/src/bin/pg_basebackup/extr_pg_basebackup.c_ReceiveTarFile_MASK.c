
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zerobuf ;
typedef int pgoff_t ;
typedef int header ;
typedef int * gzFile ;
typedef int filename ;
struct TYPE_2__ {int len; char* data; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char**,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 char* FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int * FUNC_18 (int ,char*) ;
 int * FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (int *,scalar_t__,int ) ;
 int FUNC_21 (char*,char*,int) ;
 int VAR_8 ;
 int FUNC_22 (char*,char*,...) ;
 int FUNC_23 (int,char*,int) ;
 int FUNC_24 (char*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_25 (char*,int,char*,char*,...) ;
 int * VAR_10 ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char*,char*,int *,int,int ,int,int,int ) ;
 int FUNC_29 (int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_30(PGconn *VAR_13, PGresult *VAR_14, int VAR_15)
{
 char VAR_16[VAR_0];
 char *VAR_17 = ((void*)0);
 FILE *VAR_18 = ((void*)0);
 char VAR_19[512];
 bool VAR_20 = FUNC_5(VAR_14, VAR_15, 0);
 bool VAR_21 = 1;
 bool VAR_22 = 0;
 bool VAR_23 = 1;
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 int VAR_26 = 0;
 size_t VAR_27 = 0;
 pgoff_t VAR_28 = 0;






 if (FUNC_8(VAR_13) < VAR_1)
  VAR_23 = 0;

 if (VAR_20)
 {



  if (FUNC_26(VAR_6, "-") == 0)
  {
    VAR_18 = VAR_10;
   FUNC_27(VAR_16, "-");
  }
  else
  {
   {
    FUNC_25(VAR_16, sizeof(VAR_16), "%s/base.tar", VAR_6);
    VAR_18 = FUNC_15(VAR_16, "wb");
   }
  }
 }
 else
 {
  {
   FUNC_25(VAR_16, sizeof(VAR_16), "%s/%s.tar", VAR_6,
      FUNC_6(VAR_14, VAR_15, 0));
   VAR_18 = FUNC_15(VAR_16, "wb");
  }
 }
 {

  if (!VAR_18)
  {
   FUNC_22("could not create file \"%s\": %m", VAR_16);
   FUNC_12(1);
  }
 }




 VAR_14 = FUNC_4(VAR_13);
 if (FUNC_7(VAR_14) != VAR_2)
 {
  FUNC_22("could not get COPY data stream: %s",
      FUNC_1(VAR_13));
  FUNC_12(1);
 }

 while (1)
 {
  int VAR_29;

  if (VAR_17 != ((void*)0))
  {
   FUNC_2(VAR_17);
   VAR_17 = ((void*)0);
  }

  VAR_29 = FUNC_3(VAR_13, &VAR_17, 0);
  if (VAR_29 == -1)
  {
   char VAR_30[1024];

   FUNC_0(VAR_30, 0, sizeof(VAR_30));

   if (VAR_20 && VAR_12)
   {
    char VAR_31[512];
    if (!VAR_25 || !VAR_23)
    {
     int VAR_32;

     FUNC_28(VAR_31,
         VAR_23 ? "postgresql.auto.conf" : "recovery.conf",
         ((void*)0),
         VAR_9->len,
         VAR_8, 04000, 02000,
         FUNC_29(((void*)0)));

     VAR_32 = ((VAR_9->len + 511) & ~511) - VAR_9->len;

     FUNC_9(VAR_31, sizeof(VAR_31));
     FUNC_9(VAR_9->data,
           VAR_9->len);
     if (VAR_32)
      FUNC_9(VAR_30, VAR_32);
    }





    if (VAR_23)
    {
     FUNC_28(VAR_31, "standby.signal", ((void*)0),
         0,
         VAR_8, 04000, 02000,
         FUNC_29(((void*)0)));

     FUNC_9(VAR_31, sizeof(VAR_31));
     FUNC_9(VAR_30, 511);
    }
   }


   FUNC_9(VAR_30, sizeof(VAR_30));
   {
    if (FUNC_26(VAR_6, "-") != 0)
    {
     if (FUNC_13(VAR_18) != 0)
     {
      FUNC_22("could not close file \"%s\": %m",
          VAR_16);
      FUNC_12(1);
     }
    }
   }

   break;
  }
  else if (VAR_29 == -2)
  {
   FUNC_22("could not read COPY data: %s",
       FUNC_1(VAR_13));
   FUNC_12(1);
  }

  if (!VAR_12 || !VAR_20)
  {





   FUNC_9(VAR_17, VAR_29);
  }
  else
  {
   int VAR_33 = VAR_29;
   int VAR_34 = 0;

   while (VAR_33 > 0)
   {
    if (VAR_21)
    {




     if (VAR_27 < 512)
     {





      int VAR_35;
      int VAR_36;

      VAR_35 = 512 - VAR_27;
      VAR_36 = (VAR_33 > VAR_35 ? VAR_35 : VAR_33);

      FUNC_21(&VAR_19[VAR_27], VAR_17 + VAR_34, VAR_36);

      VAR_33 -= VAR_36;
      VAR_34 += VAR_36;
      VAR_27 += VAR_36;
     }
     else
     {
      if (VAR_23)
      {
       VAR_22 = (FUNC_26(&VAR_19[0], "standby.signal") == 0);
       VAR_24 = (FUNC_26(&VAR_19[0], "postgresql.auto.conf") == 0);
      }
      else
       VAR_22 = (FUNC_26(&VAR_19[0], "recovery.conf") == 0);

      VAR_28 = FUNC_24(&VAR_19[124], 12);
      VAR_26 = ((VAR_28 + 511) & ~511) - VAR_28;

      if (VAR_23 &&
       VAR_24 &&
       VAR_12)
      {

       char VAR_37[512];

       FUNC_28(VAR_37, "postgresql.auto.conf", ((void*)0),
           VAR_28 + VAR_9->len,
           VAR_8, 04000, 02000,
           FUNC_29(((void*)0)));

       FUNC_9(VAR_37, sizeof(VAR_37));
      }
      else
      {

       VAR_28 += VAR_26;

       if (!VAR_22)
       {




        FUNC_9(VAR_19, 512);
       }
      }


      VAR_21 = 0;
     }
    }
    else
    {



     if (VAR_28 > 0)
     {



      int VAR_38;

      VAR_38 = (VAR_28 > VAR_33 ? VAR_33 : VAR_28);

      if (!VAR_22)
       FUNC_9(VAR_17 + VAR_34, VAR_38);

      VAR_33 -= VAR_38;
      VAR_34 += VAR_38;
      VAR_28 -= VAR_38;
     }
     else if (VAR_23 &&
        VAR_24 &&
        VAR_12)
     {

      int VAR_39;
      int VAR_40;

      VAR_40 = (512 - VAR_26) + VAR_9->len;
      VAR_39 = ((VAR_40 + 511) & ~511) - VAR_40;

      FUNC_9(VAR_9->data, VAR_9->len);

      if (VAR_39)
      {
       char VAR_41[512];

       FUNC_0(VAR_41, 0, sizeof(VAR_41));
       FUNC_9(VAR_41, VAR_39);
      }


      VAR_24 = 0;
      VAR_22 = 1;
      VAR_28 += VAR_26;

      VAR_25 = 1;
     }
     else
     {




      VAR_21 = 1;
      VAR_22 = 0;
      VAR_24 = 0;
      VAR_27 = 0;
      VAR_28 = 0;
     }
    }
   }
  }
  VAR_11 += VAR_29;
  FUNC_23(VAR_15, VAR_16, 0);
 }
 FUNC_23(VAR_15, VAR_16, 1);

 if (VAR_17 != ((void*)0))
  FUNC_2(VAR_17);





}
