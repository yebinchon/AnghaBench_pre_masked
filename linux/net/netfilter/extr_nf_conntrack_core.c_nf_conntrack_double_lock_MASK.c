
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static bool FUNC_4(struct net *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, unsigned int VAR_7)
{
 VAR_5 %= VAR_0;
 VAR_6 %= VAR_0;
 if (VAR_5 <= VAR_6) {
  FUNC_1(&VAR_3[VAR_5]);
  if (VAR_5 != VAR_6)
   FUNC_3(&VAR_3[VAR_6],
      VAR_1);
 } else {
  FUNC_1(&VAR_3[VAR_6]);
  FUNC_3(&VAR_3[VAR_5],
     VAR_1);
 }
 if (FUNC_2(&VAR_2, VAR_7)) {
  FUNC_0(VAR_5, VAR_6);
  return 1;
 }
 return 0;
}
