
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_1, int VAR_2, unsigned char **VAR_3)
{
 int VAR_4;
 char VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 if (VAR_4 == VAR_0) return VAR_0;

 if (VAR_2 > 0) {
  VAR_5 = VAR_4;
  FUNC_0(VAR_5);
 }

 if (VAR_3) *(*VAR_3)++ = VAR_4;

 return VAR_4;
}
