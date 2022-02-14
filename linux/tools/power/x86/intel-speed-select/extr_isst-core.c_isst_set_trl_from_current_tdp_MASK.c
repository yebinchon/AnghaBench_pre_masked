
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp {int current_level; } ;


 int FUNC_0 (int,struct isst_pkg_ctdp*) ;
 int FUNC_1 (int,int ,int ,int*) ;
 int FUNC_2 (int,int,int,unsigned long long*) ;

int FUNC_3(int VAR_0, unsigned long long VAR_1)
{
 unsigned long long VAR_2;
 int VAR_3;

 if (VAR_1) {
  VAR_2 = VAR_1;
 } else {
  struct isst_pkg_ctdp VAR_4;
  int VAR_5[8];
  int VAR_6;

  VAR_3 = FUNC_0(VAR_0, &VAR_4);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_1(VAR_0, VAR_4.current_level, 0, VAR_5);
  if (VAR_3)
   return VAR_3;

  VAR_2 = 0;
  for (VAR_6 = 0; VAR_6 < 8; ++VAR_6) {
   unsigned long long VAR_7 = VAR_5[VAR_6];

   VAR_2 |= (VAR_7 << (VAR_6 * 8));
  }
 }
 VAR_3 = FUNC_2(VAR_0, 0x1AD, 1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
