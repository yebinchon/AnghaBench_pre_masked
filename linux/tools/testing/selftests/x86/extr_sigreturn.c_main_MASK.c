
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;


 unsigned short FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned short VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int,unsigned short,int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int,int,int) ;

int FUNC_9()
{
 int VAR_16 = 0;
 unsigned short VAR_17, VAR_18;

 asm volatile ("mov %%cs,%0" : "=r" (VAR_17));
 asm volatile ("mov %%ss,%0" : "=r" (VAR_18));
 FUNC_4();

 stack_t VAR_19 = {
  .ss_sp = VAR_7,
  .ss_size = VAR_4,
 };
 if (FUNC_5(&VAR_19, ((void*)0)) != 0)
  FUNC_2(1, "sigaltstack");

 FUNC_3(VAR_6, VAR_15, 0);
 FUNC_3(VAR_5, VAR_14, VAR_0);


 VAR_16 += FUNC_8(64, 0, -1);
 VAR_16 += FUNC_8(32, 0, -1);
 VAR_16 += FUNC_8(16, 0, -1);
 VAR_16 += FUNC_8(64, 1, -1);
 VAR_16 += FUNC_8(32, 1, -1);
 VAR_16 += FUNC_8(16, 1, -1);

 if (VAR_8) {







  VAR_16 += FUNC_8(64, 1,
          FUNC_0(VAR_8));
  VAR_16 += FUNC_8(32, 1,
          FUNC_0(VAR_8));
  VAR_16 += FUNC_8(16, 1,
          FUNC_0(VAR_8));
 }



 VAR_13 = 1;
 VAR_16 += FUNC_8(32, 0, -1);
 VAR_16 += FUNC_8(32, 1, -1);
 VAR_13 = 0;
 FUNC_1(VAR_5);
 FUNC_3(VAR_3, VAR_14, VAR_0);
 FUNC_3(VAR_1, VAR_14, VAR_0);
 FUNC_3(VAR_2, VAR_14, VAR_0);


 FUNC_6(64, VAR_10, -1);
 FUNC_6(32, VAR_10, -1);
 FUNC_6(16, VAR_10, -1);


 FUNC_6(64, VAR_17, -1);
 FUNC_6(32, VAR_17, -1);
 FUNC_6(16, VAR_17, -1);


 FUNC_6(32, VAR_18, VAR_11);
 FUNC_6(32, VAR_12, -1);







 if (VAR_9)
  FUNC_6(32, FUNC_0(VAR_9), -1);


 VAR_16 += FUNC_7();


 return VAR_16 ? 1 : 0;
}
