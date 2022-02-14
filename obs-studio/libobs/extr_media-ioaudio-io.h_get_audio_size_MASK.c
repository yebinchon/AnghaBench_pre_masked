
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;
typedef enum audio_format { ____Placeholder_audio_format } audio_format ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline size_t FUNC_3(enum audio_format VAR_0,
        enum speaker_layout VAR_1,
        uint32_t VAR_2)
{
 bool VAR_3 = FUNC_2(VAR_0);

 return (VAR_3 ? 1 : FUNC_1(VAR_1)) *
        FUNC_0(VAR_0) * VAR_2;
}
