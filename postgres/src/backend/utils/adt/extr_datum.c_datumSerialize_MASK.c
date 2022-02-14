
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExpandedObjectHeader ;
typedef char Datum ;


 int * FUNC_0 (char) ;
 char* FUNC_1 (char) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char,int,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;

void
FUNC_9(Datum VAR_0, bool VAR_1, bool VAR_2, int VAR_3,
      char **VAR_4)
{
 ExpandedObjectHeader *VAR_5 = ((void*)0);
 int VAR_6;


 if (VAR_1)
  VAR_6 = -2;
 else if (VAR_2)
  VAR_6 = -1;
 else if (VAR_3 == -1 &&
    FUNC_4(FUNC_1(VAR_0)))
 {
  VAR_5 = FUNC_0(VAR_0);
  VAR_6 = FUNC_3(VAR_5);
 }
 else
  VAR_6 = FUNC_5(VAR_0, VAR_2, VAR_3);
 FUNC_6(*VAR_4, &VAR_6, sizeof(int));
 *VAR_4 += sizeof(int);


 if (!VAR_1)
 {
  if (VAR_2)
  {
   FUNC_6(*VAR_4, &VAR_0, sizeof(Datum));
   *VAR_4 += sizeof(Datum);
  }
  else if (VAR_5)
  {
   char *VAR_7;





   VAR_7 = (char *) FUNC_7(VAR_6);
   FUNC_2(VAR_5, (void *) VAR_7, VAR_6);
   FUNC_6(*VAR_4, VAR_7, VAR_6);
   *VAR_4 += VAR_6;


   FUNC_8(VAR_7);
  }
  else
  {
   FUNC_6(*VAR_4, FUNC_1(VAR_0), VAR_6);
   *VAR_4 += VAR_6;
  }
 }
}
