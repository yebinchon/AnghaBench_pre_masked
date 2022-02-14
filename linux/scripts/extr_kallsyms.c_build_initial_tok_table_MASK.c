
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int sym; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if ( FUNC_1(&VAR_0[VAR_2]) ) {
   if (VAR_3 != VAR_2)
    VAR_0[VAR_3] = VAR_0[VAR_2];
   FUNC_0(VAR_0[VAR_3].sym, VAR_0[VAR_3].len);
   VAR_3++;
  }
 }
 VAR_1 = VAR_3;
}
