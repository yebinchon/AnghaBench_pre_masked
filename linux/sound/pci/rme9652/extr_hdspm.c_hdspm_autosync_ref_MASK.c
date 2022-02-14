
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_14)
{

 if (VAR_0 == VAR_14->io_type) {

  unsigned int VAR_15 = FUNC_0(VAR_14, VAR_11);
  unsigned int VAR_16 = (VAR_15 >> VAR_4) & 0xF;
  if ((VAR_16 >= VAR_3) &&
    (VAR_16 <= VAR_2)) {
   return VAR_16;
  }
  return VAR_1;

 } else if (VAR_13 == VAR_14->io_type) {

  unsigned int VAR_17 = FUNC_0(VAR_14, VAR_12);
  switch (VAR_17 & VAR_10) {
  case 128:
   return VAR_9;
  case 132:
   return VAR_5;
  case 129:
   return VAR_8;
  case 130:
   return VAR_7;
  case 131:
   return VAR_6;
  default:
   return VAR_6;
  }

 }
 return 0;
}
