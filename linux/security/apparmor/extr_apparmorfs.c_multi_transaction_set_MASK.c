
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_transaction {size_t size; } ;
struct file {struct multi_transaction* private_data; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct multi_transaction*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_2,
      struct multi_transaction *VAR_3, size_t VAR_4)
{
 struct multi_transaction *VAR_5;

 FUNC_0(VAR_4 > VAR_0);

 VAR_3->size = VAR_4;
 FUNC_2(&VAR_1);
 VAR_5 = (struct multi_transaction *) VAR_2->private_data;
 VAR_2->private_data = VAR_3;
 FUNC_3(&VAR_1);
 FUNC_1(VAR_5);
}
