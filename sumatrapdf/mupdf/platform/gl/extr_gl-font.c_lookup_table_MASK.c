
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_3__ {int font; } ;
struct TYPE_4__ {TYPE_1__ key; } ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned int FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*,TYPE_1__*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct key *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2) % VAR_0;
 while (1)
 {
  if (!VAR_1[VAR_3].key.font)
   return VAR_3;
  if (!FUNC_1(VAR_2, &VAR_1[VAR_3].key, sizeof(struct key)))
   return VAR_3;
  VAR_3 = (VAR_3 + 1) % VAR_0;
 }
}
