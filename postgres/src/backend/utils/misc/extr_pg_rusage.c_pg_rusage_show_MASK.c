
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int result ;
struct TYPE_11__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
struct TYPE_12__ {TYPE_4__ tv; TYPE_3__ ru; } ;
typedef TYPE_5__ PGRUsage ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,int,char*,int,int,int,int,int,int) ;

const char *
FUNC_3(const PGRUsage *VAR_0)
{
 static char VAR_1[100];
 PGRUsage VAR_2;

 FUNC_1(&VAR_2);

 if (VAR_2 < VAR_0->tv.tv_usec)
 {
  VAR_2--;
  VAR_2 += 1000000;
 }
 if (VAR_2 < VAR_0->ru.ru_stime.tv_usec)
 {
  VAR_2--;
  VAR_2 += 1000000;
 }
 if (VAR_2 < VAR_0->ru.ru_utime.tv_usec)
 {
  VAR_2--;
  VAR_2 += 1000000;
 }

 FUNC_2(VAR_1, sizeof(VAR_1),
    FUNC_0("CPU: user: %d.%02d s, system: %d.%02d s, elapsed: %d.%02d s"),
    (int) (VAR_2 - VAR_0->ru.ru_utime.tv_sec),
    (int) (VAR_2 - VAR_0->ru.ru_utime.tv_usec) / 10000,
    (int) (VAR_2 - VAR_0->ru.ru_stime.tv_sec),
    (int) (VAR_2 - VAR_0->ru.ru_stime.tv_usec) / 10000,
    (int) (VAR_2 - VAR_0->tv.tv_sec),
    (int) (VAR_2 - VAR_0->tv.tv_usec) / 10000);

 return VAR_1;
}
