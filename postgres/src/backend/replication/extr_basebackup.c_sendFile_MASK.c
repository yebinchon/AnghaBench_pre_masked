
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
struct stat {int st_size; } ;
typedef int pgoff_t ;
typedef int off_t ;
typedef int buf ;
struct TYPE_2__ {int pd_checksum; } ;
typedef TYPE_1__* PageHeader ;
typedef int Oid ;
typedef int FILE ;
typedef int BlockNumber ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,size_t) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char const*,int *,struct stat*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char*,int,char const*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char*,int,int,int *) ;
 int FUNC_17 (int *,int,int ) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 char* FUNC_19 (char const*) ;
 int VAR_8 ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (int ,int) ;
 scalar_t__ FUNC_22 (char,char*,size_t) ;
 scalar_t__ VAR_9 ;
 char* FUNC_23 (char*,char*) ;
 int FUNC_24 (int) ;
 int VAR_10 ;

__attribute__((used)) static bool
FUNC_25(const char *VAR_11, const char *VAR_12, struct stat *VAR_13,
   bool VAR_14, Oid VAR_15)
{
 FILE *VAR_16;
 BlockNumber VAR_17 = 0;
 bool VAR_18 = 0;
 char VAR_19[VAR_5];
 uint16 VAR_20;
 int VAR_21 = 0;
 off_t VAR_22;
 int VAR_23;
 pgoff_t VAR_24 = 0;
 char *VAR_25;
 size_t VAR_26;
 PageHeader VAR_27;
 int VAR_28 = 0;
 char *VAR_29;
 bool VAR_30 = 0;

 VAR_16 = FUNC_0(VAR_11, "rb");
 if (VAR_16 == ((void*)0))
 {
  if (VAR_7 == VAR_1 && VAR_14)
   return 0;
  FUNC_11(VAR_2,
    (FUNC_12(),
     FUNC_13("could not open file \"%s\": %m", VAR_11)));
 }

 FUNC_9(VAR_12, ((void*)0), VAR_13, 0);

 if (!VAR_8 && FUNC_3())
 {
  char *VAR_31;






  VAR_31 = FUNC_19(VAR_11) + 1;

  if (FUNC_18(VAR_11, VAR_31))
  {
   VAR_30 = 1;





   VAR_29 = FUNC_23(VAR_31, ".");
   if (VAR_29 != ((void*)0))
   {
    VAR_28 = FUNC_10(VAR_29 + 1);
    if (VAR_28 == 0)
     FUNC_11(VAR_2,
       (FUNC_13("invalid segment number %d in file \"%s\"",
         VAR_28, VAR_31)));
   }
  }
 }

 while ((VAR_22 = FUNC_16(VAR_19, 1, FUNC_6(sizeof(VAR_19), VAR_13->st_size - VAR_24), VAR_16)) > 0)
 {






  FUNC_1(VAR_5 % VAR_0 == 0);

  if (VAR_30 && (VAR_22 % VAR_0 != 0))
  {
   FUNC_11(VAR_6,
     (FUNC_13("could not verify checksum in file \"%s\", block "
       "%d: read buffer size %d and page size %d "
       "differ",
       VAR_11, VAR_17, (int) VAR_22, VAR_0)));
   VAR_30 = 0;
  }

  if (VAR_30)
  {
   for (VAR_23 = 0; VAR_23 < VAR_22 / VAR_0; VAR_23++)
   {
    VAR_25 = VAR_19 + VAR_0 * VAR_23;
    if (!FUNC_8(VAR_25) && FUNC_7(VAR_25) < VAR_9)
    {
     VAR_20 = FUNC_20((char *) VAR_25, VAR_17 + VAR_28 * VAR_3);
     VAR_27 = (PageHeader) VAR_25;
     if (VAR_27->pd_checksum != VAR_20)
     {
      if (VAR_18 == 0)
      {

       if (FUNC_17(VAR_16, -(VAR_22 - VAR_0 * VAR_23), VAR_4) == -1)
       {
        FUNC_11(VAR_2,
          (FUNC_12(),
           FUNC_13("could not fseek in file \"%s\": %m",
            VAR_11)));
       }

       if (FUNC_16(VAR_19 + VAR_0 * VAR_23, 1, VAR_0, VAR_16) != VAR_0)
       {
        if (FUNC_15(VAR_16))
        {
         VAR_22 = VAR_0 * VAR_23;
         break;
        }

        FUNC_11(VAR_2,
          (FUNC_12(),
           FUNC_13("could not reread block %d of file \"%s\": %m",
            VAR_17, VAR_11)));
       }

       if (FUNC_17(VAR_16, VAR_22 - VAR_0 * VAR_23 - VAR_0, VAR_4) == -1)
       {
        FUNC_11(VAR_2,
          (FUNC_12(),
           FUNC_13("could not fseek in file \"%s\": %m",
            VAR_11)));
       }


       VAR_18 = 1;


       VAR_23--;
       continue;
      }

      VAR_21++;

      if (VAR_21 <= 5)
       FUNC_11(VAR_6,
         (FUNC_13("checksum verification failed in "
           "file \"%s\", block %d: calculated "
           "%X but expected %X",
           VAR_11, VAR_17, VAR_20,
           VAR_27->pd_checksum)));
      if (VAR_21 == 5)
       FUNC_11(VAR_6,
         (FUNC_13("further checksum verification "
           "failures in file \"%s\" will not "
           "be reported", VAR_11)));
     }
    }
    VAR_18 = 0;
    VAR_17++;
   }
  }


  if (FUNC_22('d', VAR_19, VAR_22))
   FUNC_11(VAR_2,
     (FUNC_13("base backup could not send data, aborting backup")));

  VAR_24 += VAR_22;
  FUNC_24(VAR_22);

  if (FUNC_15(VAR_16) || VAR_24 >= VAR_13->st_size)
  {





   break;
  }
 }

 FUNC_2(VAR_16, VAR_11);


 if (VAR_24 < VAR_13->st_size)
 {
  FUNC_5(VAR_19, 0, sizeof(VAR_19));
  while (VAR_24 < VAR_13->st_size)
  {
   VAR_22 = FUNC_6(sizeof(VAR_19), VAR_13->st_size - VAR_24);
   FUNC_22('d', VAR_19, VAR_22);
   VAR_24 += VAR_22;
   FUNC_24(VAR_22);
  }
 }





 VAR_26 = ((VAR_24 + 511) & ~511) - VAR_24;
 if (VAR_26 > 0)
 {
  FUNC_5(VAR_19, 0, VAR_26);
  FUNC_22('d', VAR_19, VAR_26);
 }

 FUNC_4(VAR_16);

 if (VAR_21 > 1)
 {
  FUNC_11(VAR_6,
    (FUNC_14("file \"%s\" has a total of %d checksum verification failure",
          "file \"%s\" has a total of %d checksum verification failures",
          VAR_21,
          VAR_11, VAR_21)));

  FUNC_21(VAR_15, VAR_21);
 }

 VAR_10 += VAR_21;

 return 1;
}
