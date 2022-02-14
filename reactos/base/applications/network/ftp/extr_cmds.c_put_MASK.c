
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const**) ;
 int * VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char const*,char const*,char const*,int) ;
 int VAR_6 ;
 int FUNC_8 (int *,char*) ;
 size_t FUNC_9 (int *) ;
 scalar_t__ VAR_7 ;

void FUNC_10(int VAR_8, const char *VAR_9[])
{
 const char *VAR_10;
 int VAR_11 = 0;
 const char *VAR_12, *VAR_13;

 if (VAR_8 == 2) {
  VAR_8++;
  VAR_9[2] = VAR_9[1];
  VAR_11++;
 }
 if (VAR_8 < 2) {
  (void) FUNC_8(VAR_1, " ");
  FUNC_6("(local-file) ");
  (void) FUNC_2(VAR_6);
  (void) FUNC_3(&VAR_1[FUNC_9(VAR_1)]);
  FUNC_5();
  VAR_8 = VAR_3;
  VAR_9 = VAR_4;
 }
 if (VAR_8 < 2) {
usage:
  FUNC_6("usage:%s local-file remote-file\n", VAR_9[0]);
  (void) FUNC_2(VAR_6);
  VAR_0 = -1;
  return;
 }
 if (VAR_8 < 3) {
  (void) FUNC_8(VAR_1, " ");
  FUNC_6("(remote-file) ");
  (void) FUNC_2(VAR_6);
  (void) FUNC_3(&VAR_1[FUNC_9(VAR_1)]);
  FUNC_5();
  VAR_8 = VAR_3;
  VAR_9 = VAR_4;
 }
 if (VAR_8 < 3)
  goto usage;
 VAR_12 = VAR_9[1];
 VAR_13 = VAR_9[2];
 if (!FUNC_4(&VAR_9[1])) {
  VAR_0 = -1;
  return;
 }




 if (VAR_9[1] != VAR_12 && VAR_9[2] == VAR_12) {
  VAR_9[2] = VAR_9[1];
 }
 VAR_10 = (VAR_9[0][0] == 'a') ? "APPE" : ((VAR_7) ? "STOU" : "STOR");
 if (VAR_11 && VAR_5) {
  VAR_9[2] = FUNC_1(VAR_9[2]);
 }
 if (VAR_11 && VAR_2) {
  VAR_9[2] = FUNC_0(VAR_9[2]);
 }
 FUNC_7(VAR_10, VAR_9[1], VAR_9[2],
     VAR_9[1] != VAR_12 || VAR_9[2] != VAR_13);
}
