
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t len; size_t size; char* buf; } ;


 scalar_t__ FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,void const*,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;

size_t FUNC_4(struct mbuf *VAR_2, size_t VAR_3, const void *VAR_4, size_t VAR_5) {
  char *VAR_6 = ((void*)0);

  FUNC_1(VAR_2 != ((void*)0));
  FUNC_1(VAR_2->len <= VAR_2->size);
  FUNC_1(VAR_3 <= VAR_2->len);


  if (~(size_t) 0 - (size_t) VAR_2->buf < VAR_5) return 0;

  if (VAR_2->len + VAR_5 <= VAR_2->size) {
    FUNC_3(VAR_2->buf + VAR_3 + VAR_5, VAR_2->buf + VAR_3, VAR_2->len - VAR_3);
    if (VAR_4 != ((void*)0)) {
      FUNC_2(VAR_2->buf + VAR_3, VAR_4, VAR_5);
    }
    VAR_2->len += VAR_5;
  } else {
    size_t VAR_7 = (VAR_2->len + VAR_5);
    size_t VAR_8 = (size_t)(VAR_7 * VAR_1);
    if (VAR_8 - VAR_7 > VAR_0) {
      VAR_8 = VAR_7 + VAR_0;
    }
    VAR_6 = (char *) FUNC_0(VAR_2->buf, VAR_8);
    if (VAR_6 == ((void*)0) && VAR_8 != VAR_7) {
      VAR_8 = VAR_7;
      VAR_6 = (char *) FUNC_0(VAR_2->buf, VAR_8);
    }
    if (VAR_6 != ((void*)0)) {
      VAR_2->buf = VAR_6;
      if (VAR_3 != VAR_2->len) {
        FUNC_3(VAR_2->buf + VAR_3 + VAR_5, VAR_2->buf + VAR_3, VAR_2->len - VAR_3);
      }
      if (VAR_4 != ((void*)0)) FUNC_2(VAR_2->buf + VAR_3, VAR_4, VAR_5);
      VAR_2->len += VAR_5;
      VAR_2->size = VAR_8;
    } else {
      VAR_5 = 0;
    }
  }

  return VAR_5;
}
