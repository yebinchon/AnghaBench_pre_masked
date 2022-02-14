
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_14__ {int iTable; int pLeft; } ;
struct TYPE_13__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 char FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int,int) ;
 int FUNC_12 (int *,int ,int,int,int) ;
 int FUNC_13 (int *,int ,int,int,int ,char*,int) ;
 int FUNC_14 (int *,int ,int,int,int,int) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static void FUNC_16(
  Parse *VAR_13,
  Expr *VAR_14,
  int VAR_15,
  int VAR_16
){
  int VAR_17 = 0;
  char VAR_18;
  int VAR_19;
  int VAR_20;
  Vdbe *VAR_21;




  VAR_21 = VAR_13->pVdbe;
  FUNC_2( VAR_21!=0 );
  FUNC_1((VAR_21, "begin IN expr"));
  VAR_19 = FUNC_7(VAR_13, VAR_14, &VAR_17);





  VAR_18 = FUNC_3(VAR_14);



  FUNC_5(VAR_13);
  VAR_20 = FUNC_8(VAR_13);
  FUNC_6(VAR_13, VAR_14->pLeft, VAR_20);




  if( VAR_16==VAR_15 ){


    FUNC_11(VAR_21, VAR_7, VAR_20, VAR_16);
  }else{
    int VAR_22 = FUNC_10(VAR_21, VAR_11, VAR_20);
    FUNC_11(VAR_21, VAR_12, VAR_14->iTable, VAR_15);
    FUNC_11(VAR_21, VAR_4, 0, VAR_16);
    FUNC_15(VAR_21, VAR_22);
  }

  if( VAR_19==VAR_0 ){


    FUNC_11(VAR_21, VAR_8, VAR_20, VAR_15);
    FUNC_12(VAR_21, VAR_9, VAR_14->iTable, VAR_15, VAR_20);
  }else{


    FUNC_13(VAR_21, VAR_2, VAR_20, 1, 0, &VAR_18, 1);







    if( VAR_17==0 || VAR_15==VAR_16 ){







      FUNC_14(VAR_21, VAR_10, VAR_14->iTable, VAR_15, VAR_20, 1);

    }else{




      int VAR_23, VAR_24, VAR_25;





      VAR_23 = FUNC_14(VAR_21, VAR_3, VAR_14->iTable, 0, VAR_20, 1);







      VAR_24 = FUNC_10(VAR_21, VAR_11, VAR_17);
      VAR_25 = FUNC_14(VAR_21, VAR_3, VAR_14->iTable, 0, VAR_17, 1);
      FUNC_11(VAR_21, VAR_6, -1, VAR_17);
      FUNC_15(VAR_21, VAR_25);
      FUNC_11(VAR_21, VAR_1, VAR_17, 1);
      FUNC_15(VAR_21, VAR_24);




      FUNC_11(VAR_21, VAR_5, VAR_17, VAR_16);
      FUNC_11(VAR_21, VAR_4, 0, VAR_15);




      FUNC_15(VAR_21, VAR_23);
    }
  }
  FUNC_9(VAR_13, VAR_20);
  FUNC_4(VAR_13, 1);
  FUNC_0((VAR_21, "end IN expr"));
}
