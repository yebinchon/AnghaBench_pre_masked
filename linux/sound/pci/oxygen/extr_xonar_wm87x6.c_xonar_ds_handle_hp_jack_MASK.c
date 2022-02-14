
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {unsigned int* wm8766_regs; int hp_jack; } ;
struct oxygen {int mutex; struct xonar_wm87x6* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct oxygen*,size_t,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct oxygen *VAR_6)
{
 struct xonar_wm87x6 *VAR_7 = VAR_6->model_data;
 bool VAR_8;
 unsigned int VAR_9;

 FUNC_0(&VAR_6->mutex);

 VAR_8 = !(FUNC_2(VAR_6, VAR_2) &
         VAR_0);

 FUNC_3(VAR_6, VAR_2,
         VAR_8 ? 0 : VAR_1,
         VAR_1);

 VAR_9 = VAR_7->wm8766_regs[VAR_4] & ~VAR_5;
 if (VAR_8)
  VAR_9 |= VAR_5;
 FUNC_5(VAR_6, VAR_4, VAR_9);

 FUNC_4(VAR_7->hp_jack, VAR_8 ? VAR_3 : 0);

 FUNC_1(&VAR_6->mutex);
}
