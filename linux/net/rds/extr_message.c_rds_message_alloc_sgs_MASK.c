
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rds_message {int m_used_sgs; int m_total_sgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct scatterlist*,int) ;

struct scatterlist *FUNC_3(struct rds_message *VAR_2, int VAR_3,
       int *VAR_4)
{
 struct scatterlist *VAR_5 = (struct scatterlist *) &VAR_2[1];
 struct scatterlist *VAR_6;

 if (FUNC_0(!VAR_4))
  return ((void*)0);

 if (VAR_3 <= 0) {
  FUNC_1("rds: alloc sgs failed! nents <= 0\n");
  *VAR_4 = -VAR_0;
  return ((void*)0);
 }

 if (VAR_2->m_used_sgs + VAR_3 > VAR_2->m_total_sgs) {
  FUNC_1("rds: alloc sgs failed! total %d used %d nents %d\n",
   VAR_2->m_total_sgs, VAR_2->m_used_sgs, VAR_3);
  *VAR_4 = -VAR_1;
  return ((void*)0);
 }

 VAR_6 = &VAR_5[VAR_2->m_used_sgs];
 FUNC_2(VAR_6, VAR_3);
 VAR_2->m_used_sgs += VAR_3;

 return VAR_6;
}
