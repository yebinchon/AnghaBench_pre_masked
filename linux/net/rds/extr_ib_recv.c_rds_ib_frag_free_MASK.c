
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_page_frag {int f_cache_entry; int f_sg; } ;
struct rds_ib_connection {int i_cache_allocs; int i_cache_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,struct rds_page_frag*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rds_ib_connection *VAR_3,
        struct rds_page_frag *VAR_4)
{
 FUNC_3("frag %p page %p\n", VAR_4, FUNC_4(&VAR_4->f_sg));

 FUNC_1(&VAR_4->f_cache_entry, &VAR_3->i_cache_frags);
 FUNC_0(VAR_0 / VAR_1, &VAR_3->i_cache_allocs);
 FUNC_2(VAR_2, VAR_0);
}
