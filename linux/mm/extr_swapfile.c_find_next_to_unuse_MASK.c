
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {unsigned int max; int * swap_map; } ;


 unsigned int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct swap_info_struct*,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned char) ;

__attribute__((used)) static unsigned int FUNC_4(struct swap_info_struct *VAR_2,
     unsigned int VAR_3, bool VAR_4)
{
 unsigned int VAR_5;
 unsigned char VAR_6;







 for (VAR_5 = VAR_3 + 1; VAR_5 < VAR_2->max; VAR_5++) {
  VAR_6 = FUNC_0(VAR_2->swap_map[VAR_5]);
  if (VAR_6 && FUNC_3(VAR_6) != VAR_1)
   if (!VAR_4 || FUNC_2(VAR_2, VAR_5))
    break;
  if ((VAR_5 % VAR_0) == 0)
   FUNC_1();
 }

 if (VAR_5 == VAR_2->max)
  VAR_5 = 0;

 return VAR_5;
}
