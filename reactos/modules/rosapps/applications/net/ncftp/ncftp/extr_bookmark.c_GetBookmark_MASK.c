
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int line ;
struct TYPE_5__ {char* bookmarkName; char* name; } ;
typedef int FILE ;
typedef TYPE_1__ Bookmark ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (char*,char const* const) ;
 scalar_t__ FUNC_3 (char*,char const* const,size_t) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 char* FUNC_7 (char*,char) ;
 size_t FUNC_8 (char const* const) ;

int
FUNC_9(const char *const VAR_1, Bookmark *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[512];
 Bookmark VAR_5;
 Bookmark VAR_6;
 Bookmark VAR_7;
 size_t VAR_8 = 0;
 size_t VAR_9 = 0;
 size_t VAR_10 = 0;
 size_t VAR_11 = 0;
 int VAR_12 = -1;
 int VAR_13 = 0;
 size_t VAR_14;
 char *VAR_15;

 VAR_3 = FUNC_4(((void*)0));
 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_14 = FUNC_8(VAR_1);
 while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_3) != ((void*)0)) {
  if (FUNC_5(VAR_4, VAR_2) < 0)
   continue;
  if (FUNC_2(VAR_2->bookmarkName, VAR_1)) {

   VAR_8 = VAR_14;
   VAR_13 = 1;
   break;
  } else if (FUNC_3(VAR_2->bookmarkName, VAR_1, VAR_14)) {



   VAR_7 = *VAR_2;
   VAR_9 = VAR_14;
  } else if (FUNC_2(VAR_2->name, VAR_1)) {



   VAR_5 = *VAR_2;
   VAR_10 = VAR_14;
  } else if ((VAR_15 = FUNC_7(VAR_2->name, '.')) != ((void*)0)) {

   if (FUNC_3(VAR_2->name, "ftp", 3)) {
    VAR_15 = VAR_15 + 1;
   } else if (FUNC_3(VAR_2->name, "www", 3)) {
    VAR_15 = VAR_15 + 1;
   } else {
    VAR_15 = VAR_2->name;
   }
   if (FUNC_3(VAR_15, VAR_1, VAR_14)) {



    VAR_6 = *VAR_2;
    VAR_11 = VAR_14;
   }
  }
 }

 if (VAR_0 == 0) {



  if (VAR_13 != 0) {
   VAR_12 = 0;
  }
 } else {

  if (VAR_8 != 0) {

   VAR_12 = 0;
  } else if (VAR_9 != 0) {
   VAR_12 = 0;
   *VAR_2 = VAR_7;
  } else if (VAR_10 != 0) {
   VAR_12 = 0;
   *VAR_2 = VAR_5;
  } else if (VAR_11 != 0) {
   VAR_12 = 0;
   *VAR_2 = VAR_6;
  }
 }

 if (VAR_12 != 0)
  FUNC_6(VAR_2, 0, sizeof(Bookmark));

 FUNC_0(VAR_3);
 return (VAR_12);
}
