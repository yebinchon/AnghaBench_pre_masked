
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (long) ;
 int FUNC_1 (int *,int ,long,int,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(mp_int *VAR_4, long VAR_5)
{
   int VAR_6;


   if (VAR_5 < 0) {
      VAR_6 = VAR_2;
      VAR_5 = -VAR_5;
   } else {

      VAR_6 = VAR_1;

   }


   if (VAR_5 < 16 || VAR_5 > 8192) {
      FUNC_3("Invalid prime size!\n");
      return VAR_0;
   }




   return FUNC_2(FUNC_1(VAR_4, FUNC_0(VAR_5), VAR_5, VAR_6, VAR_3, ((void*)0)));
}
