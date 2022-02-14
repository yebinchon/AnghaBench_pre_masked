
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int,int) ;

char *
FUNC_13(const char *VAR_6, Oid VAR_7)
{
 char *VAR_8 = (char *) FUNC_7(VAR_3);
 int VAR_9 = FUNC_9(VAR_6);
 Relation VAR_10;
 int VAR_11;





 VAR_10 = FUNC_11(VAR_5, VAR_0);

 for (VAR_11 = 1; VAR_11 < VAR_3 - 1; VAR_11++)
 {
  VAR_8[VAR_11 - 1] = '_';
  if (VAR_11 + VAR_9 < VAR_3)
   FUNC_8(VAR_8 + VAR_11, VAR_6);
  else
  {
   FUNC_6(VAR_8 + VAR_11, VAR_6, VAR_3 - VAR_11);
   FUNC_12(VAR_8, VAR_3, 0);
  }
  if (!FUNC_2(VAR_4,
           FUNC_0(VAR_8),
           FUNC_1(VAR_7)))
   break;
 }

 FUNC_10(VAR_10, VAR_0);

 if (VAR_11 >= VAR_3 - 1)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_5("could not form array type name for type \"%s\"",
      VAR_6)));

 return VAR_8;
}
