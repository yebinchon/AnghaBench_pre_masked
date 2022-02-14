
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct pulse_data {scalar_t__ format; int device; int stream; int source; int speakers; int bytes_per_frame; int channels; int samples_per_sec; } ;
typedef int pa_stream_flags_t ;
struct TYPE_8__ {scalar_t__ format; int channels; int rate; } ;
typedef TYPE_1__ pa_sample_spec ;
typedef int pa_channel_map ;
struct TYPE_9__ {void* tlength; void* prebuf; void* minreq; void* maxlength; int fragsize; } ;
typedef TYPE_2__ pa_buffer_attr ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,void*) ;
 scalar_t__ FUNC_10 (int ,int ,void*) ;
 int FUNC_11 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct pulse_data*) ;
 int FUNC_13 (int ,TYPE_1__*,int *) ;
 int VAR_6 ;
 int FUNC_14 () ;

__attribute__((used)) static int_fast32_t FUNC_15(struct pulse_data *VAR_7)
{
 if (FUNC_9(VAR_4, (void *)VAR_7) < 0) {
  FUNC_0(VAR_0, "Unable to get server info !");
  return -1;
 }

 if (FUNC_10(VAR_5, VAR_7->device,
      (void *)VAR_7) < 0) {
  FUNC_0(VAR_0, "Unable to get source info !");
  return -1;
 }
 if (VAR_7->format == VAR_2) {
  FUNC_0(VAR_0,
       "An error occurred while getting the source info!");
  return -1;
 }

 pa_sample_spec VAR_8;
 VAR_8.format = VAR_7->format;
 VAR_8.rate = VAR_7->samples_per_sec;
 VAR_8.channels = VAR_7->channels;

 if (!FUNC_3(&VAR_8)) {
  FUNC_0(VAR_0, "Sample spec is not valid");
  return -1;
 }

 VAR_7->speakers = FUNC_8(VAR_8.channels);
 VAR_7->bytes_per_frame = FUNC_2(&VAR_8);

 pa_channel_map VAR_9 = FUNC_7(VAR_7->speakers);

 VAR_7->stream = FUNC_13(FUNC_1(VAR_7->source),
     &VAR_8, &VAR_9);
 if (!VAR_7->stream) {
  FUNC_0(VAR_0, "Unable to create stream");
  return -1;
 }

 FUNC_11();
 FUNC_5(VAR_7->stream, VAR_6,
        (void *)VAR_7);
 FUNC_14();

 pa_buffer_attr VAR_10;
 VAR_10.fragsize = FUNC_6(25000, &VAR_8);
 VAR_10.maxlength = (uint32_t)-1;
 VAR_10.minreq = (uint32_t)-1;
 VAR_10.prebuf = (uint32_t)-1;
 VAR_10.tlength = (uint32_t)-1;

 pa_stream_flags_t VAR_11 = VAR_3;

 FUNC_11();
 int_fast32_t VAR_12 = FUNC_4(VAR_7->stream, VAR_7->device,
          &VAR_10, VAR_11);
 FUNC_14();
 if (VAR_12 < 0) {
  FUNC_12(VAR_7);
  FUNC_0(VAR_0, "Unable to connect to stream");
  return -1;
 }

 FUNC_0(VAR_1, "Started recording from '%s'", VAR_7->device);
 return 0;
}
