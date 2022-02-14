
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {int name; int system; } ;
typedef int regex_t ;


 int FUNC_0 (int *,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct tep_event *VAR_0,
         regex_t *VAR_1, regex_t *VAR_2)
{
 if (VAR_1) {
  return !FUNC_0(VAR_1, VAR_0->system, 0, ((void*)0), 0) &&
   !FUNC_0(VAR_2, VAR_0->name, 0, ((void*)0), 0);
 }

 return !FUNC_0(VAR_2, VAR_0->system, 0, ((void*)0), 0) ||
  !FUNC_0(VAR_2, VAR_0->name, 0, ((void*)0), 0);
}
