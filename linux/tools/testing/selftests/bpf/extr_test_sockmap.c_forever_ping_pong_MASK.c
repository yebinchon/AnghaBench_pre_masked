
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockmap_options {scalar_t__ verbose; } ;
typedef int fd_set ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_10 (int,char*,int,int ) ;
 int FUNC_11 (int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(int VAR_9, struct sockmap_options *VAR_10)
{
 struct timeval VAR_11;
 char VAR_12[1024] = {0};
 int VAR_13;

 VAR_11.tv_sec = 10;
 VAR_11.tv_usec = 0;


 VAR_13 = FUNC_10(VAR_1, VAR_12, sizeof(VAR_12), 0);
 if (VAR_13 < 0) {
  FUNC_6("send failed()\n");
  return VAR_13;
 }

 do {
  int VAR_14, VAR_15, VAR_16, VAR_17 = VAR_5;
  fd_set VAR_18;


  FUNC_2(&VAR_18);
  FUNC_1(VAR_1, &VAR_18);
  FUNC_1(VAR_2, &VAR_18);
  FUNC_1(VAR_4, &VAR_18);
  FUNC_1(VAR_5, &VAR_18);

  VAR_14 = FUNC_9(VAR_17 + 1, &VAR_18, ((void*)0), ((void*)0), &VAR_11);
  if (VAR_14 == -1) {
   FUNC_6("select()");
   break;
  } else if (!VAR_14) {
   FUNC_5(VAR_7, "unexpected timeout\n");
   break;
  }

  for (VAR_16 = 0; VAR_16 <= VAR_17 && VAR_14 > 0; ++VAR_16) {
   if (!FUNC_0(VAR_16, &VAR_18))
    continue;

   VAR_14--;

   VAR_15 = FUNC_8(VAR_16, VAR_12, sizeof(VAR_12), 0);
   if (VAR_15 < 0) {
    if (VAR_3 != VAR_0) {
     FUNC_6("recv failed()\n");
     return VAR_15;
    }
   }

   if (VAR_15 == 0) {
    FUNC_3(VAR_16);
    break;
   }

   VAR_13 = FUNC_10(VAR_16, VAR_12, VAR_15, 0);
   if (VAR_13 < 0) {
    FUNC_6("send failed()\n");
    return VAR_13;
   }
  }

  if (VAR_9)
   FUNC_11(VAR_9);

  if (VAR_10->verbose) {
   FUNC_7(".");
   FUNC_4(VAR_8);

  }
 } while (VAR_6);

 return 0;
}
