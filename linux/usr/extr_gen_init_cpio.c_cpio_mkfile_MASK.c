
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {long st_size; scalar_t__ st_mtime; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char*,long,int,int ) ;
 int VAR_2 ;
 char* FUNC_5 (long) ;
 long VAR_3 ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int,char*,long) ;
 int FUNC_11 (char*,char*,char*,int,unsigned int,long,long,unsigned int,long,long,int,int,int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(const char *VAR_6, const char *VAR_7,
   unsigned int VAR_8, uid_t VAR_9, gid_t VAR_10,
   unsigned int VAR_11)
{
 char VAR_12[256];
 char *VAR_13 = ((void*)0);
 struct stat VAR_14;
 long VAR_15;
 int VAR_16 = -1;
 int VAR_17;
 int VAR_18 = -1;
 int VAR_19;
 unsigned int VAR_20;

 VAR_8 |= VAR_1;

 VAR_16 = FUNC_6 (VAR_7, VAR_0);
 if (VAR_16 < 0) {
  FUNC_1 (VAR_4, "File %s could not be opened for reading\n", VAR_7);
  goto error;
 }

 VAR_17 = FUNC_3(VAR_16, &VAR_14);
 if (VAR_17) {
  FUNC_1(VAR_4, "File %s could not be stat()'ed\n", VAR_7);
  goto error;
 }

 VAR_13 = FUNC_5(VAR_14.st_size);
 if (!VAR_13) {
  FUNC_1 (VAR_4, "out of memory\n");
  goto error;
 }

 VAR_17 = FUNC_10 (VAR_16, VAR_13, VAR_14.st_size);
 if (VAR_17 < 0) {
  FUNC_1 (VAR_4, "Can not read %s file\n", VAR_7);
  goto error;
 }

 VAR_15 = 0;
 for (VAR_20 = 1; VAR_20 <= VAR_11; VAR_20++) {

  if (VAR_20 == VAR_11) VAR_15 = VAR_14.st_size;

  if (VAR_6[0] == '/')
   VAR_6++;
  VAR_19 = FUNC_12(VAR_6) + 1;
  FUNC_11(VAR_12,"%s%08X%08X%08lX%08lX%08X%08lX"
         "%08lX%08X%08X%08X%08X%08X%08X",
   "070701",
   VAR_2,
   VAR_8,
   (long) VAR_9,
   (long) VAR_10,
   VAR_11,
   (long) VAR_14.st_mtime,
   VAR_15,
   3,
   1,
   0,
   0,
   VAR_19,
   0);
  FUNC_7(VAR_12);
  FUNC_9(VAR_6);
  FUNC_8();

  if (VAR_15) {
   if (FUNC_4(VAR_13, VAR_15, 1, VAR_5) != 1) {
    FUNC_1(VAR_4, "writing filebuf failed\n");
    goto error;
   }
   VAR_3 += VAR_15;
   FUNC_8();
  }

  VAR_6 += VAR_19;
 }
 VAR_2++;
 VAR_18 = 0;

error:
 if (VAR_13) FUNC_2(VAR_13);
 if (VAR_16 >= 0) FUNC_0(VAR_16);
 return VAR_18;
}
