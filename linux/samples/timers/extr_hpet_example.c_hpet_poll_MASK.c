
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int fd; long revents; int events; } ;
struct hpet_info {long hi_flags; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct timeval*,struct timezone*) ;
 scalar_t__ FUNC_4 (int,int ,...) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (int,long*,int) ;
 int VAR_6 ;

void
FUNC_8(int VAR_7, const char **VAR_8)
{
 unsigned long VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct pollfd VAR_13;
 struct hpet_info VAR_14;
 struct timeval VAR_15, VAR_16;
 struct timezone VAR_17;
 long VAR_18;

 if (VAR_7 != 3) {
  FUNC_2(VAR_6, "hpet_poll: device-name freq iterations\n");
  return;
 }

 VAR_9 = FUNC_0(VAR_8[1]);
 VAR_10 = FUNC_0(VAR_8[2]);

 VAR_12 = FUNC_5(VAR_8[0], VAR_4);

 if (VAR_12 < 0) {
  FUNC_2(VAR_6, "hpet_poll: open of %s failed\n", VAR_8[0]);
  return;
 }

 if (FUNC_4(VAR_12, VAR_3, VAR_9) < 0) {
  FUNC_2(VAR_6, "hpet_poll: HPET_IRQFREQ failed\n");
  goto out;
 }

 if (FUNC_4(VAR_12, VAR_2, &VAR_14) < 0) {
  FUNC_2(VAR_6, "hpet_poll: failed to get info\n");
  goto out;
 }

 FUNC_2(VAR_6, "hpet_poll: info.hi_flags 0x%lx\n", VAR_14.hi_flags);

 if (VAR_14.hi_flags && (FUNC_4(VAR_12, VAR_0, 0) < 0)) {
  FUNC_2(VAR_6, "hpet_poll: HPET_EPI failed\n");
  goto out;
 }

 if (FUNC_4(VAR_12, VAR_1, 0) < 0) {
  FUNC_2(VAR_6, "hpet_poll, HPET_IE_ON failed\n");
  goto out;
 }

 VAR_13.fd = VAR_12;
 VAR_13.events = VAR_5;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_13.revents = 0;
  FUNC_3(&VAR_15, &VAR_17);
  if (FUNC_6(&VAR_13, 1, -1) < 0)
   FUNC_2(VAR_6, "hpet_poll: poll failed\n");
  else {
   long VAR_19;

   FUNC_3(&VAR_16, &VAR_17);
   VAR_18 = VAR_15.tv_sec * 1000000 + VAR_15.tv_usec;
   VAR_18 = (VAR_16.tv_sec * 1000000 + VAR_16.tv_usec) - VAR_18;

   FUNC_2(VAR_6,
    "hpet_poll: expired time = 0x%lx\n", VAR_18);

   FUNC_2(VAR_6, "hpet_poll: revents = 0x%lx\n",
    VAR_13.revents);

   if (FUNC_7(VAR_12, &VAR_19, sizeof(VAR_19)) != sizeof(VAR_19)) {
    FUNC_2(VAR_6, "hpet_poll: read failed\n");
   }
   else
    FUNC_2(VAR_6, "hpet_poll: data 0x%lx\n",
     VAR_19);
  }
 }

out:
 FUNC_1(VAR_12);
 return;
}
