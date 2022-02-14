
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int (* disasm ) (int ,int) ;int user; } ;
typedef TYPE_1__ RPrint ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const RPrint* VAR_0, ut64 VAR_1, int VAR_2) {
 ut64 VAR_3 = VAR_1;

 if (!VAR_0->disasm || !VAR_0->user) {
  return 0;
 }

 VAR_2 = FUNC_0 (1, VAR_2);

 while (VAR_2-- > 0) {
  VAR_1 += VAR_0->disasm (VAR_0->user, VAR_1);
 }

 return VAR_1 - VAR_3;
}
