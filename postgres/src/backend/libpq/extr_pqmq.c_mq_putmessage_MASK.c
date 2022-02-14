
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ shm_mq_result ;
struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ shm_mq_iovec ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int,int ,int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_7(char VAR_13, const char *VAR_14, size_t VAR_15)
{
 shm_mq_iovec VAR_16[2];
 shm_mq_result VAR_17;
 if (VAR_9)
 {
  if (VAR_10 != ((void*)0))
   FUNC_5(VAR_10);
  VAR_10 = ((void*)0);
  return VAR_0;
 }







 if (VAR_10 == ((void*)0))
  return 0;

 VAR_9 = 1;

 VAR_16[0].data = &VAR_13;
 VAR_16[0].len = 1;
 VAR_16[1].data = VAR_14;
 VAR_16[1].len = VAR_15;

 FUNC_0(VAR_10 != ((void*)0));

 for (;;)
 {
  VAR_17 = FUNC_6(VAR_10, VAR_16, 2, 1);

  if (VAR_12 != 0)
   FUNC_3(VAR_12,
         VAR_2,
         VAR_11);

  if (VAR_17 != VAR_5)
   break;

  (void) FUNC_4(VAR_1, VAR_8 | VAR_7, 0,
       VAR_6);
  FUNC_2(VAR_1);
  FUNC_1();
 }

 VAR_9 = 0;

 FUNC_0(VAR_17 == VAR_4 || VAR_17 == VAR_3);
 if (VAR_17 != VAR_4)
  return VAR_0;
 return 0;
}
