
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2c_hist_entry {int * hists; } ;
struct c2c_dimension {int width; } ;
struct TYPE_2__ {int hists; } ;


 TYPE_1__ VAR_0 ;
 struct c2c_dimension VAR_1 ;
 struct c2c_dimension VAR_2 ;

__attribute__((used)) static void FUNC_0(struct c2c_hist_entry *VAR_3, int VAR_4)
{
 struct c2c_dimension *VAR_5;

 VAR_5 = &VAR_0.hists == VAR_3->hists ?
       &VAR_1 : &VAR_2;

 if (VAR_4 > VAR_5->width)
  VAR_5->width = VAR_4;
}
