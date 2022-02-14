
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct bucket_table {int dummy; } ;


 int FUNC_0 (struct rhashtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bucket_table* FUNC_1 (struct rhashtable*,unsigned int,int ) ;
 int FUNC_2 (struct bucket_table*) ;
 int FUNC_3 (struct rhashtable*,struct bucket_table*,struct bucket_table*) ;

__attribute__((used)) static int FUNC_4(struct rhashtable *VAR_2,
       struct bucket_table *VAR_3,
       unsigned int VAR_4)
{
 struct bucket_table *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  FUNC_2(VAR_5);

 return VAR_6;
}
