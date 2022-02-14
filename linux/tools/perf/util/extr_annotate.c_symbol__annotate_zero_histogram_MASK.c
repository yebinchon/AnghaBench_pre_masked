
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct sym_hist {int dummy; } ;
struct annotation {TYPE_1__* src; } ;
struct TYPE_2__ {int sizeof_sym_hist; } ;


 struct sym_hist* FUNC_0 (struct annotation*,int) ;
 int FUNC_1 (struct sym_hist*,int ,int ) ;
 struct annotation* FUNC_2 (struct symbol*) ;

void FUNC_3(struct symbol *VAR_0, int VAR_1)
{
 struct annotation *VAR_2 = FUNC_2(VAR_0);
 struct sym_hist *VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_3, 0, VAR_2->src->sizeof_sym_hist);
}
