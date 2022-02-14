
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ux500_msp {scalar_t__ registers; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ux500_msp*) ;
 int FUNC_1 (struct ux500_msp*) ;
 int FUNC_2 (struct ux500_msp*) ;
 int FUNC_3 (struct ux500_msp*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ux500_msp *VAR_5, unsigned int VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;
 unsigned int VAR_9, VAR_10;

 VAR_7 = FUNC_4(VAR_5->registers + VAR_2);
 VAR_9 = VAR_6 & VAR_1;
 VAR_10 = VAR_6 & VAR_1;
 if (VAR_9 && VAR_10) {
  VAR_7 = FUNC_4(VAR_5->registers + VAR_2);
  FUNC_5(VAR_7 | VAR_0,
    VAR_5->registers + VAR_2);


  FUNC_3(VAR_5);


  FUNC_5((FUNC_4(VAR_5->registers + VAR_2) &
          (~VAR_4)), VAR_5->registers + VAR_2);


  FUNC_2(VAR_5);


  FUNC_5((FUNC_4(VAR_5->registers + VAR_2) &
    (~(VAR_3 | VAR_0))),
    VAR_5->registers + VAR_2);

  FUNC_1(VAR_5);
  FUNC_0(VAR_5);
 } else if (VAR_9)
  FUNC_1(VAR_5);
 else if (VAR_10)
  FUNC_0(VAR_5);

 return VAR_8;
}
