
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int etag_remote; int cache; } ;
struct dstr {int array; int member_0; } ;
typedef int obs_data_t ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,int ) ;
 int FUNC_2 (struct dstr*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct update_info *VAR_0)
{
 struct dstr VAR_1 = {0};

 if (!VAR_0->etag_remote)
  return;

 FUNC_1(&VAR_1, VAR_0->cache);
 FUNC_0(&VAR_1, "meta.json");

 obs_data_t *VAR_2;
 VAR_2 = FUNC_3();
 FUNC_6(VAR_2, "etag", VAR_0->etag_remote);
 FUNC_5(VAR_2, VAR_1.array);
 FUNC_4(VAR_2);

 FUNC_2(&VAR_1);
}
