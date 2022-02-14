
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_packet {int base; int member_0; } ;
struct ff_decoder {int finished; int * clock; int abort; } ;
typedef int AVFrame ;


 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ff_decoder*,struct ff_packet*,int *,int*) ;
 int FUNC_5 (int **) ;
 double FUNC_6 (struct ff_decoder*,int *) ;
 int FUNC_7 (struct ff_decoder*,int *,double) ;

void *FUNC_8(void *VAR_0)
{
 struct ff_decoder *VAR_1 = VAR_0;

 struct ff_packet VAR_2 = {0};
 bool VAR_3;
 AVFrame *VAR_4 = FUNC_0();
 int VAR_5;

 while (!VAR_1->abort) {
  VAR_5 = FUNC_4(VAR_1, &VAR_2, VAR_4, &VAR_3);
  if (VAR_5 == 0) {
   break;
  } else if (VAR_5 < 0) {
   FUNC_3(&VAR_2.base);
   continue;
  }


  if (VAR_3) {




   double VAR_6 =
           FUNC_6(VAR_1, VAR_4);
   FUNC_7(VAR_1, VAR_4, VAR_6);
   FUNC_2(VAR_4);
  }

  FUNC_3(&VAR_2.base);
 }

 if (VAR_1->clock != ((void*)0))
  FUNC_5(&VAR_1->clock);

 FUNC_1(&VAR_4);

 VAR_1->finished = 1;

 return ((void*)0);
}
