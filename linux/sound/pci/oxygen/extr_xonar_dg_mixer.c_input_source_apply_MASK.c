
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {scalar_t__ input_sel; int * cs4245_shadow; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct oxygen*,size_t) ;

__attribute__((used)) static int FUNC_1(struct oxygen *VAR_8)
{
 struct dg *VAR_9 = VAR_8->model_data;

 VAR_9->cs4245_shadow[VAR_3] &= ~VAR_7;
 if (VAR_9->input_sel == VAR_0)
  VAR_9->cs4245_shadow[VAR_3] |= VAR_5;
 else if (VAR_9->input_sel == VAR_1)
  VAR_9->cs4245_shadow[VAR_3] |= VAR_6;
 else if (VAR_9->input_sel != VAR_2)
  VAR_9->cs4245_shadow[VAR_3] |= VAR_4;
 return FUNC_0(VAR_8, VAR_3);
}
