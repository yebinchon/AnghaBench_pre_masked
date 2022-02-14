
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct mq_attr {int mq_msgsize; } ;
typedef scalar_t__ mqd_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct mq_attr*) ;
 scalar_t__ FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (scalar_t__,char*,int,int *,struct timespec*) ;
 int FUNC_5 (char*) ;
 struct timespec FUNC_6 (struct timespec,int) ;
 int FUNC_7 (struct timespec,struct timespec) ;

int FUNC_8(void)
{

 mqd_t VAR_8;
 struct mq_attr VAR_9;
 struct timespec VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_8 = FUNC_3("/foo", VAR_3 | VAR_4, 0666, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_5("mq_open");
  return -1;
 }
 FUNC_2(VAR_8, &VAR_9);


 VAR_15 = 100;
 FUNC_0(VAR_0, &VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  char VAR_17[VAR_9.mq_msgsize];

  FUNC_0(VAR_1, &VAR_12);
  VAR_13 = VAR_12;
  VAR_13 = FUNC_6(VAR_12, VAR_5);

  VAR_16 = FUNC_4(VAR_8, VAR_17, sizeof(VAR_17), ((void*)0), &VAR_13);
  if (VAR_16 < 0 && VAR_7 != VAR_2) {
   FUNC_5("mq_timedreceive");
   return -1;
  }
 }
 FUNC_0(VAR_0, &VAR_11);

 FUNC_1(VAR_8);

 if ((FUNC_7(VAR_10, VAR_11)/VAR_15) > VAR_5 + VAR_6)
  return -1;

 return 0;
}
