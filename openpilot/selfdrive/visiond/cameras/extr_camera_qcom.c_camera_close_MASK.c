
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msm_vfe_axi_stream_release_cmd {scalar_t__ stream_handle; int cmd; } ;
struct TYPE_7__ {int eeprom; int isp_fd; TYPE_2__* ss; struct msm_vfe_axi_stream_release_cmd stream_cfg; int camera_tb; } ;
struct TYPE_5__ {scalar_t__ axi_stream_handle; } ;
struct TYPE_6__ {TYPE_1__ stream_req; struct msm_vfe_axi_stream_release_cmd buf_request; } ;
typedef TYPE_2__ StreamState ;
typedef TYPE_3__ CameraState ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct msm_vfe_axi_stream_release_cmd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(CameraState *VAR_4) {
  int VAR_5;

  FUNC_3(&VAR_4->camera_tb);


  VAR_4->stream_cfg.cmd = VAR_0;
  VAR_5 = FUNC_2(VAR_4->isp_fd, VAR_1, &VAR_4->stream_cfg);
  FUNC_0("isp stop stream: %d", VAR_5);

  for (int VAR_6 = 0; VAR_6 < 3; VAR_6++) {
    StreamState *VAR_7 = &VAR_4->ss[VAR_6];
    if (VAR_7->stream_req.axi_stream_handle != 0) {
      VAR_5 = FUNC_2(VAR_4->isp_fd, VAR_2, &VAR_7->buf_request);
      FUNC_0("isp release buf: %d", VAR_5);

      struct msm_vfe_axi_stream_release_cmd VAR_8 = {
        .stream_handle = VAR_7->stream_req.axi_stream_handle,
      };
      VAR_5 = FUNC_2(VAR_4->isp_fd, VAR_3, &VAR_8);
      FUNC_0("isp release stream: %d", VAR_5);
    }
  }

  FUNC_1(VAR_4->eeprom);
}
