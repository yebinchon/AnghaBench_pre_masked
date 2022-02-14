
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {size_t a; size_t b; scalar_t__ i; int z; } ;
typedef TYPE_1__ hash ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(hash *VAR_1, const char *VAR_2){
  u16 VAR_3, VAR_4, VAR_5;
  VAR_3 = VAR_4 = VAR_2[0];
  for(VAR_5=1; VAR_5<VAR_0; VAR_5++){
    VAR_3 += VAR_2[VAR_5];
    VAR_4 += VAR_3;
  }
  FUNC_0(VAR_1->z, VAR_2, VAR_0);
  VAR_1->a = VAR_3 & 0xffff;
  VAR_1->b = VAR_4 & 0xffff;
  VAR_1->i = 0;
}
