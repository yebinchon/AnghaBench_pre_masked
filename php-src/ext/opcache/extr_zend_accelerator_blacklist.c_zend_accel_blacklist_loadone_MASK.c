
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t pos; TYPE_1__* entries; } ;
typedef TYPE_2__ zend_blacklist ;
typedef int real_path ;
typedef int buf ;
struct TYPE_5__ {int path_length; char* path; size_t id; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char*,int) ;
 char* FUNC_14 (char*,int) ;

__attribute__((used)) static void FUNC_15(zend_blacklist *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_3 + 1], VAR_7[VAR_3 + 1], *VAR_8 = ((void*)0);
 FILE *VAR_9;
 int VAR_10, VAR_11;

 if ((VAR_9 = FUNC_5(VAR_5, "r")) == ((void*)0)) {
  FUNC_12(VAR_2, "Cannot load blacklist file: %s\n", VAR_5);
  return;
 }

 FUNC_12(VAR_0,"Loading blacklist file:  '%s'", VAR_5);

 if (FUNC_0(VAR_5, VAR_6)) {
  VAR_11 = FUNC_13(VAR_6, FUNC_10(VAR_6));
  VAR_8 = FUNC_14(VAR_6, VAR_11);
 }

 FUNC_9(VAR_6, 0, sizeof(VAR_6));
 FUNC_9(VAR_7, 0, sizeof(VAR_7));

 while (FUNC_4(VAR_6, VAR_3, VAR_9) != ((void*)0)) {
  char *VAR_12, *VAR_13;
  VAR_10 = FUNC_10(VAR_6);
  if (VAR_10 > 0 && VAR_6[VAR_10 - 1] == '\n') {
   VAR_6[--VAR_10] = 0;
   if (VAR_10 > 0 && VAR_6[VAR_10 - 1] == '\r') {
    VAR_6[--VAR_10] = 0;
   }
  }


  VAR_13 = &VAR_6[0];
  while (*VAR_13 == '\r') {
   *VAR_13++ = 0;
   VAR_10--;
  }


  if (VAR_13[0] == '\"' && VAR_13[VAR_10 - 1]== '\"') {
   *VAR_13++ = 0;
   VAR_10 -= 2;
  }

  if (VAR_10 == 0) {
   continue;
  }


  if (VAR_13[0]==';') {
   continue;
  }

  VAR_12 = FUNC_14(VAR_13, VAR_10);
  if (VAR_8) {
   FUNC_2(VAR_12, VAR_7, VAR_8, VAR_11);
  } else {
   FUNC_1(VAR_12, VAR_7);
  }
  VAR_10 = FUNC_10(VAR_7);

  FUNC_6(VAR_12);

  FUNC_11(VAR_4);
  VAR_4->entries[VAR_4->pos].path_length = VAR_10;
  VAR_4->entries[VAR_4->pos].path = (char *)FUNC_7(VAR_10 + 1);
  if (!VAR_4->entries[VAR_4->pos].path) {
   FUNC_12(VAR_1, "malloc() failed\n");
   FUNC_3(VAR_9);
   return;
  }
  VAR_4->entries[VAR_4->pos].id = VAR_4->pos;
  FUNC_8(VAR_4->entries[VAR_4->pos].path, VAR_7, VAR_10 + 1);
  VAR_4->pos++;
 }
 FUNC_3(VAR_9);
 if (VAR_8) {
  FUNC_6(VAR_8);
 }
}
