
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_iterator {int * buffer; int size; struct gcov_info* info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gcov_info*) ;
 int FUNC_1 (struct gcov_iterator*) ;
 struct gcov_iterator* FUNC_2 (int,int ) ;
 int * FUNC_3 (int ) ;

struct gcov_iterator *FUNC_4(struct gcov_info *VAR_1)
{
 struct gcov_iterator *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct gcov_iterator), VAR_0);
 if (!VAR_2)
  goto err_free;

 VAR_2->info = VAR_1;

 VAR_2->size = FUNC_0(((void*)0), VAR_1);
 VAR_2->buffer = FUNC_3(VAR_2->size);
 if (!VAR_2->buffer)
  goto err_free;

 FUNC_0(VAR_2->buffer, VAR_1);

 return VAR_2;

err_free:
 FUNC_1(VAR_2);
 return ((void*)0);
}
