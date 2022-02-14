
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8 ;
typedef int RD_BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,size_t,int) ;
 int FUNC_6 (char*) ;

RD_BOOL
FUNC_7(uint8 VAR_8)
{
 int VAR_9;
 char VAR_10[256];

 if (VAR_5)
  return VAR_1;

 VAR_6[VAR_8] = 0;

 if (!(VAR_2 && VAR_3))
  return VAR_0;

 if (!FUNC_4())
 {
  FUNC_0(("failed to get/make cache directory!\n"));
  return VAR_0;
 }

 VAR_4 = (VAR_7 + 7) / 8;
 FUNC_5(VAR_10, "cache/pstcache_%d_%d", VAR_8, VAR_4);
 FUNC_0(("persistent bitmap cache file: %s\n", VAR_10));

 VAR_9 = FUNC_3(VAR_10);
 if (VAR_9 == -1)
  return VAR_0;

 if (!FUNC_2(VAR_9, 0, 0))
 {
  FUNC_6("Persistent bitmap caching is disabled. (The file is already in use)\n");
  FUNC_1(VAR_9);
  return VAR_0;
 }

 VAR_6[VAR_8] = VAR_9;
 return VAR_1;
}
