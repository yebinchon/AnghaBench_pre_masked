
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,unsigned char**) ;
 int FUNC_1 (int *,int,unsigned char,unsigned char**) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_2, int VAR_3, unsigned char **VAR_4)
{
    int VAR_5;



    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == VAR_0) return VAR_1;

    while (VAR_5 != 0xff) {
        if ((VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4)) == VAR_0)
            return VAR_1;
    }


    do {
        VAR_5 = FUNC_0(VAR_2, 0, 0);
  if (VAR_5 == VAR_0)
            return VAR_1;
  else
  if (VAR_5 == 0xff)
   FUNC_1(VAR_2, VAR_3, (unsigned char)VAR_5, VAR_4);
    } while (VAR_5 == 0xff);

    return (unsigned int) VAR_5;
}
