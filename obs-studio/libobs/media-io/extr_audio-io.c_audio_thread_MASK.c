
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t samples_per_sec; int name; } ;
struct audio_output {int stop_event; TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (struct audio_output*,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static void *FUNC_11(void *VAR_2)
{
 struct audio_output *VAR_3 = VAR_2;
 size_t VAR_4 = VAR_3->info.samples_per_sec;
 uint64_t VAR_5 = 0;
 uint64_t VAR_6 = FUNC_4();
 uint64_t VAR_7 = VAR_6;
 uint64_t VAR_8 = VAR_7;
 uint32_t VAR_9 = (uint32_t)(
  FUNC_0(VAR_4, VAR_0) / 1000000);

 FUNC_5("audio-io: audio thread");

 const char *VAR_10 =
  FUNC_10(FUNC_2(),
       "audio_thread(%s)", VAR_3->info.name);

 while (FUNC_3(VAR_3->stop_event) == VAR_1) {
  uint64_t VAR_11;

  FUNC_6(VAR_9);

  FUNC_9(VAR_10);

  VAR_11 = FUNC_4();
  while (VAR_8 <= VAR_11) {
   VAR_5 += VAR_0;
   VAR_8 =
    VAR_6 + FUNC_0(VAR_4, VAR_5);

   FUNC_1(VAR_3, VAR_8, VAR_7);
   VAR_7 = VAR_8;
  }

  FUNC_7(VAR_10);

  FUNC_8();
 }

 return ((void*)0);
}
