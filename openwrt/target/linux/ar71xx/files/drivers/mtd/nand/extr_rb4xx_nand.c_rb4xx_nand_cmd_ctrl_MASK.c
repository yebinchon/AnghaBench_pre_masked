
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_8, int VAR_9,
    unsigned int VAR_10)
{
 if (VAR_10 & VAR_3) {
  FUNC_0(VAR_6,
     (VAR_10 & VAR_1) ? 1 : 0);
  FUNC_0(VAR_5,
     (VAR_10 & VAR_0) ? 1 : 0);
  FUNC_0(VAR_7,
     (VAR_10 & VAR_4) ? 0 : 1);
 }

 if (VAR_9 != VAR_2)
  FUNC_1(VAR_9);
}
