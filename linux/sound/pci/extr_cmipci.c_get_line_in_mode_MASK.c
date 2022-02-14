
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {int chip_version; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct cmipci*,int ) ;
 unsigned int FUNC_1 (struct cmipci*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct cmipci *VAR_5)
{
 unsigned int VAR_6;
 if (VAR_5->chip_version >= 39) {
  VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (VAR_6 & (VAR_1 | VAR_0))
   return 2;
 }
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 & VAR_2)
  return 1;
 return 0;
}
