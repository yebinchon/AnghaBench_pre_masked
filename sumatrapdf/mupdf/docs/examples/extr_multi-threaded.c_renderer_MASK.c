
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int pagenumber; int * pix; int bbox; int * list; int * ctx; } ;
typedef int fz_rect ;
typedef int fz_pixmap ;
typedef int fz_display_list ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,int *) ;
 int VAR_1 ;

void *
FUNC_7(void *VAR_2)
{
 int VAR_3 = ((struct data *) VAR_2)->pagenumber;
 fz_context *VAR_4 = ((struct data *) VAR_2)->ctx;
 fz_display_list *VAR_5 = ((struct data *) VAR_2)->list;
 fz_rect VAR_6 = ((struct data *) VAR_2)->bbox;
 fz_pixmap *VAR_7 = ((struct data *) VAR_2)->pix;
 fz_device *VAR_8;

 FUNC_0(VAR_1, "thread at page %d loading!\n", VAR_3);





 VAR_4 = FUNC_1(VAR_4);




 FUNC_0(VAR_1, "thread at page %d rendering!\n", VAR_3);
 VAR_8 = FUNC_5(VAR_4, &VAR_0, VAR_7);
 FUNC_6(VAR_4, VAR_5, VAR_8, &VAR_0, &VAR_6, ((void*)0));
 FUNC_2(VAR_4, VAR_8);
 FUNC_4(VAR_4, VAR_8);



 FUNC_3(VAR_4);

 FUNC_0(VAR_1, "thread at page %d done!\n", VAR_3);

 return VAR_2;
}
