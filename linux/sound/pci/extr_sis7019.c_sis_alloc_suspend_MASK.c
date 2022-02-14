
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis7019 {int * suspend_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sis7019 *VAR_3)
{
 int VAR_4;






 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->suspend_state[VAR_4] = FUNC_0(4096, VAR_1);
  if (!VAR_3->suspend_state[VAR_4])
   return -VAR_0;
 }
 FUNC_1(VAR_3->suspend_state[0], 0, 4096);

 return 0;
}
