
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola {int dummy; } ;


 int FUNC_0 (struct lola*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct lola*,unsigned int*,unsigned int*) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct lola *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      unsigned int *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;

 FUNC_2("codec_read NID=%x, verb=%x, data=%x, ext=%x\n",
        VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_6);
 return VAR_7;
}
