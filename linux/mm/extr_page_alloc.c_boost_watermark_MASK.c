
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {scalar_t__ watermark_boost; int * _watermark; } ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long) ;
 unsigned long FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_3(struct zone *VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_2(VAR_3->_watermark[VAR_0],
   VAR_2, 10000);
 if (!VAR_4)
  return;

 VAR_4 = FUNC_0(VAR_1, VAR_4);

 VAR_3->watermark_boost = FUNC_1(VAR_3->watermark_boost + VAR_1,
  VAR_4);
}
