
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct loopback_cable {int * streams; int pause; int running; int valid; } ;
struct loopback {struct loopback_cable*** cables; } ;


 int FUNC_0 (struct snd_info_buffer*,int ,char*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_0,
     struct loopback *VAR_1,
     int VAR_2,
     int VAR_3)
{
 struct loopback_cable *VAR_4 = VAR_1->cables[VAR_2][VAR_3];

 FUNC_1(VAR_0, "Cable %i substream %i:\n", VAR_3, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "  inactive\n");
  return;
 }
 FUNC_1(VAR_0, "  valid: %u\n", VAR_4->valid);
 FUNC_1(VAR_0, "  running: %u\n", VAR_4->running);
 FUNC_1(VAR_0, "  pause: %u\n", VAR_4->pause);
 FUNC_0(VAR_0, VAR_4->streams[0], "Playback");
 FUNC_0(VAR_0, VAR_4->streams[1], "Capture");
}
