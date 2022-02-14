
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* j_decompress_ptr ;
struct TYPE_5__ {int num_components; TYPE_1__* comp_info; } ;
struct TYPE_4__ {int h_samp_factor; int v_samp_factor; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(j_decompress_ptr VAR_4)
{
 int VAR_5=-1, VAR_6, VAR_7;
 for(VAR_6=0; VAR_6<VAR_0; VAR_6++)
 {
  if(VAR_4->num_components==VAR_1[VAR_6])
  {
   if(VAR_4->comp_info[0].h_samp_factor==VAR_3[VAR_6]/8
    && VAR_4->comp_info[0].v_samp_factor==VAR_2[VAR_6]/8)
   {
    int VAR_8=0;
    for(VAR_7=1; VAR_7<VAR_4->num_components; VAR_7++)
    {
     if(VAR_4->comp_info[VAR_7].h_samp_factor==1
      && VAR_4->comp_info[VAR_7].v_samp_factor==1)
      VAR_8++;
    }
    if(VAR_8==VAR_4->num_components-1)
    {
     VAR_5=VAR_6; break;
    }
   }
  }
 }
 return VAR_5;
}
