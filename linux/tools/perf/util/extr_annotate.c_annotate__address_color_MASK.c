
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_range {int dummy; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 double FUNC_0 (struct block_range*) ;

__attribute__((used)) static const char *FUNC_1(struct block_range *VAR_3)
{
 double VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 >= 0) {

  if (VAR_4 > 0.75)
   return VAR_2;


  if (VAR_4 < 0.01)
   return VAR_1;
 }

 return VAR_0;
}
