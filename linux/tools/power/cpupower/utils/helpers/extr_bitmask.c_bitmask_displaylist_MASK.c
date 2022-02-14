
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; } ;


 unsigned int FUNC_0 (struct bitmask const*) ;
 unsigned int FUNC_1 (struct bitmask const*,unsigned int) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int,int) ;

int FUNC_3(char *VAR_0, int VAR_1, const struct bitmask *VAR_2)
{
 int VAR_3 = 0;

 unsigned int VAR_4, VAR_5, VAR_6;

 if (VAR_1 > 0)
  *VAR_0 = 0;
 VAR_5 = VAR_4 = FUNC_0(VAR_2);
 while (VAR_4 < VAR_2->size) {
  VAR_6 = VAR_4;
  VAR_4 = FUNC_1(VAR_2, VAR_4+1);
  if (VAR_4 >= VAR_2->size || VAR_4 > VAR_6 + 1) {
   VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_6, VAR_3);
   VAR_5 = VAR_4;
  }
 }
 return VAR_3;
}
