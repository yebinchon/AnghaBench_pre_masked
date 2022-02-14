
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int * str; scalar_t__ len; int type; int role; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (struct context*,struct context*) ;

__attribute__((used)) static inline int FUNC_3(struct context *VAR_2, struct context *VAR_3)
{
 int VAR_4;

 VAR_2->user = VAR_3->user;
 VAR_2->role = VAR_3->role;
 VAR_2->type = VAR_3->type;
 if (VAR_3->str) {
  VAR_2->str = FUNC_1(VAR_3->str, VAR_1);
  if (!VAR_2->str)
   return -VAR_0;
  VAR_2->len = VAR_3->len;
 } else {
  VAR_2->str = ((void*)0);
  VAR_2->len = 0;
 }
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->str);
  return VAR_4;
 }
 return 0;
}
