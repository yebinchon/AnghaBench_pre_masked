
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct magic_set {int ** mlist; } ;






 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct magic_set*,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (struct magic_set*,int ,char*,...) ;
 int FUNC_5 (struct magic_set*,int) ;
 int FUNC_6 (struct magic_set*,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 char* FUNC_9 (char const*,int) ;
 void* FUNC_10 () ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (char const*,int ) ;
 int FUNC_13 (char const*) ;

int
FUNC_14(struct magic_set *VAR_2, const char *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = -1;
 size_t VAR_9;

 (void)FUNC_6(VAR_2, 0);







 FUNC_8();

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_7("MAGIC");
 if (VAR_3 == ((void*)0)) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   FUNC_11(VAR_2->mlist[VAR_9]);
   if ((VAR_2->mlist[VAR_9] = FUNC_10()) == ((void*)0)) {
    FUNC_5(VAR_2, sizeof(*VAR_2->mlist[VAR_9]));
    return -1;
   }
  }
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 }

 if ((VAR_6 = FUNC_3(VAR_3)) == ((void*)0)) {
  FUNC_5(VAR_2, FUNC_13(VAR_3));
  return -1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_11(VAR_2->mlist[VAR_9]);
  if ((VAR_2->mlist[VAR_9] = FUNC_10()) == ((void*)0)) {
   FUNC_5(VAR_2, sizeof(*VAR_2->mlist[VAR_9]));
   while (VAR_9-- > 0) {
    FUNC_11(VAR_2->mlist[VAR_9]);
    VAR_2->mlist[VAR_9] = ((void*)0);
   }
   FUNC_2(VAR_6);
   return -1;
  }
 }
 VAR_3 = VAR_6;

 while (VAR_3) {
  VAR_5 = FUNC_12(VAR_3, VAR_1);
  if (VAR_5)
   *VAR_5++ = '\0';
  if (*VAR_3 == '\0')
   break;
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
  VAR_8 = FUNC_0(VAR_8, VAR_7);
  VAR_3 = VAR_5;
 }

 FUNC_2(VAR_6);

 if (VAR_8 == -1) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   FUNC_11(VAR_2->mlist[VAR_9]);
   VAR_2->mlist[VAR_9] = ((void*)0);
  }
  FUNC_4(VAR_2, 0, "could not find any valid magic files!");
  return -1;
 }
 switch (VAR_4) {
 case 128:
 case 130:
 case 131:
 case 129:
  return 0;
 default:
  FUNC_4(VAR_2, 0, "Invalid action %d", VAR_4);
  return -1;
 }
}
