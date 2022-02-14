
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct utimbuf {void* modtime; void* actime; } ;
struct stat {void* st_mtime; void* st_atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (char*,struct stat*,int) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int ,void**) ;
 int FUNC_7 (char*,int,void**) ;
 int FUNC_8 (int ,void**) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (void**) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,struct utimbuf*) ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(int VAR_7, char *VAR_8[])
{
 struct stat VAR_9;
 time_t VAR_10[2];
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 char *VAR_20;
 struct utimbuf VAR_21;

 VAR_4 = VAR_8[0];

 VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_19 = 0;
 FUNC_10(&VAR_10[0]);

 while ((VAR_15 = FUNC_3(VAR_7, VAR_8, "acfmr:t:")) != VAR_1)
  switch(VAR_15) {
  case 'a':
   VAR_11 = 1;
   break;
  case 'c':
   VAR_12 = 1;
   break;
  case 'f':
   VAR_13 = 1;
   break;
  case 'm':
   VAR_14 = 1;
   break;
  case 'r':
   VAR_19 = 1;
   FUNC_8(VAR_5, VAR_10);
   break;
  case 't':
   VAR_19 = 1;
   FUNC_6(VAR_5, VAR_10);
   break;
  case '?':
  default:
   FUNC_11();
  }
 VAR_7 -= VAR_6;
 VAR_8 += VAR_6;


 if (VAR_11 == 0 && VAR_14 == 0)
  VAR_11 = VAR_14 = 1;





 if (!VAR_19 && VAR_7 > 1) {
  (void)FUNC_9(VAR_8[0], &VAR_20, 10);
  VAR_17 = VAR_20 - VAR_8[0];
  if (*VAR_20 == '\0' && (VAR_17 == 8 || VAR_17 == 10)) {
   VAR_19 = 1;
   FUNC_7(VAR_8[0], VAR_17 == 10, VAR_10);
  }
 }


 if (!VAR_19)
  VAR_10[1] = VAR_10[0];

 if (*VAR_8 == ((void*)0))
  FUNC_11();

 for (VAR_18 = 0; *VAR_8; ++VAR_8) {

  if (FUNC_5(*VAR_8, &VAR_9)) {
   if (!VAR_12) {

    VAR_16 = FUNC_1(*VAR_8,
        VAR_3 | VAR_2, VAR_0);
    if (VAR_16 == -1 || FUNC_2(VAR_16, &VAR_9) || FUNC_0(VAR_16)) {
     VAR_18 = 1;
     FUNC_13("%s", *VAR_8);
     continue;
    }


    if (!VAR_19)
     continue;
   } else
    continue;
  }

  if (!VAR_11)
   VAR_10[0] = VAR_9.st_atime;
  if (!VAR_14)
   VAR_10[1] = VAR_9.st_mtime;


  VAR_21.actime = VAR_10[0];
  VAR_21.modtime = VAR_10[1];
  if (!FUNC_12(*VAR_8, &VAR_21))
   continue;


  if (VAR_19) {
   VAR_18 = 1;
   FUNC_13("%s", *VAR_8);
  }







   if (!FUNC_12(*VAR_8, ((void*)0)))
   continue;


  if (FUNC_4(*VAR_8, &VAR_9, VAR_13))
   VAR_18 = 1;
 }
 return VAR_18;
}
