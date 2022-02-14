
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_time_interval {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct perf_time_interval*,char*) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct perf_time_interval *VAR_2,
     const char *VAR_3, int VAR_4)
{
 const char *VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11 = 0;


 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
  VAR_10 += !!(*VAR_5 == ',');

 if (!VAR_10)
  return -VAR_0;

 FUNC_0(VAR_10 > VAR_4);

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6)
  return -VAR_1;


 for (VAR_9 = 0, VAR_8 = VAR_6; VAR_9 < VAR_10 - 1; VAR_9++) {
  VAR_7 = VAR_8;

  VAR_8 = FUNC_4(FUNC_5(VAR_8, ',') + 1);

  while (*VAR_8 && !FUNC_2(*VAR_8)) {
   if (*VAR_8++ == ',') {
    VAR_11 = -VAR_0;
    goto out;
   }
  }

  if (*VAR_8)
   *VAR_8++ = 0;
  VAR_11 = FUNC_3(VAR_2 + VAR_9, VAR_7);
  if (VAR_11 < 0)
   goto out;
 }


 VAR_11 = FUNC_3(VAR_2 + VAR_9, VAR_8);
 if (VAR_11 < 0)
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_10 - 1; VAR_9++) {
  if (VAR_2[VAR_9].end >= VAR_2[VAR_9 + 1].start) {
   VAR_11 = -VAR_0;
   goto out;
  }
 }

 VAR_11 = VAR_10;
out:
 FUNC_1(VAR_6);

 return VAR_11;
}
