
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
struct sproto {int dummy; } ;
struct protocol {struct sproto_type** p; } ;


 struct protocol* FUNC_0 (struct sproto const*,int) ;

struct sproto_type *
FUNC_1(const struct sproto *VAR_0, int VAR_1, int VAR_2) {
 struct protocol * VAR_3;
 if (VAR_2 <0 || VAR_2 >1) {
  return ((void*)0);
 }
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  return VAR_3->p[VAR_2];
 }
 return ((void*)0);
}
