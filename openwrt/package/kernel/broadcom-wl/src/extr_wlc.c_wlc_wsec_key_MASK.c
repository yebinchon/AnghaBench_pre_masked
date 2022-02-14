
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wsec_key ;
typedef int wlc_param ;
struct TYPE_4__ {int len; unsigned char* data; int flags; } ;
typedef TYPE_1__ wl_wsec_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 void* FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,char*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int *,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(wlc_param VAR_5, void *VAR_6, void *VAR_7)
{
 wl_wsec_key_t VAR_8;
 unsigned char *VAR_9 = VAR_7;
 unsigned char *VAR_10;
 unsigned char *VAR_11;
 unsigned char VAR_12[3];

 if ((VAR_5 & VAR_0) != VAR_1)
  return 0;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_9[0] == '=') {
  VAR_8.flags = VAR_2;
  VAR_9++;
 }

 if ((VAR_9[0] < '1') || (VAR_9[0] > '4') || (VAR_9[1] != ','))
  return -1;

 VAR_10 = VAR_9 + 2;
 if (FUNC_3(VAR_10, "d:", 2) == 0) {
 } else if (FUNC_3(VAR_10, "s:", 2) == 0) {
  VAR_10 += 2;
  VAR_8.len = FUNC_2(VAR_10);

  if ((VAR_8.len != 5) && (VAR_8.len != 13))
   return -1;

  FUNC_1(VAR_8.data, VAR_10);
 } else {
  VAR_8.len = FUNC_2(VAR_10);
  if ((VAR_8.len != 10) && (VAR_8.len != 26))
   return -1;

  VAR_8.len /= 2;
  VAR_11 = VAR_8.data;
  VAR_12[2] = 0;
  do {
   VAR_12[0] = *(VAR_10++);
   VAR_12[1] = *(VAR_10++);
   *(VAR_11++) = (unsigned char) FUNC_4(VAR_12, ((void*)0), 16);
  } while (*VAR_10 != 0);
 }

 return FUNC_5(VAR_3, "wsec_key", VAR_4, &VAR_8, sizeof(VAR_8));
}
