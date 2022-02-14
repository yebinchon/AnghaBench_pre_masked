
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct sock_args {scalar_t__ type; int version; } ;
typedef int socklen_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_9 (int,void*,int ,struct sock_args*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,struct sock_args*) ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int,scalar_t__,void*,int ) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(int VAR_10, int VAR_11, void *VAR_12, socklen_t VAR_13,
      struct sock_args *VAR_14)
{
 struct timeval VAR_15 = { .tv_sec = VAR_7 }, *VAR_16 = ((void*)0);
 fd_set VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_14->type != VAR_1)
  FUNC_10(VAR_11, VAR_14->version);

 if (VAR_5) {
  VAR_6 = FUNC_13(VAR_5);


  if (VAR_10) {
   if (FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14))
    return 1;
  }
  if (!VAR_3) {
   VAR_16 = &VAR_15;
   if (!VAR_7)
    VAR_15.tv_sec = 5;
  }
 }

 VAR_18 = VAR_3 ? FUNC_3(FUNC_4(VAR_9), VAR_11) + 1 : VAR_11 + 1;
 while (1) {
  FUNC_2(&VAR_17);
  FUNC_1(VAR_11, &VAR_17);
  if (VAR_3)
   FUNC_1(FUNC_4(VAR_9), &VAR_17);

  VAR_19 = FUNC_8(VAR_18, &VAR_17, ((void*)0), ((void*)0), VAR_16);
  if (VAR_19 < 0) {
   if (VAR_2 == VAR_0)
    continue;

   VAR_19 = 1;
   FUNC_5("select failed");
   break;
  } else if (VAR_19 == 0) {
   FUNC_6("Timed out waiting for response\n");
   VAR_19 = 2;
   break;
  }

  if (FUNC_0(VAR_11, &VAR_17)) {
   VAR_19 = FUNC_11(VAR_11, VAR_14);
   if (VAR_19 < 0) {
    VAR_19 = 1;
    break;
   }
   if (VAR_19 == 0)
    break;
  }

  VAR_19 = 0;

  if (FUNC_0(FUNC_4(VAR_9), &VAR_17)) {
   if (FUNC_12(VAR_11, VAR_14->type, VAR_12, VAR_13) <= 0)
    break;
  }

  if (VAR_3)
   continue;

  if (VAR_4 != -1) {
   --VAR_4;
   if (VAR_4 == 0)
    break;
  }

  FUNC_7("Going into quiet mode\n");
  VAR_8 = 1;

  if (VAR_10) {
   if (FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14)) {
    VAR_19 = 1;
    break;
   }
  }
 }

 return VAR_19;
}
