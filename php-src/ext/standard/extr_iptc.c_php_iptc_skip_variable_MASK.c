
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,unsigned char**) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_2, int VAR_3, unsigned char **VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;

    if ((VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4)) == VAR_0) return VAR_1;

    if ((VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4)) == VAR_0) return VAR_1;

 VAR_5 = (((unsigned char) VAR_6) << 8) + ((unsigned char) VAR_7);

 VAR_5 -= 2;

 while (VAR_5--)
  if (FUNC_0(VAR_2, VAR_3, VAR_4) == VAR_0) return VAR_1;

 return 0;
}
