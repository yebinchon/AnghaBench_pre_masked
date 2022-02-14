
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long,long,int) ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_8, long VAR_9, u32 VAR_10,
          bool VAR_11)
{
 bool VAR_12 = 0;

 switch (VAR_10) {
 case 135:
  break;
 case 129:
  VAR_12 = VAR_11 && VAR_7 & VAR_5;
  break;
 case 134:
  VAR_12 = VAR_11 && VAR_7 & VAR_0;
  break;
 case 130:
  VAR_12 = VAR_11 && VAR_7 & VAR_4;
  break;
 case 128:
  VAR_12 = VAR_11 && VAR_7 & VAR_6;
  break;
 case 131:
  VAR_12 = VAR_7 & VAR_3;
  break;
 case 132:
  VAR_12 = VAR_7 & VAR_2;
  break;
 case 133:
 default:
  VAR_12 = VAR_7 & VAR_1;
 }







 if (!VAR_12)
  return;

 FUNC_0(VAR_8, VAR_9, VAR_10);
}
