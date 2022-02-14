
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vt_h264_encoder {scalar_t__ bitrate; int limit_bitrate; int session; int rc_max_bitrate_window; int rc_max_bitrate; } ;
typedef int obs_data_t ;
typedef scalar_t__ OSStatus ;
typedef int CFNumberRef ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct vt_h264_encoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int,int ,int ) ;
 int FUNC_6 (struct vt_h264_encoder*,int *) ;

__attribute__((used)) static bool FUNC_7(void *VAR_4, obs_data_t *VAR_5)
{
 struct vt_h264_encoder *VAR_6 = VAR_4;

 uint32_t VAR_7 = VAR_6->bitrate;
 bool VAR_8 = VAR_6->limit_bitrate;

 FUNC_6(VAR_6, VAR_5);

 if (VAR_7 == VAR_6->bitrate &&
     VAR_8 == VAR_6->limit_bitrate)
  return 1;

 OSStatus VAR_9 = FUNC_5(VAR_6->session, VAR_6->bitrate,
         VAR_6->limit_bitrate,
         VAR_6->rc_max_bitrate,
         VAR_6->rc_max_bitrate_window);
 if (VAR_9 != VAR_3)
  FUNC_3(VAR_0, "failed to set bitrate to session");

 CFNumberRef VAR_10;
 FUNC_2(VAR_6->session,
         VAR_2, ((void*)0),
         &VAR_10);

 uint32_t VAR_11;
 FUNC_0(VAR_10, VAR_1, &VAR_11);
 FUNC_1(VAR_10);

 if (VAR_11 == VAR_7) {
  FUNC_3(VAR_0,
   "failed to update current session "
   " bitrate from %d->%d",
   VAR_7, VAR_6->bitrate);
 }

 FUNC_4(VAR_6);
 return 1;
}
