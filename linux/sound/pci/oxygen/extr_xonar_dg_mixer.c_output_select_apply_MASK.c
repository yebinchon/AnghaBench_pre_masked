
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {scalar_t__ output_sel; int * cs4245_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct oxygen*,size_t) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (struct oxygen*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct oxygen *VAR_7)
{
 struct dg *VAR_8 = VAR_7->model_data;

 VAR_8->cs4245_shadow[VAR_2] &= ~VAR_1;
 if (VAR_8->output_sel == VAR_5) {

  FUNC_2(VAR_7, VAR_4, VAR_3);
 } else if (VAR_8->output_sel == VAR_6) {




  FUNC_1(VAR_7, VAR_4, VAR_3);
  VAR_8->cs4245_shadow[VAR_2] |= VAR_0;
 } else {




  FUNC_1(VAR_7, VAR_4, VAR_3);
 }
 return FUNC_0(VAR_7, VAR_2);
}
