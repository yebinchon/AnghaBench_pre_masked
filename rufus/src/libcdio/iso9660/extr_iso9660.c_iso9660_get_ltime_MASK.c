
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_isdst; int tm_sec; int tm_gmtoff; scalar_t__ tm_zone; } ;
struct TYPE_3__ {int lt_gmtoff; } ;
typedef TYPE_1__ iso9660_ltime_t ;


 int FUNC_0 (int *,struct tm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tm*,struct tm*,int) ;
 int FUNC_2 (struct tm*,int ,int) ;
 int FUNC_3 (struct tm*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

bool
FUNC_5 (const iso9660_ltime_t *VAR_12,
                           struct tm *VAR_13)
{
  if (!VAR_13) return 0;
  FUNC_2(VAR_13, 0, sizeof(struct tm));
  FUNC_4(VAR_11, VAR_5, -1900);
  FUNC_4(VAR_9, VAR_3, -1);
  FUNC_4(VAR_7, VAR_0, 0);
  FUNC_4(VAR_6, VAR_1, 0);
  FUNC_4(VAR_8, VAR_2, 0);
  FUNC_4(VAR_10, VAR_4, 0);
  VAR_13->tm_isdst= -1;

  VAR_13->tm_sec += VAR_12->lt_gmtoff * (15 * 60);
  {
    time_t VAR_14;
    struct tm VAR_15;

    VAR_14 = FUNC_3(VAR_13);

    FUNC_0(&VAR_14, &VAR_15);

    FUNC_1(VAR_13, &VAR_15, sizeof(struct tm));
  }
  VAR_13->tm_isdst= -1;



  return 1;
}
