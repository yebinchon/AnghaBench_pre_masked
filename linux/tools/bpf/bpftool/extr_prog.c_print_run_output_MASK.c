
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (void*,int,unsigned int,int *) ;
 int FUNC_3 (void*,unsigned int,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char*,char const*,...) ;
 int FUNC_6 (void*,unsigned int) ;
 int * VAR_3 ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(void *VAR_4, unsigned int VAR_5, const char *VAR_6,
   const char *VAR_7)
{
 size_t VAR_8;
 FILE *VAR_9;

 if (!VAR_6)
  return 0;

 if (!FUNC_7(VAR_6, "-")) {
  VAR_9 = VAR_3;
  if (VAR_1) {
   FUNC_4(VAR_2, VAR_7);
   FUNC_6(VAR_4, VAR_5);
  } else {
   FUNC_3(VAR_4, VAR_5, VAR_9);
  }
  return 0;
 }

 VAR_9 = FUNC_1(VAR_6, "w");
 if (!VAR_9) {
  FUNC_5("failed to open %s: %s", VAR_6, FUNC_8(VAR_0));
  return -1;
 }

 VAR_8 = FUNC_2(VAR_4, 1, VAR_5, VAR_9);
 FUNC_0(VAR_9);
 if (VAR_8 != VAR_5) {
  FUNC_5("failed to write output data/ctx: %s", FUNC_8(VAR_0));
  return -1;
 }

 return 0;
}
