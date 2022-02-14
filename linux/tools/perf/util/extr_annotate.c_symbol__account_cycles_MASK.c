
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {scalar_t__ start; scalar_t__ end; } ;
struct cyc_hist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyc_hist*,scalar_t__,unsigned int,unsigned int,int) ;
 struct cyc_hist* FUNC_1 (struct symbol*) ;

__attribute__((used)) static int FUNC_2(u64 VAR_2, u64 VAR_3,
      struct symbol *VAR_4, unsigned VAR_5)
{
 struct cyc_hist *VAR_6;
 unsigned VAR_7;

 if (VAR_4 == ((void*)0))
  return 0;
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 if (VAR_2 < VAR_4->start || VAR_2 >= VAR_4->end)
  return -VAR_1;

 if (VAR_3) {
  if (VAR_3 < VAR_4->start || VAR_3 >= VAR_4->end)
   return -VAR_1;
  if (VAR_3 >= VAR_2)
   VAR_3 = 0;
 }
 VAR_7 = VAR_2 - VAR_4->start;
 return FUNC_0(VAR_6,
     VAR_3 ? VAR_3 - VAR_4->start : 0,
     VAR_7, VAR_5,
     !!VAR_3);
}
