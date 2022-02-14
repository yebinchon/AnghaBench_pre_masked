
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_cong_map {scalar_t__* m_page_addrs; } ;
typedef int __be16 ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,void*) ;

__attribute__((used)) static int FUNC_2(struct rds_cong_map *VAR_1, __be16 VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(VAR_2) / VAR_0;
 VAR_4 = FUNC_0(VAR_2) % VAR_0;

 return FUNC_1(VAR_4, (void *)VAR_1->m_page_addrs[VAR_3]);
}
