
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sock; } ;


 int FUNC_0 (int ,int ,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_18 ;

void
FUNC_7(void)
{

 VAR_11 = VAR_5;
 VAR_10 = FUNC_2(VAR_14, VAR_11);
 VAR_12 = VAR_13 = VAR_9 = VAR_8 = 0;
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_1 = 0;


 FUNC_5(VAR_18, 0);
 if (!FUNC_6(VAR_4->sock))
  FUNC_3(VAR_0,
    (FUNC_4("could not set socket to nonblocking mode: %m")));


 VAR_2 = FUNC_1(VAR_14, 3);
 FUNC_0(VAR_2, VAR_17, VAR_4->sock,
       ((void*)0), ((void*)0));
 FUNC_0(VAR_2, VAR_15, -1, VAR_3, ((void*)0));
 FUNC_0(VAR_2, VAR_16, -1, ((void*)0), ((void*)0));
}
