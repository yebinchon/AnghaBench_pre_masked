
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {unsigned int* wm8766_regs; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct oxygen*,size_t,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_7, bool VAR_8)
{
 struct xonar_wm87x6 *VAR_9 = VAR_7->model_data;
 unsigned int VAR_10;





 VAR_10 = VAR_9->wm8766_regs[VAR_0] &
  ~(VAR_3 | VAR_5);
 if (VAR_8)
  VAR_10 |= VAR_2 | VAR_4;
 else
  VAR_10 |= VAR_1 | VAR_6;
 FUNC_0(VAR_7, VAR_0, VAR_10);
}
