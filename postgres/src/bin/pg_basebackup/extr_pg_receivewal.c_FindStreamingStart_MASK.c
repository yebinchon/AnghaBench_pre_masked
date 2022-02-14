
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
struct stat {int st_size; } ;
struct dirent {char* d_name; } ;
typedef int off_t ;
typedef int fullpath ;
typedef int buf ;
typedef scalar_t__ XLogSegNo ;
typedef int XLogRecPtr ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__,int ,int,int ) ;
 char* VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int * FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,int ,int ) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int,char*,int) ;
 struct dirent* FUNC_15 (int *) ;
 int FUNC_16 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_17 (char*,struct stat*) ;

__attribute__((used)) static XLogRecPtr
FUNC_18(uint32 *VAR_8)
{
 DIR *VAR_9;
 struct dirent *VAR_10;
 XLogSegNo VAR_11 = 0;
 uint32 VAR_12 = 0;
 bool VAR_13 = 0;

 VAR_9 = FUNC_9(VAR_6);

 while (VAR_7 = 0, (VAR_10 = FUNC_15(VAR_9)) != ((void*)0))
 {
  uint32 VAR_14;
  XLogSegNo VAR_15;
  bool VAR_16;
  bool VAR_17;




  if (FUNC_3(VAR_10->d_name))
  {
   VAR_16 = 0;
   VAR_17 = 0;
  }
  else if (FUNC_2(VAR_10->d_name))
  {
   VAR_16 = 1;
   VAR_17 = 0;
  }
  else if (FUNC_0(VAR_10->d_name))
  {
   VAR_16 = 0;
   VAR_17 = 1;
  }
  else if (FUNC_1(VAR_10->d_name))
  {
   VAR_16 = 1;
   VAR_17 = 1;
  }
  else
   continue;




  FUNC_4(VAR_10->d_name, &VAR_14, &VAR_15, VAR_5);
  if (!VAR_16 && !VAR_17)
  {
   struct stat VAR_18;
   char VAR_19[VAR_1 * 2];

   FUNC_16(VAR_19, sizeof(VAR_19), "%s/%s", VAR_6, VAR_10->d_name);
   if (FUNC_17(VAR_19, &VAR_18) != 0)
   {
    FUNC_12("could not stat file \"%s\": %m", VAR_19);
    FUNC_8(1);
   }

   if (VAR_18.st_size != VAR_5)
   {
    FUNC_13("segment file \"%s\" has incorrect size %d, skipping",
          VAR_10->d_name, (int) VAR_18.st_size);
    continue;
   }
  }
  else if (!VAR_16 && VAR_17)
  {
   int VAR_20;
   char VAR_21[4];
   int VAR_22;
   char VAR_23[VAR_1 * 2];
   int VAR_24;

   FUNC_16(VAR_23, sizeof(VAR_23), "%s/%s", VAR_6, VAR_10->d_name);

   VAR_20 = FUNC_11(VAR_23, VAR_2 | VAR_3, 0);
   if (VAR_20 < 0)
   {
    FUNC_12("could not open compressed file \"%s\": %m",
        VAR_23);
    FUNC_8(1);
   }
   if (FUNC_10(VAR_20, (off_t) (-4), VAR_4) < 0)
   {
    FUNC_12("could not seek in compressed file \"%s\": %m",
        VAR_23);
    FUNC_8(1);
   }
   VAR_24 = FUNC_14(VAR_20, (char *) VAR_21, sizeof(VAR_21));
   if (VAR_24 != sizeof(VAR_21))
   {
    if (VAR_24 < 0)
     FUNC_12("could not read compressed file \"%s\": %m",
         VAR_23);
    else
     FUNC_12("could not read compressed file \"%s\": read %d of %zu",
         VAR_23, VAR_24, sizeof(VAR_21));
    FUNC_8(1);
   }

   FUNC_6(VAR_20);
   VAR_22 = (VAR_21[3] << 24) | (VAR_21[2] << 16) |
    (VAR_21[1] << 8) | VAR_21[0];

   if (VAR_22 != VAR_5)
   {
    FUNC_13("compressed segment file \"%s\" has incorrect uncompressed size %d, skipping",
          VAR_10->d_name, VAR_22);
    continue;
   }
  }


  if ((VAR_15 > VAR_11) ||
   (VAR_15 == VAR_11 && VAR_14 > VAR_12) ||
   (VAR_15 == VAR_11 && VAR_14 == VAR_12 && VAR_13 && !VAR_16))
  {
   VAR_11 = VAR_15;
   VAR_12 = VAR_14;
   VAR_13 = VAR_16;
  }
 }

 if (VAR_7)
 {
  FUNC_12("could not read directory \"%s\": %m", VAR_6);
  FUNC_8(1);
 }

 FUNC_7(VAR_9, VAR_6);

 if (VAR_11 > 0)
 {
  XLogRecPtr VAR_25;






  if (!VAR_13)
   VAR_11++;

  FUNC_5(VAR_11, 0, VAR_5, VAR_25);

  *VAR_8 = VAR_12;
  return VAR_25;
 }
 else
  return VAR_0;
}
