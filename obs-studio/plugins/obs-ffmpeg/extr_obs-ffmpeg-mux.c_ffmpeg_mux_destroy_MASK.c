
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int path; int pipe; int mux_packets; int mux_thread; scalar_t__ mux_thread_joinable; } ;


 int FUNC_0 (struct ffmpeg_muxer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ffmpeg_muxer*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct ffmpeg_muxer *VAR_1 = VAR_0;

 FUNC_5(VAR_1);
 if (VAR_1->mux_thread_joinable)
  FUNC_4(VAR_1->mux_thread, ((void*)0));
 FUNC_1(VAR_1->mux_packets);

 FUNC_3(VAR_1->pipe);
 FUNC_2(&VAR_1->path);
 FUNC_0(VAR_1);
}
