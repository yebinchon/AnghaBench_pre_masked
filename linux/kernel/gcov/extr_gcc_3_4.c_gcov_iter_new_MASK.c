
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_iterator {struct gcov_info* info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 struct gcov_iterator* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_iterator*,int ,int ) ;
 int VAR_1 ;

struct gcov_iterator *FUNC_3(struct gcov_info *VAR_2)
{
 struct gcov_iterator *VAR_3;

 VAR_3 = FUNC_0(FUNC_2(VAR_3, VAR_1, FUNC_1(VAR_2)),
         VAR_0);
 if (VAR_3)
  VAR_3->info = VAR_2;

 return VAR_3;
}
