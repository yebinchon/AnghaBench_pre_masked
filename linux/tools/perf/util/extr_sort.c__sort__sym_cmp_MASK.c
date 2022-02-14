
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ start; scalar_t__ end; int name; scalar_t__ inlined; } ;
typedef int int64_t ;


 int FUNC_0 (struct symbol*,struct symbol*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int64_t FUNC_2(struct symbol *VAR_0, struct symbol *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return FUNC_0(VAR_0, VAR_1);

 if (VAR_0 == VAR_1)
  return 0;

 if (VAR_0->inlined || VAR_1->inlined) {
  int VAR_2 = FUNC_1(VAR_0->name, VAR_1->name);

  if (VAR_2)
   return VAR_2;
  if ((VAR_0->start <= VAR_1->end) && (VAR_0->end >= VAR_1->start))
   return 0;
 }

 if (VAR_0->start != VAR_1->start)
  return (int64_t)(VAR_1->start - VAR_0->start);

 return (int64_t)(VAR_1->end - VAR_0->end);
}
