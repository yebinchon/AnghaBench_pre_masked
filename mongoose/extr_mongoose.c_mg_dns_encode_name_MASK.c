
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t len; } ;


 int FUNC_0 (struct mbuf*,...) ;
 char* FUNC_1 (char const*,char) ;

int FUNC_2(struct mbuf *VAR_0, const char *VAR_1, size_t VAR_2) {
  const char *VAR_3;
  unsigned char VAR_4;
  size_t VAR_5 = VAR_0->len;

  do {
    if ((VAR_3 = FUNC_1(VAR_1, '.')) == ((void*)0)) {
      VAR_3 = VAR_1 + VAR_2;
    }

    if (VAR_3 - VAR_1 > 127) {
      return -1;
    }
    VAR_4 = VAR_3 - VAR_1;
    FUNC_0(VAR_0, &VAR_4, 1);
    FUNC_0(VAR_0, VAR_1, VAR_4);

    if (*VAR_3 == '.') {
      VAR_4++;
    }

    VAR_1 += VAR_4;
    VAR_2 -= VAR_4;
  } while (*VAR_3 != '\0');
  FUNC_0(VAR_0, "\0", 1);

  return VAR_0->len - VAR_5;
}
