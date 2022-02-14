
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int Bitmapset ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,char*,scalar_t__) ;
 char* FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static Bitmapset *
FUNC_6(Oid VAR_3, Oid VAR_4, Bitmapset *VAR_5)
{
 Bitmapset *VAR_6 = ((void*)0);
 int VAR_7;




 if (VAR_3 == VAR_4)
  return VAR_5;

 VAR_7 = -1;
 while ((VAR_7 = FUNC_1(VAR_5, VAR_7)) >= 0)
 {

  AttrNumber VAR_8 = VAR_7 + VAR_1;
  char *VAR_9;




  if (VAR_8 == VAR_2)
  {
   VAR_6 = FUNC_0(VAR_6, VAR_7);
   continue;
  }

  VAR_9 = FUNC_3(VAR_3, VAR_8, 0);
  VAR_8 = FUNC_4(VAR_4, VAR_9);
  if (VAR_8 == VAR_2)
   FUNC_2(VAR_0, "cache lookup failed for attribute %s of relation %u",
     VAR_9, VAR_4);

  VAR_6 = FUNC_0(VAR_6,
        VAR_8 - VAR_1);

  FUNC_5(VAR_9);
 }

 return VAR_6;
}
