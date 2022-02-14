
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockmap_options {int iov_count; int iov_length; int rate; scalar_t__ verbose; scalar_t__ sendpage; scalar_t__ drop_expected; scalar_t__ base; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct msg_stats {int bytes_recvd; int bytes_sent; TYPE_2__ start; TYPE_1__ end; int member_0; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int,...) ;
 float VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,int,int,int,struct msg_stats*,int,struct sockmap_options*) ;
 int FUNC_7 (int,int,int,struct msg_stats*,struct sockmap_options*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*) ;
 float FUNC_9 (struct msg_stats) ;
 float FUNC_10 (struct msg_stats) ;
 int FUNC_11 (scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (int,int*,int ) ;

__attribute__((used)) static int FUNC_13(struct sockmap_options *VAR_12)
{
 float VAR_13 = 0, VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 struct msg_stats VAR_19 = {0};
 int VAR_20 = VAR_12->iov_count;
 int VAR_21 = VAR_12->iov_length;
 int VAR_22, VAR_23;
 int VAR_24 = VAR_12->rate;

 VAR_1 = 0;

 if (VAR_12->base)
  VAR_15 = VAR_4;
 else
  VAR_15 = VAR_5;

 if (VAR_3) {




  if (!VAR_11 || (VAR_11 && VAR_10)) {
   VAR_18 = FUNC_11(VAR_12->verbose, VAR_15);
   if (VAR_18)
    return VAR_18;
  }
  VAR_18 = FUNC_11(VAR_12->verbose, VAR_0);
  if (VAR_18)
   return VAR_18;
 }

 VAR_17 = FUNC_4();
 if (VAR_17 == 0) {
  if (VAR_12->drop_expected)
   FUNC_3(0);

  if (VAR_12->sendpage)
   VAR_20 = 1;
  VAR_18 = FUNC_6(VAR_15, VAR_20, VAR_21,
          VAR_24, &VAR_19, 0, VAR_12);
  if (VAR_12->verbose)
   FUNC_5(VAR_7,
    "msg_loop_rx: iov_count %i iov_buf %i cnt %i err %i\n",
    VAR_20, VAR_21, VAR_24, VAR_18);
  if (VAR_19.end.tv_sec - VAR_19.start.tv_sec) {
   VAR_13 = FUNC_10(VAR_19);
   VAR_14 = FUNC_9(VAR_19);
  }
  if (VAR_12->verbose)
   FUNC_5(VAR_8,
    "rx_sendmsg: TX: %dB %fB/s %fGB/s RX: %dB %fB/s %fGB/s %s\n",
    VAR_19.bytes_sent, VAR_13, VAR_13/VAR_2,
    VAR_19.bytes_recvd, VAR_14, VAR_14/VAR_2,
    VAR_6 ? "(peek_msg)" : "");
  if (VAR_18 && VAR_9)
   VAR_18 = 0;
  FUNC_3(VAR_18 ? 1 : 0);
 } else if (VAR_17 == -1) {
  FUNC_8("msg_loop_rx: ");
  return VAR_1;
 }

 VAR_16 = FUNC_4();
 if (VAR_16 == 0) {
  if (VAR_12->sendpage)
   VAR_18 = FUNC_7(VAR_0, VAR_21, VAR_24, &VAR_19, VAR_12);
  else
   VAR_18 = FUNC_6(VAR_0, VAR_20, VAR_21,
           VAR_24, &VAR_19, 1, VAR_12);

  if (VAR_18)
   FUNC_5(VAR_7,
    "msg_loop_tx: iov_count %i iov_buf %i cnt %i err %i\n",
    VAR_20, VAR_21, VAR_24, VAR_18);
  if (VAR_19.end.tv_sec - VAR_19.start.tv_sec) {
   VAR_13 = FUNC_10(VAR_19);
   VAR_14 = FUNC_9(VAR_19);
  }
  if (VAR_12->verbose)
   FUNC_5(VAR_8,
    "tx_sendmsg: TX: %dB %fB/s %f GB/s RX: %dB %fB/s %fGB/s\n",
    VAR_19.bytes_sent, VAR_13, VAR_13/VAR_2,
    VAR_19.bytes_recvd, VAR_14, VAR_14/VAR_2);
  FUNC_3(VAR_18 ? 1 : 0);
 } else if (VAR_16 == -1) {
  FUNC_8("msg_loop_tx: ");
  return VAR_1;
 }

 FUNC_2(FUNC_12(VAR_17, &VAR_22, 0) == VAR_17);
 FUNC_2(FUNC_12(VAR_16, &VAR_23, 0) == VAR_16);
 if (FUNC_1(VAR_22)) {
  VAR_18 = FUNC_0(VAR_22);
  if (VAR_18) {
   FUNC_5(VAR_7, "rx thread exited with err %d. ", VAR_18);
   goto out;
  }
 }
 if (FUNC_1(VAR_23)) {
  VAR_18 = FUNC_0(VAR_23);
  if (VAR_18)
   FUNC_5(VAR_7, "tx thread exited with err %d. ", VAR_18);
 }
out:
 return VAR_18;
}
