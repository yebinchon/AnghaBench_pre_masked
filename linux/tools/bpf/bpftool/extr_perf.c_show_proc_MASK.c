
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct FTW {int dummy; } ;
typedef int buf ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,char*,int*,int*,int*,int *,int *) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,int,int,int,char*,int ,int ) ;
 int FUNC_3 (int,int,int,int,char*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const struct stat *VAR_3,
       int VAR_4, struct FTW *VAR_5)
{
 __u64 VAR_6, VAR_7;
 __u32 VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 const char *VAR_14;
 char VAR_15[4096];


 VAR_14 = VAR_2 + 5;
 if (*VAR_14 == '\0')
  return 0;


 VAR_14++;
 while (FUNC_1(*VAR_14)) {
  VAR_12 = VAR_12 * 10 + *VAR_14 - '0';
  VAR_14++;
 }
 if (*VAR_14 == '\0')
  return 0;
 if (*VAR_14 != '/')
  return VAR_0;


 VAR_14++;
 if (FUNC_4(VAR_14, "fd", 2))
  return VAR_0;
 VAR_14 += 2;
 if (*VAR_14 == '\0')
  return 0;
 if (*VAR_14 != '/')
  return VAR_0;


 VAR_14++;
 while (FUNC_1(*VAR_14)) {
  VAR_13 = VAR_13 * 10 + *VAR_14 - '0';
  VAR_14++;
 }
 if (*VAR_14 != '\0')
  return VAR_0;


 VAR_8 = sizeof(VAR_15);
 VAR_11 = FUNC_0(VAR_12, VAR_13, 0, VAR_15, &VAR_8, &VAR_9, &VAR_10,
    &VAR_6, &VAR_7);
 if (VAR_11 < 0)
  return 0;

 if (VAR_1)
  FUNC_2(VAR_12, VAR_13, VAR_9, VAR_10, VAR_15, VAR_6,
    VAR_7);
 else
  FUNC_3(VAR_12, VAR_13, VAR_9, VAR_10, VAR_15, VAR_6,
     VAR_7);

 return 0;
}
