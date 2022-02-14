
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {int name; int system; } ;


 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 struct tep_event * const * VAR_2 = VAR_0;
 struct tep_event * const * VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_1((*VAR_2)->system, (*VAR_3)->system);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1((*VAR_2)->name, (*VAR_3)->name);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1);
}
