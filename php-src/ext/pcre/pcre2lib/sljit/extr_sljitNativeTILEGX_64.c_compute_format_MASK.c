
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Format {unsigned int pipe_mask; } ;
struct TYPE_4__ {TYPE_1__* opcode; } ;
struct TYPE_3__ {int pipes; } ;


 unsigned int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 struct Format* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

const struct Format* FUNC_1()
{
 unsigned int VAR_4 = FUNC_0(
  VAR_2[0].opcode->pipes,
  VAR_2[1].opcode->pipes,
  (VAR_3 == 3 ? VAR_2[2].opcode->pipes : (1 << VAR_0)));

 const struct Format* VAR_5 = ((void*)0);
 const struct Format *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 for (VAR_7 = 0; VAR_7 < sizeof VAR_1 / sizeof VAR_1[0]; VAR_7++) {
  VAR_6 = &VAR_1[VAR_7];
  if ((VAR_6->pipe_mask & VAR_4) == VAR_6->pipe_mask) {
   VAR_5 = VAR_6;
   break;
  }
 }

 return VAR_5;
}
