
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int pipe; } ;
struct dstr {int array; } ;


 int FUNC_0 (struct ffmpeg_muxer*,struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static inline void FUNC_3(struct ffmpeg_muxer *VAR_0, const char *VAR_1)
{
 struct dstr VAR_2;
 FUNC_0(VAR_0, &VAR_2, VAR_1);
 VAR_0->pipe = FUNC_2(VAR_2.array, "w");
 FUNC_1(&VAR_2);
}
