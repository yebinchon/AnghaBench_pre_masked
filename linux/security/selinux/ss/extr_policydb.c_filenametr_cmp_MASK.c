
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashtab {int dummy; } ;
struct filename_trans {int stype; int ttype; int tclass; int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hashtab *VAR_0, const void *VAR_1, const void *VAR_2)
{
 const struct filename_trans *VAR_3 = VAR_1;
 const struct filename_trans *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = VAR_3->stype - VAR_4->stype;
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->ttype - VAR_4->ttype;
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->tclass - VAR_4->tclass;
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_3->name, VAR_4->name);

}
