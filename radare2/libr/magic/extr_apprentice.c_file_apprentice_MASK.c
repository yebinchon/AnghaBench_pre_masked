
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlist {struct mlist* prev; struct mlist* next; } ;
typedef int RMagic ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlist*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char const*,int,struct mlist*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 () ;
 struct mlist* FUNC_8 (int) ;
 char* FUNC_9 (char const*,int ) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;

struct mlist * FUNC_12(RMagic *VAR_2, const char *VAR_3, int VAR_4) {
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = -1;
 struct mlist *VAR_9;

 FUNC_7 ();

 if (!VAR_3) {
  VAR_3 = FUNC_6 ("MAGIC");
 }
 if (!VAR_3) {
  VAR_3 = VAR_0;
 }

 if (!(VAR_6 = FUNC_10 (VAR_3))) {
  FUNC_4 (VAR_2, FUNC_11 (VAR_3));
  return ((void*)0);
 }
 VAR_3 = VAR_6;

 if (!(VAR_9 = FUNC_8 (sizeof (*VAR_9)))) {
  FUNC_5 (VAR_6);
  FUNC_4 (VAR_2, sizeof (*VAR_9));
  return ((void*)0);
 }
 VAR_9->next = VAR_9->prev = VAR_9;

 while (VAR_3) {
  VAR_5 = FUNC_9 (VAR_3, VAR_1);
  if (VAR_5) {
   *VAR_5++ = '\0';
  }
  if (*VAR_3 == '\0') {
   break;
  }
  VAR_7 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_9);
  VAR_8 = FUNC_1 (VAR_8, VAR_7);
  VAR_3 = VAR_5;
 }
 if (VAR_8 == -1) {
  FUNC_5 (VAR_6);
  FUNC_0 (VAR_9);
  FUNC_3 (VAR_2, 0, "could not find any magic files!");
  return ((void*)0);
 }
 FUNC_5 (VAR_6);
 return VAR_9;
}
