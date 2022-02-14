
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int run_work; int tbl; } ;
struct bucket_table {unsigned int size; int future_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bucket_table* FUNC_0 (struct rhashtable*,unsigned int,int) ;
 int FUNC_1 (struct bucket_table*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rhashtable*,struct bucket_table*,struct bucket_table*) ;
 struct bucket_table* FUNC_5 (int ,struct rhashtable*) ;
 scalar_t__ FUNC_6 (struct rhashtable*,struct bucket_table*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct rhashtable *VAR_5,
        struct bucket_table *VAR_6)
{
 struct bucket_table *VAR_7;
 struct bucket_table *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_5->tbl, VAR_5);

 VAR_9 = VAR_6->size;

 VAR_10 = -VAR_0;

 if (FUNC_6(VAR_5, VAR_6))
  VAR_9 *= 2;

 else if (VAR_7 != VAR_6)
  goto fail;

 VAR_10 = -VAR_2;

 VAR_8 = FUNC_0(VAR_5, VAR_9, VAR_3 | VAR_4);
 if (VAR_8 == ((void*)0))
  goto fail;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_8);
 if (VAR_10) {
  FUNC_1(VAR_8);
  if (VAR_10 == -VAR_1)
   VAR_10 = 0;
 } else
  FUNC_7(&VAR_5->run_work);

 return VAR_10;

fail:

 if (FUNC_2(FUNC_3(VAR_6->future_tbl)))
  return 0;


 if (VAR_10 == -VAR_2)
  FUNC_7(&VAR_5->run_work);

 return VAR_10;
}
