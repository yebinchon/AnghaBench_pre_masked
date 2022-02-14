
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {int output_sel; } ;


 unsigned int VAR_0 ;
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



 int FUNC_0 (struct oxygen*,int ,int,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,int ) ;

unsigned int FUNC_2(struct oxygen *VAR_14,
       unsigned int VAR_15)
{
 struct dg *VAR_16 = VAR_14->model_data;

 switch (VAR_16->output_sel) {
 case 130:
 case 129:
  FUNC_0(VAR_14, VAR_13,
   VAR_9 | VAR_10 |
   VAR_11, VAR_12);
  break;
 case 128:
  FUNC_0(VAR_14, VAR_13,
   VAR_8, VAR_12);
  break;
 }
 return (VAR_15 & VAR_0) |
        FUNC_1(VAR_15,
     VAR_5,
     VAR_3,
     VAR_2) |
        FUNC_1(VAR_15,
     VAR_3,
     VAR_5,
     VAR_4) |
        FUNC_1(VAR_15,
     VAR_1,
     VAR_7,
     VAR_6);
}
