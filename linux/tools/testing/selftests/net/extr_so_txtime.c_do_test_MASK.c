
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int VAR_6 ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int ,char*,char,char*) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (struct sockaddr*,int ) ;
 int FUNC_8 (struct sockaddr*,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(struct sockaddr *VAR_9, socklen_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13;

 FUNC_5(VAR_8, "\nSO_TXTIME ipv%c clock %s\n",
   VAR_9->sa_family == VAR_1 ? '4' : '6',
   VAR_2 == VAR_0 ? "tai" : "monotonic");

 VAR_11 = FUNC_8(VAR_9, VAR_10);
 VAR_12 = FUNC_7(VAR_9, VAR_10);

 VAR_7 = FUNC_6();

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
  FUNC_3(VAR_11, &VAR_3[VAR_13]);
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
  FUNC_1(VAR_12, &VAR_5[VAR_13]);

 FUNC_2(VAR_12);

 if (FUNC_0(VAR_12))
  FUNC_4(1, VAR_6, "close r");
 if (FUNC_0(VAR_11))
  FUNC_4(1, VAR_6, "close t");
}
