
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;



 int VAR_0 ;
 int FUNC_3 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_4(BIO *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3((PGconn *) FUNC_1(VAR_1), VAR_2, VAR_3);
 FUNC_0(VAR_1);
 if (VAR_4 <= 0)
 {

  switch (VAR_0)
  {

   case 130:


   case 128:

   case 129:
    FUNC_2(VAR_1);
    break;

   default:
    break;
  }
 }

 return VAR_4;
}
