
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int dummy; } ;
struct sproto {struct pool memory; } ;


 int * FUNC_0 (struct sproto*,void const*,size_t) ;
 int FUNC_1 (struct sproto*,int ,int) ;
 struct sproto* FUNC_2 (struct pool*,int) ;
 int FUNC_3 (struct pool*) ;
 int FUNC_4 (struct pool*) ;

struct sproto *
FUNC_5(const void * VAR_0, size_t VAR_1) {
 struct pool VAR_2;
 struct sproto * VAR_3;
 FUNC_3(&VAR_2);
 VAR_3 = FUNC_2(&VAR_2, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->memory = VAR_2;
 if (FUNC_0(VAR_3, VAR_0, VAR_1) == ((void*)0)) {
  FUNC_4(&VAR_3->memory);
  return ((void*)0);
 }
 return VAR_3;
}
