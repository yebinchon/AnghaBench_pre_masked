
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation {scalar_t__ have_cycles; TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ show_minmax_cycle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct annotation *VAR_3)
{
 if (VAR_3->have_cycles && VAR_3->options->show_minmax_cycle)
  return VAR_1 + VAR_2;

 return VAR_3->have_cycles ? VAR_1 + VAR_0 : 0;
}
