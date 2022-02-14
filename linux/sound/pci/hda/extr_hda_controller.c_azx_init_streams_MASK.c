
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx_dev {int dummy; } ;
struct azx {int num_streams; int driver_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx_dev*) ;
 struct azx_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 int FUNC_4 (struct azx*,int) ;

int FUNC_5(struct azx *VAR_3)
{
 int VAR_4;
 int VAR_5[2] = { 0, 0 };





 for (VAR_4 = 0; VAR_4 < VAR_3->num_streams; VAR_4++) {
  struct azx_dev *VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
  int VAR_7, VAR_8;

  if (!VAR_6)
   return -VAR_1;

  VAR_7 = FUNC_4(VAR_3, VAR_4);






  if (VAR_3->driver_caps & VAR_0)
   VAR_8 = ++VAR_5[VAR_7];
  else
   VAR_8 = VAR_4 + 1;
  FUNC_3(FUNC_0(VAR_3), FUNC_1(VAR_6),
         VAR_4, VAR_7, VAR_8);
 }

 return 0;
}
