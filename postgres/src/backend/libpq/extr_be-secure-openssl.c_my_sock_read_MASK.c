
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Port ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4(BIO *VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5 != ((void*)0))
 {
  VAR_7 = FUNC_3(((Port *) FUNC_1(VAR_4)), VAR_5, VAR_6);
  FUNC_0(VAR_4);
  if (VAR_7 <= 0)
  {

   if (VAR_3 == VAR_1 || VAR_3 == VAR_2 || VAR_3 == VAR_0)
   {
    FUNC_2(VAR_4);
   }
  }
 }

 return VAR_7;
}
