
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dsp_ops {int id; } ;


 int FUNC_0 (struct skl_dsp_ops const*) ;
 struct skl_dsp_ops const* VAR_0 ;

const struct skl_dsp_ops *FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].id == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
