
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef scalar_t__ fsec_t ;



__attribute__((used)) static inline void
FUNC_0(struct tm *VAR_0, fsec_t *VAR_1)
{
 VAR_0->tm_year = 0;
 VAR_0->tm_mon = 0;
 VAR_0->tm_mday = 0;
 VAR_0->tm_hour = 0;
 VAR_0->tm_min = 0;
 VAR_0->tm_sec = 0;
 *VAR_1 = 0;
}
