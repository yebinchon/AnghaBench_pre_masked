
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_transport {unsigned int (* stats_info_copy ) (struct rds_info_iterator*,unsigned int) ;} ;
struct rds_info_iterator {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct rds_info_iterator*) ;
 int VAR_1 ;
 unsigned int FUNC_3 (struct rds_info_iterator*,unsigned int) ;
 struct rds_transport** VAR_2 ;
 int FUNC_4 (int *) ;

unsigned int FUNC_5(struct rds_info_iterator *VAR_3,
           unsigned int VAR_4)

{
 struct rds_transport *VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_2(VAR_3);
 FUNC_0(&VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_5 = VAR_2[VAR_8];
  if (!VAR_5 || !VAR_5->stats_info_copy)
   continue;

  VAR_7 = VAR_5->stats_info_copy(VAR_3, VAR_4);
  VAR_4 -= FUNC_1(VAR_4, VAR_7);
  VAR_6 += VAR_7;
 }

 FUNC_4(&VAR_1);

 return VAR_6;
}
