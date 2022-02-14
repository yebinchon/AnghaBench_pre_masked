
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(gfp_t VAR_5)
{
 int VAR_6 = 1;
 int VAR_7;

again:
 VAR_7 = FUNC_0(&VAR_4, VAR_3, VAR_1, VAR_5);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_0) {

   if (VAR_6--) {
    VAR_3 = VAR_2;
    goto again;
   }
  }
  return VAR_7;
 }
 VAR_3 = VAR_7 + 1;

 return VAR_7;
}
