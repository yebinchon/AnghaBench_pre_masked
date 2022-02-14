
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int pgsocket ;
typedef int WaitEventSet ;
struct TYPE_3__ {int events; } ;
typedef TYPE_1__ WaitEvent ;
typedef int Latch ;


 int FUNC_0 (int *,int,int ,int *,int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,long,TYPE_1__*,int,int ) ;

int
FUNC_5(Latch *VAR_8, int VAR_9, pgsocket VAR_10,
      long VAR_11, uint32 VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 WaitEvent VAR_15;
 WaitEventSet *VAR_16 = FUNC_2(VAR_0, 3);

 if (VAR_9 & VAR_7)
  FUNC_1(VAR_11 >= 0);
 else
  VAR_11 = -1;

 if (VAR_9 & VAR_4)
  FUNC_0(VAR_16, VAR_4, VAR_2,
        VAR_8, ((void*)0));


 FUNC_1(!VAR_1 ||
     (VAR_9 & VAR_3) ||
     (VAR_9 & VAR_5));

 if ((VAR_9 & VAR_5) && VAR_1)
  FUNC_0(VAR_16, VAR_5, VAR_2,
        ((void*)0), ((void*)0));

 if ((VAR_9 & VAR_3) && VAR_1)
  FUNC_0(VAR_16, VAR_3, VAR_2,
        ((void*)0), ((void*)0));

 if (VAR_9 & VAR_6)
 {
  int VAR_17;

  VAR_17 = VAR_9 & VAR_6;
  FUNC_0(VAR_16, VAR_17, VAR_10, ((void*)0), ((void*)0));
 }

 VAR_14 = FUNC_4(VAR_16, VAR_11, &VAR_15, 1, VAR_12);

 if (VAR_14 == 0)
  VAR_13 |= VAR_7;
 else
 {
  VAR_13 |= VAR_15.events & (VAR_4 |
          VAR_5 |
          VAR_6);
 }

 FUNC_3(VAR_16);

 return VAR_13;
}
