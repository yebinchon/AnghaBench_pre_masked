
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lx6464es {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lx6464es*,int ) ;
 int FUNC_1 (struct lx6464es*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct lx6464es *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2);


 if (VAR_5 & VAR_0) {
  u32 VAR_6;
  VAR_5 = VAR_1;

  while ((VAR_6 = FUNC_0(VAR_4, VAR_3))) {

   VAR_5 |= VAR_6;
   FUNC_1(VAR_4, VAR_3, VAR_6);
  }

  return VAR_5;
 }
 return VAR_1;
}
