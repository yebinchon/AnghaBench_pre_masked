
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct msm_ispif_param_data {int num; TYPE_1__* entries; int member_0; } ;
struct TYPE_13__ {int num_vfe; } ;
struct ispif_cfg_data {int csid_version; int cfg_type; struct msm_ispif_param_data params; TYPE_3__ vfe_info; int member_0; } ;
typedef int ispif_cfg_data ;
typedef int VisionBuf ;
struct TYPE_15__ {TYPE_2__* ss; } ;
struct TYPE_14__ {scalar_t__ device; TYPE_6__ rear; TYPE_6__ front; void* ispif_fd; } ;
struct TYPE_12__ {int * bufs; } ;
struct TYPE_11__ {int vfe_intf; int num_cids; int* cids; int csid; void* intftype; } ;
typedef TYPE_4__ DualCameraState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (void*,int ,struct ispif_cfg_data*) ;
 int FUNC_8 (struct ispif_cfg_data*,int ,int) ;
 void* FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_4__*) ;

void FUNC_12(DualCameraState *VAR_11, VisionBuf *VAR_12, VisionBuf *VAR_13, VisionBuf *VAR_14, VisionBuf *VAR_15) {
  int VAR_16;

  struct ispif_cfg_data VAR_17 = {0};

  struct msm_ispif_param_data VAR_18 = {0};
  VAR_18.num = 4;

  VAR_18.entries[0].vfe_intf = 0;
  VAR_18.entries[0].intftype = VAR_7;
  VAR_18.entries[0].num_cids = 1;
  VAR_18.entries[0].cids[0] = 0;
  VAR_18.entries[0].csid = 0;

  VAR_18.entries[1].vfe_intf = 1;
  VAR_18.entries[1].intftype = VAR_7;
  VAR_18.entries[1].num_cids = 1;
  VAR_18.entries[1].cids[0] = 0;
  VAR_18.entries[1].csid = 2;

  VAR_18.entries[2].vfe_intf = 0;
  VAR_18.entries[2].intftype = VAR_8;
  VAR_18.entries[2].num_cids = 1;
  VAR_18.entries[2].cids[0] = 1;
  VAR_18.entries[2].csid = 0;

  VAR_18.entries[3].vfe_intf = 0;
  VAR_18.entries[3].intftype = VAR_9;
  VAR_18.entries[3].num_cids = 1;
  VAR_18.entries[3].cids[0] = 2;
  VAR_18.entries[3].csid = 0;

  FUNC_1(*VAR_12);
  FUNC_1(*VAR_15);

  int VAR_19 = FUNC_9("/dev/media0", VAR_6 | VAR_5);
  FUNC_1(VAR_19 >= 0);

  FUNC_11(VAR_11);

  int VAR_20 = FUNC_9("/dev/video0", VAR_6 | VAR_5);
  FUNC_1(VAR_20 >= 0);

  if (VAR_11->device == VAR_0) {
    VAR_11->ispif_fd = FUNC_9("/dev/v4l-subdev15", VAR_6 | VAR_5);
  } else {
    VAR_11->ispif_fd = FUNC_9("/dev/v4l-subdev16", VAR_6 | VAR_5);
  }
  FUNC_1(VAR_11->ispif_fd >= 0);
  FUNC_0("*** open front ***");
  VAR_11->front.ss[0].bufs = VAR_15;
  FUNC_2(&VAR_11->front, 0);

  FUNC_0("*** open rear ***");
  VAR_11->rear.ss[0].bufs = VAR_12;
  VAR_11->rear.ss[1].bufs = VAR_13;
  VAR_11->rear.ss[2].bufs = VAR_14;
  FUNC_2(&VAR_11->rear, 1);

  if (FUNC_6("CAMERA_TEST")) {
    FUNC_3(VAR_11);
    FUNC_4(0);
  }


  FUNC_8(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.cfg_type = VAR_3;
  VAR_17.vfe_info.num_vfe = 2;
  VAR_16 = FUNC_7(VAR_11->ispif_fd, VAR_10, &VAR_17);
  FUNC_0("ispif set vfe info: %d", VAR_16);


  FUNC_8(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.cfg_type = VAR_2;
  VAR_17.csid_version = 0x30050000;
  VAR_16 = FUNC_7(VAR_11->ispif_fd, VAR_10, &VAR_17);
  FUNC_0("ispif setup: %d", VAR_16);

  FUNC_8(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.cfg_type = VAR_1;
  VAR_17.params = VAR_18;

  VAR_16 = FUNC_7(VAR_11->ispif_fd, VAR_10, &VAR_17);
  FUNC_0("ispif cfg: %d", VAR_16);

  VAR_17.cfg_type = VAR_4;
  VAR_16 = FUNC_7(VAR_11->ispif_fd, VAR_10, &VAR_17);
  FUNC_0("ispif start_frame_boundary: %d", VAR_16);

  FUNC_5(&VAR_11->front);
  FUNC_10(&VAR_11->rear);
}
