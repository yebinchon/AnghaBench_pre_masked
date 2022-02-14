
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;
typedef int Datum ;


 int * FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bytea *
FUNC_6(Datum VAR_2,
    int VAR_3,
    int VAR_4,
    bool VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3, 1);

 if (VAR_5)
 {




  VAR_7 = -1;
 }
 else
 {

  int VAR_8 = VAR_3 + VAR_4;





  if (VAR_8 < VAR_3)
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("negative substring length not allowed")));






  if (VAR_8 < 1)
   return FUNC_2("");

  VAR_7 = VAR_8 - VAR_6;
 }






 return FUNC_0(VAR_2, VAR_6 - 1, VAR_7);
}
