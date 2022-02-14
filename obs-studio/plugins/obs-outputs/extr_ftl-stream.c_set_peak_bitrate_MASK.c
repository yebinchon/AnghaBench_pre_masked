
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int peak_kbps; } ;
struct ftl_stream {int peak_kbps; TYPE_2__ params; int ftl_handle; int output; } ;
struct TYPE_4__ {int ending_rtt; int starting_rtt; int peak_kbps; scalar_t__ pkts_sent; scalar_t__ lost_pkts; } ;
typedef TYPE_1__ speed_test_t ;
typedef int obs_encoder_t ;
typedef int obs_data_t ;
typedef scalar_t__ ftl_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,int ,int ,int ,float) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(struct ftl_stream *VAR_1)
{
 int VAR_2 = 15000;
 int VAR_3 = 1000;
 speed_test_t VAR_4;
 ftl_status_t VAR_5;

 VAR_5 = FUNC_0(&VAR_1->ftl_handle,
            VAR_2,
            VAR_3, &VAR_4);

 float VAR_6 = 0;

 if (VAR_5 == VAR_0) {
  VAR_6 = (float)VAR_4.lost_pkts * 100.f /
          (float)VAR_4.pkts_sent;
 } else {
  FUNC_8("Speed test failed with: %s",
       FUNC_2(VAR_5));
 }


 obs_encoder_t *VAR_7 =
  FUNC_7(VAR_1->output);
 obs_data_t *VAR_8 = FUNC_6(VAR_7);
 int VAR_9 =
  (int)FUNC_4(VAR_8, "bitrate");
 FUNC_5(VAR_8);


 FUNC_3("Speed test completed: User desired bitrate %d, Peak kbps %d, "
      "initial rtt %d, "
      "final rtt %d, %3.2f lost packets",
      VAR_9, VAR_4.peak_kbps, VAR_4.starting_rtt,
      VAR_4.ending_rtt, VAR_6);






 VAR_1->peak_kbps = VAR_1->params.peak_kbps =
  VAR_9 * 12 / 10;
 FUNC_1(&VAR_1->ftl_handle, &VAR_1->params);
}
