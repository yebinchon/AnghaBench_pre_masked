
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {size_t len; scalar_t__ p; } ;
struct mbuf {scalar_t__ len; int buf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int FUNC_1 (struct mbuf*,...) ;
 int FUNC_2 (struct mbuf*,size_t) ;
 int FUNC_3 (struct mbuf*) ;
 struct mg_str FUNC_4 (int ,scalar_t__) ;
 int * FUNC_5 (struct mg_str const,unsigned char const) ;

struct mg_str FUNC_6(const struct mg_str VAR_2,
                                const struct mg_str VAR_3, unsigned int VAR_4) {
  const char *VAR_5 =
      (VAR_4 & VAR_1 ? "0123456789ABCDEF"
                                             : "0123456789abcdef");
  size_t VAR_6 = 0;
  struct mbuf VAR_7;
  FUNC_2(&VAR_7, VAR_2.len);

  for (VAR_6 = 0; VAR_6 < VAR_2.len; VAR_6++) {
    const unsigned char VAR_8 = *((const unsigned char *) VAR_2.p + VAR_6);
    if (FUNC_0(VAR_8) || FUNC_5(VAR_3, VAR_8) != ((void*)0)) {
      FUNC_1(&VAR_7, &VAR_8, 1);
    } else if (VAR_8 == ' ' && (VAR_4 & VAR_0)) {
      FUNC_1(&VAR_7, "+", 1);
    } else {
      FUNC_1(&VAR_7, "%", 1);
      FUNC_1(&VAR_7, &VAR_5[VAR_8 >> 4], 1);
      FUNC_1(&VAR_7, &VAR_5[VAR_8 & 15], 1);
    }
  }
  FUNC_1(&VAR_7, "", 1);
  FUNC_3(&VAR_7);
  return FUNC_4(VAR_7.buf, VAR_7.len - 1);
}
