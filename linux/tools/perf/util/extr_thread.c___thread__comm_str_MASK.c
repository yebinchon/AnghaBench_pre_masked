
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct comm {int dummy; } ;


 char const* FUNC_0 (struct comm const*) ;
 struct comm* FUNC_1 (struct thread const*) ;

__attribute__((used)) static const char *FUNC_2(const struct thread *VAR_0)
{
 const struct comm *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_1);
}
