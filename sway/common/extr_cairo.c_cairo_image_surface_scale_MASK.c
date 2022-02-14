
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cairo_t ;
typedef int cairo_surface_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,double,double) ;
 int FUNC_7 (int *,int *,int ,int ) ;

cairo_surface_t *FUNC_8(cairo_surface_t *VAR_1,
  int VAR_2, int VAR_3) {
 int VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = FUNC_3(VAR_1);

 cairo_surface_t *VAR_6 =
  FUNC_2(VAR_0, VAR_2, VAR_3);
 cairo_t *VAR_7 = FUNC_0(VAR_6);
 FUNC_6(VAR_7, (double)VAR_2 / VAR_4,
   (double)VAR_3 / VAR_5);
 FUNC_7(VAR_7, VAR_1, 0, 0);

 FUNC_5(VAR_7);
 FUNC_1(VAR_7);
 return VAR_6;
}
