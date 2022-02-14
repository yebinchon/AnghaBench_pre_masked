
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;
typedef int stbi ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int,int,int) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,int,int*,int *) ;

__attribute__((used)) static stbi_uc *FUNC_10(stbi *VAR_0,int *VAR_1,int *VAR_2,int *VAR_3,int VAR_4)
{
   stbi_uc *VAR_5;
   int VAR_6, VAR_7,VAR_8;

   for (VAR_6=0; VAR_6<92; ++VAR_6)
      FUNC_6(VAR_0);

   VAR_7 = FUNC_4(VAR_0);
   VAR_8 = FUNC_4(VAR_0);
   if (FUNC_0(VAR_0)) return FUNC_2("bad file","file too short (pic header)");
   if ((1 << 28) / VAR_7 < VAR_8) return FUNC_2("too large", "Image too large to decode");

   FUNC_5(VAR_0);
   FUNC_4(VAR_0);
   FUNC_4(VAR_0);


   VAR_5 = (stbi_uc *) FUNC_7(VAR_7*VAR_8*4);
   FUNC_8(VAR_5, 0xff, VAR_7*VAR_8*4);

   if (!FUNC_9(VAR_0,VAR_7,VAR_8,VAR_3, VAR_5)) {
      FUNC_3(VAR_5);
      VAR_5=0;
   }
   *VAR_1 = VAR_7;
   *VAR_2 = VAR_8;
   if (VAR_4 == 0) VAR_4 = *VAR_3;
   VAR_5=FUNC_1(VAR_5,4,VAR_4,VAR_7,VAR_8);

   return VAR_5;
}
