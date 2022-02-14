
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef size_t u8 ;
struct tomoyo_time {int year; int month; int day; int hour; int min; int sec; } ;
struct tomoyo_request_info {int profile; size_t mode; int granted; struct tomoyo_obj_info* obj; } ;
struct tomoyo_obj_info {int validate_done; struct tomoyo_mini_stat* stat; int * stat_valid; } ;
struct tomoyo_mini_stat {unsigned int dev; int mode; unsigned int rdev; int gid; int uid; scalar_t__ ino; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_4 ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int const,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int const,char*,...) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,struct tomoyo_time*) ;
 int FUNC_20 (int) ;
 int FUNC_21 (struct tomoyo_obj_info*) ;
 char** VAR_5 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 char* FUNC_24 (int ) ;

__attribute__((used)) static char *FUNC_25(struct tomoyo_request_info *VAR_6)
{
 struct tomoyo_time VAR_7;
 const pid_t VAR_8 = FUNC_18(VAR_3);
 struct tomoyo_obj_info *VAR_9 = VAR_6->obj;
 static const int VAR_10 = 4096;
 char *VAR_11 = FUNC_15(VAR_10, VAR_0);
 int VAR_12;
 u8 VAR_13;

 if (!VAR_11)
  return ((void*)0);

 FUNC_19(FUNC_16(), &VAR_7);

 VAR_12 = FUNC_17(VAR_11, VAR_10 - 1,
         "#%04u/%02u/%02u %02u:%02u:%02u# profile=%u mode=%s granted=%s (global-pid=%u) task={ pid=%u ppid=%u uid=%u gid=%u euid=%u egid=%u suid=%u sgid=%u fsuid=%u fsgid=%u }",
         VAR_7.year, VAR_7.month, VAR_7.day, VAR_7.hour,
         VAR_7.min, VAR_7.sec, VAR_6->profile, VAR_5[VAR_6->mode],
         FUNC_24(VAR_6->granted), VAR_8, FUNC_22(),
         FUNC_23(),
         FUNC_13(&VAR_4, FUNC_11()),
         FUNC_12(&VAR_4, FUNC_8()),
         FUNC_13(&VAR_4, FUNC_5()),
         FUNC_12(&VAR_4, FUNC_4()),
         FUNC_13(&VAR_4, FUNC_10()),
         FUNC_12(&VAR_4, FUNC_9()),
         FUNC_13(&VAR_4, FUNC_7()),
         FUNC_12(&VAR_4, FUNC_6()));
 if (!VAR_9)
  goto no_obj_info;
 if (!VAR_9->validate_done) {
  FUNC_21(VAR_9);
  VAR_9->validate_done = 1;
 }
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  struct tomoyo_mini_stat *VAR_14;
  unsigned int VAR_15;
  umode_t VAR_16;

  if (!VAR_9->stat_valid[VAR_13])
   continue;
  VAR_14 = &VAR_9->stat[VAR_13];
  VAR_15 = VAR_14->dev;
  VAR_16 = VAR_14->mode;
  if (VAR_13 & 1) {
   VAR_12 += FUNC_17(VAR_11 + VAR_12,
     VAR_10 - 1 - VAR_12,
     " path%u.parent={ uid=%u gid=%u ino=%lu perm=0%o }",
     (VAR_13 >> 1) + 1,
     FUNC_13(&VAR_4, VAR_14->uid),
     FUNC_12(&VAR_4, VAR_14->gid),
     (unsigned long)VAR_14->ino,
     VAR_14->mode & VAR_1);
   continue;
  }
  VAR_12 += FUNC_17(VAR_11 + VAR_12, VAR_10 - 1 - VAR_12,
    " path%u={ uid=%u gid=%u ino=%lu major=%u minor=%u perm=0%o type=%s",
    (VAR_13 >> 1) + 1,
    FUNC_13(&VAR_4, VAR_14->uid),
    FUNC_12(&VAR_4, VAR_14->gid),
    (unsigned long)VAR_14->ino,
    FUNC_0(VAR_15), FUNC_1(VAR_15),
    VAR_16 & VAR_1, FUNC_20(VAR_16));
  if (FUNC_3(VAR_16) || FUNC_2(VAR_16)) {
   VAR_15 = VAR_14->rdev;
   VAR_12 += FUNC_17(VAR_11 + VAR_12,
     VAR_10 - 1 - VAR_12,
     " dev_major=%u dev_minor=%u",
     FUNC_0(VAR_15), FUNC_1(VAR_15));
  }
  VAR_12 += FUNC_17(VAR_11 + VAR_12, VAR_10 - 1 - VAR_12,
    " }");
 }
no_obj_info:
 if (VAR_12 < VAR_10 - 1)
  return VAR_11;
 FUNC_14(VAR_11);
 return ((void*)0);
}
