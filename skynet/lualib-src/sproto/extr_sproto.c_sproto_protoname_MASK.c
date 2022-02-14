
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int dummy; } ;
struct protocol {char const* name; } ;


 struct protocol* FUNC_0 (struct sproto const*,int) ;

const char *
FUNC_1(const struct sproto *VAR_0, int VAR_1) {
 struct protocol * VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  return VAR_2->name;
 }
 return ((void*)0);
}
