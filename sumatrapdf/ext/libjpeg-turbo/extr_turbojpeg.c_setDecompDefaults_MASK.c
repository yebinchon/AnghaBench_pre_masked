
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_decompress_struct {int dct_method; int out_color_space; } ;


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
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct jpeg_decompress_struct *VAR_14,
 int VAR_15, int VAR_16)
{
 int VAR_17=0;

 switch(VAR_15)
 {
  case 133:
   VAR_14->out_color_space=VAR_10; break;
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
   VAR_14->out_color_space=VAR_11; break;

  default:
   FUNC_0("Unsupported pixel format");
 }

 if(VAR_16&VAR_13) VAR_14->dct_method=VAR_12;

 bailout:
 return VAR_17;
}
