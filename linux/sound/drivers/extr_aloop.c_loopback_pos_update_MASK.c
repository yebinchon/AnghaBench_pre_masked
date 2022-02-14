
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loopback_pcm {unsigned long last_jiffies; unsigned int last_drift; } ;
struct loopback_cable {unsigned int running; unsigned int pause; struct loopback_pcm** streams; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (struct loopback_pcm*,unsigned long) ;
 int FUNC_1 (struct loopback_pcm*,unsigned int) ;
 int FUNC_2 (struct loopback_pcm*,unsigned int) ;
 int FUNC_3 (struct loopback_pcm*,struct loopback_pcm*,unsigned int) ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned int FUNC_4(struct loopback_cable *VAR_3)
{
 struct loopback_pcm *VAR_4 =
   VAR_3->streams[VAR_1];
 struct loopback_pcm *VAR_5 =
   VAR_3->streams[VAR_0];
 unsigned long VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_3->running ^ VAR_3->pause;
 if (VAR_8 & (1 << VAR_1)) {
  VAR_6 = VAR_2 - VAR_4->last_jiffies;
  VAR_4->last_jiffies += VAR_6;
 }

 if (VAR_8 & (1 << VAR_0)) {
  VAR_7 = VAR_2 - VAR_5->last_jiffies;
  VAR_5->last_jiffies += VAR_7;
 }

 if (VAR_6 == 0 && VAR_7 == 0)
  goto unlock;

 if (VAR_6 > VAR_7) {
  VAR_9 = FUNC_0(VAR_4, VAR_6 - VAR_7);
  FUNC_1(VAR_4, VAR_9);
  VAR_6 = VAR_7;
 } else if (VAR_6 < VAR_7) {
  VAR_9 = FUNC_0(VAR_5, VAR_7 - VAR_6);
  FUNC_2(VAR_5, VAR_9);
  FUNC_1(VAR_5, VAR_9);
  VAR_7 = VAR_6;
 }

 if (VAR_6 == 0 && VAR_7 == 0)
  goto unlock;


 VAR_9 = FUNC_0(VAR_4, VAR_6);
 VAR_10 = FUNC_0(VAR_5, VAR_7);
 if (VAR_9 < VAR_10) {
  VAR_5->last_drift = VAR_10 - VAR_9;
  VAR_9 = VAR_10;
 } else if (VAR_9 > VAR_10) {
  VAR_4->last_drift = VAR_9 - VAR_10;
 }
 FUNC_3(VAR_4, VAR_5, VAR_9);
 FUNC_1(VAR_4, VAR_9);
 FUNC_1(VAR_5, VAR_9);
 unlock:
 return VAR_8;
}
