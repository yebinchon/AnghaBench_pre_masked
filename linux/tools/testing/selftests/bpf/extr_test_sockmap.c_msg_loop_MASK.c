
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct sockmap_options {int drop_expected; int data_test; scalar_t__ sendpage; scalar_t__ verbose; } ;
struct msghdr {int member_0; } ;
struct msg_stats {int bytes_sent; float bytes_recvd; int end; int start; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,float,float,float) ;
 int FUNC_5 (struct msghdr*,int,int,int,int) ;
 int FUNC_6 (struct msghdr*) ;
 int FUNC_7 (struct msghdr*,int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,struct msghdr*,int) ;
 int FUNC_11 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_12 (int,struct msghdr*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 float VAR_11 ;

__attribute__((used)) static int FUNC_13(int VAR_12, int VAR_13, int VAR_14, int VAR_15,
      struct msg_stats *VAR_16, bool VAR_17,
      struct sockmap_options *VAR_18)
{
 struct msghdr VAR_19 = {0}, VAR_20 = {0};
 int VAR_21, VAR_22, VAR_23 = VAR_3;
 bool VAR_24 = VAR_18->drop_expected;
 bool VAR_25 = VAR_18->data_test;

 VAR_21 = FUNC_5(&VAR_19, VAR_13, VAR_14, VAR_25, VAR_17);
 if (VAR_21)
  goto out_errno;
 if (VAR_7) {
  VAR_21 = FUNC_5(&VAR_20, VAR_13, VAR_14, VAR_25, VAR_17);
  if (VAR_21)
   goto out_errno;
 }

 if (VAR_17) {
  FUNC_2(VAR_0, &VAR_16->start);
  for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
   int VAR_26 = FUNC_12(VAR_12, &VAR_19, VAR_23);

   if (!VAR_24 && VAR_26 < 0) {
    FUNC_8("send loop error:");
    goto out_errno;
   } else if (VAR_24 && VAR_26 >= 0) {
    FUNC_9("send loop error expected: %i\n", VAR_26);
    VAR_6 = -VAR_1;
    goto out_errno;
   }
   if (VAR_26 > 0)
    VAR_16->bytes_sent += VAR_26;
  }
  FUNC_2(VAR_0, &VAR_16->end);
 } else {
  int VAR_27, VAR_28 = 0, VAR_29, VAR_30 = VAR_12;
  float VAR_31, VAR_32;
  int VAR_33 = VAR_5;
  struct timeval VAR_34;
  fd_set VAR_35;

  FUNC_3(VAR_12, VAR_33);
  VAR_31 = (float)VAR_13 * (float)VAR_14 * (float)VAR_15;
  VAR_32 = VAR_11;
  if (VAR_9)
   VAR_32 *= (VAR_31 / VAR_9);
  VAR_31 -= VAR_32;
  VAR_21 = FUNC_2(VAR_0, &VAR_16->start);
  if (VAR_21 < 0)
   FUNC_8("recv start time: ");
  while (VAR_16->bytes_recvd < VAR_31) {
   if (VAR_10) {
    VAR_34.tv_sec = 0;
    VAR_34.tv_usec = 300000;
   } else {
    VAR_34.tv_sec = 3;
    VAR_34.tv_usec = 0;
   }


   FUNC_1(&VAR_35);
   FUNC_0(VAR_12, &VAR_35);

   VAR_27 = FUNC_11(VAR_30 + 1, &VAR_35, ((void*)0), ((void*)0), &VAR_34);
   if (VAR_27 == -1) {
    FUNC_8("select()");
    FUNC_2(VAR_0, &VAR_16->end);
    goto out_errno;
   } else if (!VAR_27) {
    if (VAR_18->verbose)
     FUNC_4(VAR_8, "unexpected timeout: recved %f/%f pop_total %f\n", VAR_16->bytes_recvd, VAR_31, VAR_32);
    VAR_6 = -VAR_1;
    FUNC_2(VAR_0, &VAR_16->end);
    goto out_errno;
   }

   VAR_6 = 0;
   if (VAR_7) {
    VAR_23 |= VAR_4;
    VAR_28 = FUNC_10(VAR_12, &VAR_20, VAR_23);
    if (VAR_28 < 0) {
     if (VAR_6 != VAR_2) {
      FUNC_2(VAR_0, &VAR_16->end);
      goto out_errno;
     }
    }
    VAR_23 = 0;
   }

   VAR_29 = FUNC_10(VAR_12, &VAR_19, VAR_23);
   if (VAR_29 < 0) {
    if (VAR_6 != VAR_2) {
     FUNC_2(VAR_0, &VAR_16->end);
     FUNC_8("recv failed()\n");
     goto out_errno;
    }
   }

   VAR_16->bytes_recvd += VAR_29;

   if (VAR_25) {
    int VAR_36 = VAR_18->sendpage ?
      VAR_14 * VAR_15 :
      VAR_14 * VAR_13;

    VAR_6 = FUNC_7(&VAR_19, VAR_29, VAR_36);
    if (VAR_6) {
     FUNC_8("data verify msg failed\n");
     goto out_errno;
    }
    if (VAR_28) {
     VAR_6 = FUNC_7(&VAR_20,
        VAR_28,
        VAR_36);
     if (VAR_6) {
      FUNC_8("data verify msg_peek failed\n");
      goto out_errno;
     }
    }
   }
  }
  FUNC_2(VAR_0, &VAR_16->end);
 }

 FUNC_6(&VAR_19);
 FUNC_6(&VAR_20);
 return VAR_21;
out_errno:
 FUNC_6(&VAR_19);
 FUNC_6(&VAR_20);
 return VAR_6;
}
