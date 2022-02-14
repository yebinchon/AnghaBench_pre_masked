
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgoff_t ;
typedef int mode_t ;
typedef int filename ;
typedef int current_path ;
typedef int PGresult ;
typedef int PGconn ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char**,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 char* FUNC_5 (int *,int,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ) ;
 char* VAR_3 ;
 scalar_t__ FUNC_8 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int,int,int *) ;
 char* FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,int ) ;
 int VAR_5 ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (int,char*,int) ;
 int FUNC_18 (char*,int) ;
 int VAR_6 ;
 int FUNC_19 (char*,int,char*,char*,char*) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_23(PGconn *VAR_9, PGresult *VAR_10, int VAR_11)
{
 char VAR_12[VAR_1];
 char VAR_13[VAR_1];
 const char *VAR_14;
 pgoff_t VAR_15 = 0;
 int VAR_16 = 0;
 bool VAR_17;
 char *VAR_18 = ((void*)0);
 FILE *VAR_19 = ((void*)0);

 VAR_17 = FUNC_4(VAR_10, VAR_11, 0);
 if (VAR_17)
  FUNC_20(VAR_12, VAR_3, sizeof(VAR_12));
 else
  FUNC_20(VAR_12,
    FUNC_13(FUNC_5(VAR_10, VAR_11, 1)),
    sizeof(VAR_12));




 VAR_10 = FUNC_3(VAR_9);
 if (FUNC_6(VAR_10) != VAR_2)
 {
  FUNC_15("could not get COPY data stream: %s",
      FUNC_0(VAR_9));
  FUNC_9(1);
 }

 while (1)
 {
  int VAR_20;

  if (VAR_18 != ((void*)0))
  {
   FUNC_1(VAR_18);
   VAR_18 = ((void*)0);
  }

  VAR_20 = FUNC_2(VAR_9, &VAR_18, 0);

  if (VAR_20 == -1)
  {



   if (VAR_19)
    FUNC_10(VAR_19);

   break;
  }
  else if (VAR_20 == -2)
  {
   FUNC_15("could not read COPY data: %s",
       FUNC_0(VAR_9));
   FUNC_9(1);
  }

  if (VAR_19 == ((void*)0))
  {

   int VAR_21;





   if (VAR_20 != 512)
   {
    FUNC_15("invalid tar block header size: %d", VAR_20);
    FUNC_9(1);
   }
   VAR_7 += 512;

   VAR_15 = FUNC_18(&VAR_18[124], 12);



   VAR_21 = FUNC_18(&VAR_18[100], 8);





   VAR_16 =
    ((VAR_15 + 511) & ~511) - VAR_15;




   FUNC_19(VAR_13, sizeof(VAR_13), "%s/%s", VAR_12,
      VAR_18);
   if (VAR_13[FUNC_21(VAR_13) - 1] == '/')
   {



    if (VAR_18[156] == '5')
    {



     VAR_13[FUNC_21(VAR_13) - 1] = '\0';
     if (FUNC_14(VAR_13, VAR_5) != 0)
     {
      if (!((FUNC_16(VAR_13, "/pg_wal") ||
          FUNC_16(VAR_13, "/pg_xlog") ||
          FUNC_16(VAR_13, "/archive_status")) &&
         VAR_4 == VAR_0))
      {
       FUNC_15("could not create directory \"%s\": %m",
           VAR_13);
       FUNC_9(1);
      }
     }

     if (FUNC_8(VAR_13, (mode_t) VAR_21))
      FUNC_15("could not set permissions on directory \"%s\": %m",
          VAR_13);

    }
    else if (VAR_18[156] == '2')
    {
     VAR_13[FUNC_21(VAR_13) - 1] = '\0';

     VAR_14 = FUNC_13(&VAR_18[157]);
     if (FUNC_22(VAR_14, VAR_13) != 0)
     {
      FUNC_15("could not create symbolic link from \"%s\" to \"%s\": %m",
          VAR_13, VAR_14);
      FUNC_9(1);
     }
    }
    else
    {
     FUNC_15("unrecognized link indicator \"%c\"",
         VAR_18[156]);
     FUNC_9(1);
    }
    continue;
   }




   VAR_19 = FUNC_11(VAR_13, "wb");
   if (!VAR_19)
   {
    FUNC_15("could not create file \"%s\": %m", VAR_13);
    FUNC_9(1);
   }


   if (FUNC_8(VAR_13, (mode_t) VAR_21))
    FUNC_15("could not set permissions on file \"%s\": %m",
        VAR_13);


   if (VAR_15 == 0)
   {



    FUNC_10(VAR_19);
    VAR_19 = ((void*)0);
    continue;
   }
  }
  else
  {



   if (VAR_15 == 0 && VAR_20 == VAR_16)
   {




    FUNC_10(VAR_19);
    VAR_19 = ((void*)0);
    VAR_7 += VAR_20;
    continue;
   }

   if (FUNC_12(VAR_18, VAR_20, 1, VAR_19) != 1)
   {
    FUNC_15("could not write to file \"%s\": %m", VAR_13);
    FUNC_9(1);
   }
   VAR_7 += VAR_20;
   FUNC_17(VAR_11, VAR_13, 0);

   VAR_15 -= VAR_20;
   if (VAR_15 == 0 && VAR_16 == 0)
   {





    FUNC_10(VAR_19);
    VAR_19 = ((void*)0);
    continue;
   }
  }
 }
 FUNC_17(VAR_11, VAR_13, 1);

 if (VAR_19 != ((void*)0))
 {
  FUNC_15("COPY stream ended before last file was finished");
  FUNC_9(1);
 }

 if (VAR_18 != ((void*)0))
  FUNC_1(VAR_18);

 if (VAR_17 && VAR_8)
  FUNC_7(VAR_9, VAR_3, VAR_6);





}
