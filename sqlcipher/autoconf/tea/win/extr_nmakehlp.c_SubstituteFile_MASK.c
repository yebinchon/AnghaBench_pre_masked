
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szCopy ;
struct TYPE_4__ {char* key; char* value; struct TYPE_4__* nextPtr; } ;
typedef TYPE_1__ list_item_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,size_t,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,int,char*,char*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__**,char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int VAR_0 ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(
    const char *VAR_1,
    const char *VAR_2)
{
    size_t VAR_3 = 1024;
    static char VAR_4[1024], VAR_5[1024];
    char *VAR_6 = ((void*)0);
    list_item_t *VAR_7 = ((void*)0);
    FILE *VAR_8, *VAR_9;

    VAR_8 = FUNC_2(VAR_2, "rt");
    if (VAR_8 != ((void*)0)) {





 VAR_9 = FUNC_2(VAR_1, "rt");
 if (VAR_9 != ((void*)0)) {
     while (FUNC_1(VAR_4, VAR_3, VAR_9) != ((void*)0)) {
  unsigned char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
  VAR_10 = (unsigned char*)VAR_4;
  while (VAR_10 && *VAR_10 && FUNC_4(*VAR_10)) ++VAR_10;
  VAR_11 = VAR_10;
  while (VAR_11 && *VAR_11 && !FUNC_4(*VAR_11)) ++VAR_11;
  VAR_12 = VAR_11;
  while (VAR_12 && *VAR_12 && FUNC_4(*VAR_12)) ++VAR_12;
  VAR_13 = VAR_12;
  while (VAR_13 && *VAR_13 && !(*VAR_13 == '\r' || *VAR_13 == '\n')) ++VAR_13;
  *VAR_11 = 0, *VAR_13 = 0;
  FUNC_6(&VAR_7, (char*)VAR_10, (char*)VAR_12);
     }
     FUNC_0(VAR_9);
 }
 while (FUNC_1(VAR_4, VAR_3, VAR_8) != ((void*)0)) {
     list_item_t *VAR_14 = ((void*)0);
     for (VAR_14 = VAR_7; VAR_14 != ((void*)0); VAR_14 = VAR_14->nextPtr) {
  char *VAR_15 = FUNC_10(VAR_4, VAR_14->key);
  if (VAR_15) {
      char *VAR_16, *VAR_17, *VAR_18;
      VAR_16 = VAR_5;
      VAR_17 = VAR_4;
      while (VAR_17 != VAR_15) *VAR_16++ = *VAR_17++;
      VAR_18 = VAR_14->value;
      while (VAR_18 && *VAR_18) *VAR_16++ = *VAR_18++;
      VAR_17 += FUNC_9(VAR_14->key);
      while (*VAR_17) *VAR_16++ = *VAR_17++;
      *VAR_16 = 0;
      FUNC_7(VAR_4, VAR_5, sizeof(VAR_5));
  }
     }
     FUNC_8(VAR_4);
 }

 FUNC_5(&VAR_7);
    }
    FUNC_0(VAR_8);
    return 0;
}
