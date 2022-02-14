
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct v4l2_data {int dev; int resolution; int framerate; int width; int height; int thread; int event; int buffers; int linesize; int pixfmt; int dv_timing; int standard; int input; int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int ,struct v4l2_data*) ;
 scalar_t__ FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int,int,int*) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int,int*,int *,int *) ;
 scalar_t__ FUNC_9 (int,int*) ;
 scalar_t__ FUNC_10 (int,int *) ;
 scalar_t__ FUNC_11 (int,int *) ;
 int FUNC_12 (struct v4l2_data*) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int*,int*,int) ;

__attribute__((used)) static void FUNC_15(struct v4l2_data *VAR_9)
{
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_1(VAR_1, "Start capture from %s", VAR_9->device_id);
 VAR_9->dev = FUNC_6(VAR_9->device_id, VAR_4 | VAR_3);
 if (VAR_9->dev == -1) {
  FUNC_1(VAR_0, "Unable to open device");
  goto fail;
 }


 if (FUNC_10(VAR_9->dev, &VAR_9->input) < 0) {
  FUNC_1(VAR_0, "Unable to set input %d", VAR_9->input);
  goto fail;
 }
 FUNC_1(VAR_1, "Input: %d", VAR_9->input);
 if (FUNC_5(VAR_9->dev, -1, &VAR_10) < 0) {
  FUNC_1(VAR_0, "Unable to get input capabilities");
  goto fail;
 }


 if (VAR_10 & VAR_6) {
  if (FUNC_11(VAR_9->dev, &VAR_9->standard) < 0) {
   FUNC_1(VAR_0, "Unable to set video standard");
   goto fail;
  }
  VAR_9->resolution = -1;
  VAR_9->framerate = -1;
 }

 if (VAR_10 & VAR_5) {
  if (FUNC_7(VAR_9->dev, &VAR_9->dv_timing) < 0) {
   FUNC_1(VAR_0, "Unable to set dv timing");
   goto fail;
  }
  VAR_9->resolution = -1;
  VAR_9->framerate = -1;
 }


 if (FUNC_8(VAR_9->dev, &VAR_9->resolution, &VAR_9->pixfmt,
       &VAR_9->linesize) < 0) {
  FUNC_1(VAR_0, "Unable to set format");
  goto fail;
 }
 if (FUNC_13(VAR_9->pixfmt) == VAR_7) {
  FUNC_1(VAR_0, "Selected video format not supported");
  goto fail;
 }
 FUNC_14(&VAR_9->width, &VAR_9->height, VAR_9->resolution);
 FUNC_1(VAR_1, "Resolution: %dx%d", VAR_9->width, VAR_9->height);
 FUNC_1(VAR_1, "Pixelformat: %s", FUNC_0(VAR_9->pixfmt));
 FUNC_1(VAR_1, "Linesize: %d Bytes", VAR_9->linesize);


 if (FUNC_9(VAR_9->dev, &VAR_9->framerate) < 0) {
  FUNC_1(VAR_0, "Unable to set framerate");
  goto fail;
 }
 FUNC_14(&VAR_11, &VAR_12, VAR_9->framerate);
 FUNC_1(VAR_1, "Framerate: %.2f fps", (float)VAR_12 / VAR_11);


 if (FUNC_4(VAR_9->dev, &VAR_9->buffers) < 0) {
  FUNC_1(VAR_0, "Failed to map buffers");
  goto fail;
 }


 if (FUNC_2(&VAR_9->event, VAR_2) != 0)
  goto fail;
 if (FUNC_3(&VAR_9->thread, ((void*)0), VAR_8, VAR_9) != 0)
  goto fail;
 return;
fail:
 FUNC_1(VAR_0, "Initialization failed");
 FUNC_12(VAR_9);
}
