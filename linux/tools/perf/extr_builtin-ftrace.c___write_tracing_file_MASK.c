
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;
 char* FUNC_7 (char const*) ;
 size_t FUNC_8 (char const*) ;
 size_t FUNC_9 (int,char*,size_t) ;

__attribute__((used)) static int FUNC_10(const char *VAR_4, const char *VAR_5, bool VAR_6)
{
 char *VAR_7;
 int VAR_8, VAR_9 = -1;
 ssize_t VAR_10 = FUNC_8(VAR_5);
 int VAR_11 = VAR_2;
 char VAR_12[512];
 char *VAR_13;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7) {
  FUNC_4("cannot get tracing file: %s\n", VAR_4);
  return -1;
 }

 if (VAR_6)
  VAR_11 |= VAR_0;
 else
  VAR_11 |= VAR_1;

 VAR_8 = FUNC_3(VAR_7, VAR_11);
 if (VAR_8 < 0) {
  FUNC_4("cannot open tracing file: %s: %s\n",
    VAR_4, FUNC_6(VAR_3, VAR_12, sizeof(VAR_12)));
  goto out;
 }





 VAR_13 = FUNC_7(VAR_5);
 if (!VAR_13)
  goto out_close;
 VAR_13[VAR_10] = '\n';

 if (FUNC_9(VAR_8, VAR_13, VAR_10 + 1) == VAR_10 + 1)
  VAR_9 = 0;
 else
  FUNC_4("write '%s' to tracing/%s failed: %s\n",
    VAR_5, VAR_4, FUNC_6(VAR_3, VAR_12, sizeof(VAR_12)));

 FUNC_1(VAR_13);
out_close:
 FUNC_0(VAR_8);
out:
 FUNC_5(VAR_7);
 return VAR_9;
}
