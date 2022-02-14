
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int len; int array; } ;
struct dstr {int array; } ;
struct darray {int dummy; } ;
struct config_item {int value; int name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,struct darray*,struct config_item*) ;
 int FUNC_2 (struct dstr*,struct strref*) ;
 int FUNC_3 (struct dstr*) ;

__attribute__((used)) static void FUNC_4(struct darray *VAR_0, struct strref *VAR_1,
       struct strref *VAR_2)
{
 struct config_item VAR_3;
 struct dstr VAR_4;
 FUNC_2(&VAR_4, VAR_2);

 FUNC_3(&VAR_4);

 VAR_3.name = FUNC_0(VAR_1->array, VAR_1->len);
 VAR_3.value = VAR_4.array;
 FUNC_1(sizeof(struct config_item), VAR_0, &VAR_3);
}
