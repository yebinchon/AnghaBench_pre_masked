
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(FILE *VAR_3)
{
    int VAR_4, VAR_5;


    do {
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == VAR_0)
     FUNC_0("%s: end of file\n", VAR_1);
 if (VAR_4 == '#') {

     do {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == VAR_0)
      FUNC_0("%s: end of file\n", VAR_1);
     } while (VAR_4 != '\n');
 }
    } while (FUNC_3(VAR_4));


    VAR_5 = 0;
    while (FUNC_2(VAR_4)) {
 VAR_5 = 10*VAR_5+VAR_4-'0';



 if (VAR_2)
  break;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == VAR_0)
     FUNC_0("%s: end of file\n", VAR_1);
    }
    return VAR_5;
}
