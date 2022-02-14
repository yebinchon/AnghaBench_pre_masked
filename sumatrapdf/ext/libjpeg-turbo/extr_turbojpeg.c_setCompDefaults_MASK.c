
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jpeg_compress_struct {TYPE_1__* comp_info; int dct_method; int input_components; int in_color_space; } ;
struct TYPE_2__ {int h_samp_factor; int v_samp_factor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct jpeg_compress_struct*,int ) ;
 int FUNC_1 (struct jpeg_compress_struct*) ;
 int FUNC_2 (struct jpeg_compress_struct*,int,int ) ;
 int* VAR_14 ;
 int* VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static int FUNC_3(struct jpeg_compress_struct *VAR_17,
 int VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
 int VAR_22=0;

 switch(VAR_18)
 {
  case 133:
   VAR_17->in_color_space=VAR_6; break;
  case 132:
  case 136:
  case 130:
  case 134:
  case 128:
  case 129:
  case 131:
  case 135:
  case 137:
  case 138:
   VAR_17->in_color_space=VAR_7; VAR_18=132;
   break;

 }

 VAR_17->input_components=VAR_16[VAR_18];
 FUNC_1(VAR_17);
 if(VAR_20>=0)
 {
  FUNC_2(VAR_17, VAR_20, VAR_13);
  if(VAR_20>=96 || VAR_21&VAR_11) VAR_17->dct_method=VAR_10;
  else VAR_17->dct_method=VAR_9;
 }
 if(VAR_19==VAR_12)
  FUNC_0(VAR_17, VAR_6);
 else
  FUNC_0(VAR_17, VAR_8);

 VAR_17->comp_info[0].h_samp_factor=VAR_15[VAR_19]/8;
 VAR_17->comp_info[1].h_samp_factor=1;
 VAR_17->comp_info[2].h_samp_factor=1;
 VAR_17->comp_info[0].v_samp_factor=VAR_14[VAR_19]/8;
 VAR_17->comp_info[1].v_samp_factor=1;
 VAR_17->comp_info[2].v_samp_factor=1;

 return VAR_22;
}
