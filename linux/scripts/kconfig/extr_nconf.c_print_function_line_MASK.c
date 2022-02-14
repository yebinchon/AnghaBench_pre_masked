
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; int key_str; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int,char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_8;
 int VAR_9 = 1;
 const int VAR_10 = 1;
 int VAR_11 = FUNC_0(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  (void) FUNC_3(VAR_6, VAR_3[VAR_0]);
  FUNC_1(VAR_6, VAR_11-3, VAR_9,
    "%s",
    VAR_4[VAR_8].key_str);
  (void) FUNC_3(VAR_6, VAR_3[VAR_1]);
  VAR_9 += FUNC_2(VAR_4[VAR_8].key_str);
  FUNC_1(VAR_6, VAR_11-3,
    VAR_9, "%s",
    VAR_4[VAR_8].func);
  VAR_9 += FUNC_2(VAR_4[VAR_8].func) + VAR_10;
 }
 (void) FUNC_3(VAR_6, VAR_3[VAR_2]);
}
