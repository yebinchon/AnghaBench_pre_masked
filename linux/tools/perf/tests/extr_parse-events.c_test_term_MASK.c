
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terms_test {int (* check ) (struct list_head*) ;int str; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*,int ) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct list_head*) ;

__attribute__((used)) static int FUNC_5(struct terms_test *VAR_0)
{
 struct list_head VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1);

 VAR_2 = FUNC_1(&VAR_1, VAR_0->str);
 if (VAR_2) {
  FUNC_3("failed to parse terms '%s', err %d\n",
    VAR_0->str , VAR_2);
  return VAR_2;
 }

 VAR_2 = VAR_0->check(&VAR_1);
 FUNC_2(&VAR_1);

 return VAR_2;
}
