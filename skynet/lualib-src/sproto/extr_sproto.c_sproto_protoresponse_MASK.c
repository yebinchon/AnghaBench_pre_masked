
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int dummy; } ;
struct protocol {scalar_t__ confirm; scalar_t__* p; } ;


 size_t VAR_0 ;
 struct protocol* FUNC_0 (struct sproto const*,int) ;

int
FUNC_1(const struct sproto * VAR_1, int VAR_2) {
 struct protocol * VAR_3 = FUNC_0(VAR_1, VAR_2);
 return (VAR_3!=((void*)0) && (VAR_3->p[VAR_0] || VAR_3->confirm));
}
