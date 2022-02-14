
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meta_obj {int len; scalar_t__ value; } ;


 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static int FUNC_1(struct meta_obj *VAR_0, struct meta_obj *VAR_1)
{
 int VAR_2 = VAR_0->len - VAR_1->len;

 if (VAR_2 == 0)
  VAR_2 = FUNC_0((void *) VAR_0->value, (void *) VAR_1->value, VAR_0->len);

 return VAR_2;
}
