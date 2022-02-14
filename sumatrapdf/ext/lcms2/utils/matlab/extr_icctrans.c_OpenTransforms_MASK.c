
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsHTRANSFORM ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void**,int,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int *,int ,void*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 scalar_t__ VAR_12 ;
 int * FUNC_12 (int ,double,int ) ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 void** VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static
void FUNC_13(int VAR_23, char *VAR_24[])
{

 cmsUInt32Number VAR_25, VAR_26, VAR_27;


 if (VAR_19) {

  int VAR_28;
  cmsHTRANSFORM VAR_29;


  VAR_21 = VAR_23 - VAR_22;
  for (VAR_28=0; VAR_28 < VAR_21; VAR_28++) {

   VAR_16[VAR_28] = FUNC_3(VAR_24[VAR_28+VAR_22]);
  }




  VAR_29 = FUNC_5(VAR_16, VAR_21,
   0, 0, VAR_2, FUNC_1());

  VAR_14 = FUNC_12(VAR_29, 4.2, 0);
  VAR_15 = ((void*)0);
  FUNC_7(VAR_29);

  VAR_1 = FUNC_8(VAR_14);
  VAR_4 = FUNC_10(VAR_14);
  VAR_18 = VAR_7;

 }
 else
  if (VAR_18) {

   VAR_14 = FUNC_11(VAR_8, "r");
   VAR_15 = ((void*)0);
   VAR_1 = FUNC_8(VAR_14);
   VAR_4 = FUNC_10(VAR_14);


  }
  else {

   VAR_14 = FUNC_3(VAR_8);
   VAR_15 = FUNC_3(VAR_9);

   VAR_1 = FUNC_8(VAR_14);
   VAR_4 = FUNC_8(VAR_15);

   if (FUNC_9(VAR_14) == VAR_12 ||
    FUNC_9(VAR_15) == VAR_12)
    FUNC_0("Use %cl flag for devicelink profiles!\n", VAR_6);

  }
  VAR_3 = FUNC_4(VAR_4);
  VAR_0 = FUNC_4(VAR_1);


  VAR_25 = FUNC_2(VAR_1, VAR_20);
  VAR_26 = FUNC_2(VAR_4, VAR_20);


  VAR_27 = FUNC_1();

  if (VAR_10 != ((void*)0)) {

   VAR_17 = FUNC_3(VAR_10);
   VAR_27 |= VAR_11;
  }




  VAR_13 = FUNC_6(VAR_14, VAR_25,
   VAR_15, VAR_26,
   VAR_17, VAR_2,
   VAR_5,
   VAR_27);

}
