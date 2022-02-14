
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qop ;
typedef int ha1 ;
typedef int cnonce ;


 int FUNC_0 (char*,char const*,size_t,char const*,size_t const,char const*,size_t,char const*,size_t const,char const*,size_t,int *) ;
 int FUNC_1 (char const*,scalar_t__,char const*,scalar_t__,char*,int,char const*,scalar_t__,char*,size_t const,char*,scalar_t__,char const*,int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_4 (char const*) ;

int FUNC_5(char *VAR_0, size_t VAR_1,
                                      const char *VAR_2, const char *VAR_3,
                                      const char *VAR_4, const char *VAR_5,
                                      const char *VAR_6, const char *VAR_7) {
  static const char VAR_8[] = ":", VAR_9[] = "auth";
  static const size_t VAR_10 = 1;
  char VAR_11[33], VAR_12[33], VAR_13[40];

  FUNC_3(VAR_13, sizeof(VAR_13), "%lx", (unsigned long) FUNC_2());
  FUNC_0(VAR_11, VAR_5, (size_t) FUNC_4(VAR_5), VAR_8, VAR_10, VAR_4,
         (size_t) FUNC_4(VAR_4), VAR_8, VAR_10, VAR_6,
         (size_t) FUNC_4(VAR_6), ((void*)0));
  FUNC_1(VAR_2, FUNC_4(VAR_2), VAR_3, FUNC_4(VAR_3), VAR_11, sizeof(VAR_11) - 1,
               VAR_7, FUNC_4(VAR_7), "1", VAR_10, VAR_13, FUNC_4(VAR_13), VAR_9,
               sizeof(VAR_9) - 1, VAR_12);
  return FUNC_3(VAR_0, VAR_1,
                  "Authorization: Digest username=\"%s\","
                  "realm=\"%s\",uri=\"%s\",qop=%s,nc=1,cnonce=%s,"
                  "nonce=%s,response=%s\r\n",
                  VAR_5, VAR_4, VAR_3, VAR_9, VAR_13, VAR_7, VAR_12);
}
