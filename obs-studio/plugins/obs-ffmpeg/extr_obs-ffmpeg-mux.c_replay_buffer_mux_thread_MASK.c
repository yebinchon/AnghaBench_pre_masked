
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; struct encoder_packet* array; } ;
struct TYPE_3__ {int array; } ;
struct ffmpeg_muxer {int muxing; TYPE_2__ mux_packets; int * pipe; TYPE_1__ path; } ;
struct encoder_packet {int dummy; } ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct encoder_packet*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ffmpeg_muxer*) ;
 int FUNC_6 (struct ffmpeg_muxer*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct ffmpeg_muxer*,struct encoder_packet*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_0)
{
 struct ffmpeg_muxer *VAR_1 = VAR_0;

 FUNC_6(VAR_1, VAR_1->path.array);

 if (!VAR_1->pipe) {
  FUNC_7("Failed to create process pipe");
  goto error;
 }

 if (!FUNC_5(VAR_1)) {
  FUNC_7("Could not write headers for file '%s'",
       VAR_1->path.array);
  goto error;
 }

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->mux_packets.num; VAR_2++) {
  struct encoder_packet *VAR_3 = &VAR_1->mux_packets.array[VAR_2];
  FUNC_8(VAR_1, VAR_3);
  FUNC_2(VAR_3);
 }

 FUNC_1("Wrote replay buffer to '%s'", VAR_1->path.array);

error:
 FUNC_4(VAR_1->pipe);
 VAR_1->pipe = ((void*)0);
 FUNC_0(VAR_1->mux_packets);
 FUNC_3(&VAR_1->muxing, 0);
 return ((void*)0);
}
