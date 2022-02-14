
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_4 (char*,...) ;
 char* VAR_6 ;
 int FUNC_5 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 int VAR_7 ;
 int FUNC_6 (int *,char*) ;
 size_t FUNC_7 (int *) ;
 int VAR_8 ;

void FUNC_8(int VAR_9, const char *VAR_10[])
{
 int VAR_11;

 if (VAR_9 < 2) {
  (void) FUNC_6(VAR_3, " ");
  FUNC_4("(filename) ");
  (void) FUNC_1(VAR_7);
  (void) FUNC_2(&VAR_3[FUNC_7(VAR_3)]);
  FUNC_3();
  VAR_9 = VAR_4;
  VAR_10 = VAR_5;
 }
 if (VAR_9 < 2) {
  FUNC_4("usage:%s filename\n", VAR_10[0]);
  (void) FUNC_1(VAR_7);
  VAR_1 = -1;
  return;
 }
 VAR_11 = VAR_8;
 if (VAR_2 == 0)
  VAR_8 = -1;
 if (FUNC_0("MDTM %s", VAR_10[1]) == VAR_0) {
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  FUNC_5(VAR_6, "%*s %04d%02d%02d%02d%02d%02d", &VAR_12, &VAR_13,
   &VAR_14, &VAR_15, &VAR_16, &VAR_17);

  FUNC_4("%s\t%02d/%02d/%04d %02d:%02d:%02d GMT\n", VAR_10[1],
   VAR_13, VAR_14, VAR_12, VAR_15, VAR_16, VAR_17);
 } else
  FUNC_4("%s\n", VAR_6);
 VAR_8 = VAR_11;
 (void) FUNC_1(VAR_7);
}
