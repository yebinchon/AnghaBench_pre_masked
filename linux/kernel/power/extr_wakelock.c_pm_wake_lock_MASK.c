
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wakelock {int ws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wakelock*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wakelock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char const) ;
 int FUNC_7 (int ,int,scalar_t__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;
 struct wakelock* FUNC_11 (char const*,size_t,int) ;
 int VAR_4 ;
 int FUNC_12 (struct wakelock*) ;

int FUNC_13(const char *VAR_5)
{
 const char *VAR_6 = VAR_5;
 struct wakelock *VAR_7;
 u64 VAR_8 = 0;
 size_t VAR_9;
 int VAR_10 = 0;

 if (!FUNC_4(VAR_0))
  return -VAR_2;

 while (*VAR_6 && !FUNC_6(*VAR_6))
  VAR_6++;

 VAR_9 = VAR_6 - VAR_5;
 if (!VAR_9)
  return -VAR_1;

 if (*VAR_6 && *VAR_6 != '\n') {

  VAR_10 = FUNC_7(FUNC_10(VAR_6), 10, &VAR_8);
  if (VAR_10)
   return -VAR_1;
 }

 FUNC_8(&VAR_4);

 VAR_7 = FUNC_11(VAR_5, VAR_9, 1);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  goto out;
 }
 if (VAR_8) {
  u64 VAR_11 = VAR_8 + VAR_3 - 1;

  FUNC_5(VAR_11, VAR_3);
  FUNC_3(VAR_7->ws, VAR_11);
 } else {
  FUNC_2(VAR_7->ws);
 }

 FUNC_12(VAR_7);

 out:
 FUNC_9(&VAR_4);
 return VAR_10;
}
