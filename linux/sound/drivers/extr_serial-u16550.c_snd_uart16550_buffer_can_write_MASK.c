
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {scalar_t__ buff_in_count; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct snd_uart16550 *VAR_1,
       int VAR_2)
{
 if (VAR_1->buff_in_count + VAR_2 < VAR_0)
  return 1;
 else
  return 0;
}
