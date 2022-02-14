
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int,int,double,double) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int,int ) ;
 int FUNC_7 (int ,int *) ;
 double FUNC_8 (int ) ;
 double FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int,int,int) ;

void
FUNC_13 (
       gdImagePtr VAR_0,
       double VAR_1,
       int VAR_2,
       int VAR_3,
       char *VAR_4)
{
  gdImagePtr VAR_5;
  FILE *VAR_6;

  VAR_5 = FUNC_4 ((int) (FUNC_8 (VAR_0) * VAR_1),
       (int) (FUNC_9 (VAR_0) * VAR_1));
  FUNC_2 (VAR_5, VAR_2);


  FUNC_6 (VAR_5, (int) (FUNC_8 (VAR_0) * VAR_1 / 2),
        (int) (FUNC_9 (VAR_0) * VAR_1 / 2),
        FUNC_12 (192, 192, 255));






  FUNC_3 (VAR_5, VAR_0,
   0, 0,
   0, 0,
       (int) (FUNC_8 (VAR_0) * VAR_1), (int) (FUNC_9 (VAR_0) * VAR_1),
   FUNC_8 (VAR_0), FUNC_9 (VAR_0));

  VAR_6 = FUNC_1 (VAR_4, "wb");





  FUNC_10 (VAR_5, !VAR_2);


  if (VAR_3)
    {

      FUNC_11 (VAR_5, 1, 256);
    }

  FUNC_7 (VAR_5, VAR_6);
  FUNC_0 (VAR_6);

  FUNC_5 (VAR_5);
}
