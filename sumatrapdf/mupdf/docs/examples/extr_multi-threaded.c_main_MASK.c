
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct data {int pagenumber; int * list; int * pix; int bbox; int * ctx; } ;
typedef struct data pthread_t ;
typedef int pthread_mutex_t ;
typedef int fz_rect ;
typedef int fz_pixmap ;
typedef int fz_page ;
struct TYPE_3__ {int unlock; int lock; int * user; } ;
typedef TYPE_1__ fz_locks_context ;
typedef int fz_irect ;
typedef int fz_document ;
typedef int fz_display_list ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct data*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_15 (int *,int *,int) ;
 int * FUNC_16 (int *,TYPE_1__*,int ) ;
 int * FUNC_17 (int *,int *) ;
 int * FUNC_18 (int *,int *) ;
 int * FUNC_19 (int *,int ,int ,int *,int ) ;
 int * FUNC_20 (int *,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *,int *,int *,int *) ;
 int FUNC_24 (int *,int *,char*) ;
 int VAR_3 ;
 struct data* FUNC_25 (int) ;
 scalar_t__ FUNC_26 (struct data*,int *,int ,struct data*) ;
 scalar_t__ FUNC_27 (struct data,void**) ;
 scalar_t__ FUNC_28 (int *,int *) ;
 int VAR_4 ;
 int FUNC_29 (char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_30(int VAR_7, char **VAR_8)
{
 char *VAR_9 = VAR_7 >= 2 ? VAR_8[1] : "";
 pthread_t *VAR_10 = ((void*)0);
 fz_locks_context VAR_11;
 pthread_mutex_t VAR_12[VAR_0];
 fz_context *VAR_13;
 fz_document *VAR_14;
 int VAR_15;
 int VAR_16;



 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
 {
  if (FUNC_28(&VAR_12[VAR_16], ((void*)0)) != 0)
   FUNC_0("pthread_mutex_init()");
 }







 VAR_11.user = VAR_12;
 VAR_11.lock = VAR_3;
 VAR_11.unlock = VAR_6;





 VAR_13 = FUNC_16(((void*)0), &VAR_11, VAR_1);



 FUNC_21(VAR_13);




 VAR_14 = FUNC_20(VAR_13, VAR_9);




 VAR_15 = FUNC_7(VAR_13, VAR_14);
 FUNC_2(VAR_5, "spawning %d threads, one per page...\n", VAR_15);

 VAR_10 = FUNC_25(VAR_15 * sizeof (pthread_t));

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
 {
  fz_page *VAR_17;
  fz_rect VAR_18;
  fz_irect VAR_19;
  fz_display_list *VAR_20;
  fz_device *VAR_21;
  fz_pixmap *VAR_22;
  struct data *VAR_23;





  VAR_17 = FUNC_15(VAR_13, VAR_14, VAR_16);



  FUNC_4(VAR_13, VAR_17, &VAR_18);






  VAR_20 = FUNC_17(VAR_13, &VAR_18);




  VAR_21 = FUNC_18(VAR_13, VAR_20);
  FUNC_23(VAR_13, VAR_17, VAR_21, &VAR_2, ((void*)0));
  FUNC_6(VAR_13, VAR_21);
  FUNC_10(VAR_13, VAR_21);




  FUNC_13(VAR_13, VAR_17);



  VAR_22 = FUNC_19(VAR_13, FUNC_8(VAR_13), FUNC_22(&VAR_19, &VAR_18), ((void*)0), 0);
  FUNC_5(VAR_13, VAR_22, 0xff);




  VAR_23 = FUNC_25(sizeof (struct data));

  VAR_23->pagenumber = VAR_16 + 1;
  VAR_23->ctx = VAR_13;
  VAR_23->list = VAR_20;
  VAR_23->bbox = VAR_18;
  VAR_23->pix = VAR_22;



  if (FUNC_26(&VAR_10[VAR_16], ((void*)0), VAR_4, VAR_23) != 0)
   FUNC_0("pthread_create()");
 }




 FUNC_2(VAR_5, "joining %d threads...\n", VAR_15);
 for (VAR_16 = VAR_15 - 1; VAR_16 >= 0; VAR_16--)
 {
  char VAR_24[42];
  struct data *VAR_25;

  if (FUNC_27(VAR_10[VAR_16], (void **) &VAR_25) != 0)
   FUNC_0("pthread_join");

  FUNC_29(VAR_24, "out%04d.png", VAR_16);
  FUNC_2(VAR_5, "\tSaving %s...\n", VAR_24);



  FUNC_24(VAR_13, VAR_25->pix, VAR_24);




  FUNC_14(VAR_13, VAR_25->pix);
  FUNC_11(VAR_13, VAR_25->list);




  FUNC_3(VAR_25);
 }

 FUNC_2(VAR_5, "finally!\n");
 FUNC_1(((void*)0));

 FUNC_3(VAR_10);




 FUNC_12(VAR_13, VAR_14);
 FUNC_9(VAR_13);

 return 0;
}
