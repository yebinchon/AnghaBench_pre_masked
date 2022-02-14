
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size_class {unsigned long objs_per_zspage; unsigned long pages_per_zspage; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct size_class*,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct size_class *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = FUNC_0(VAR_2, VAR_0);
 unsigned long VAR_5 = FUNC_0(VAR_2, VAR_1);

 if (VAR_4 <= VAR_5)
  return 0;

 VAR_3 = VAR_4 - VAR_5;
 VAR_3 /= VAR_2->objs_per_zspage;

 return VAR_3 * VAR_2->pages_per_zspage;
}
