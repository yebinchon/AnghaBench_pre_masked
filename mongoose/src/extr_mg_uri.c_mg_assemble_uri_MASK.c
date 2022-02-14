
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; char* p; } ;
struct mbuf {char* buf; int len; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct mbuf*,char*,int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (struct mg_str const*,struct mg_str*) ;
 struct mg_str FUNC_5 (struct mg_str const) ;
 int FUNC_6 (char*,char*,unsigned int) ;

int FUNC_7(const struct mg_str *VAR_0, const struct mg_str *VAR_1,
                    const struct mg_str *VAR_2, unsigned int VAR_3,
                    const struct mg_str *VAR_4, const struct mg_str *VAR_5,
                    const struct mg_str *VAR_6, int VAR_7,
                    struct mg_str *VAR_8) {
  int VAR_9 = -1;
  struct mbuf VAR_10;
  FUNC_3(&VAR_10, 0);

  if (VAR_0 != ((void*)0) && VAR_0->len > 0) {
    FUNC_1(&VAR_10, VAR_0->p, VAR_0->len);
    FUNC_1(&VAR_10, "://", 3);
  }

  if (VAR_1 != ((void*)0) && VAR_1->len > 0) {
    FUNC_1(&VAR_10, VAR_1->p, VAR_1->len);
    FUNC_1(&VAR_10, "@", 1);
  }

  if (VAR_2 != ((void*)0) && VAR_2->len > 0) {
    FUNC_1(&VAR_10, VAR_2->p, VAR_2->len);
  }

  if (VAR_3 != 0) {
    char VAR_11[20];
    int VAR_12 = FUNC_6(VAR_11, ":%u", VAR_3);
    FUNC_1(&VAR_10, VAR_11, VAR_12);
  }

  if (VAR_4 != ((void*)0) && VAR_4->len > 0) {
    if (VAR_7) {
      struct mg_str VAR_13 = FUNC_5(*VAR_4);
      if (VAR_13.len != VAR_4->len) goto out;
      if (!FUNC_4(VAR_4, &VAR_13)) {
        FUNC_0((void *) VAR_13.p);
        goto out;
      }
      FUNC_1(&VAR_10, VAR_13.p, VAR_13.len);
      FUNC_0((void *) VAR_13.p);
    } else {
      FUNC_1(&VAR_10, VAR_4->p, VAR_4->len);
    }
  } else if (VAR_7) {
    FUNC_1(&VAR_10, "/", 1);
  }

  if (VAR_5 != ((void*)0) && VAR_5->len > 0) {
    FUNC_1(&VAR_10, "?", 1);
    FUNC_1(&VAR_10, VAR_5->p, VAR_5->len);
  }

  if (VAR_6 != ((void*)0) && VAR_6->len > 0) {
    FUNC_1(&VAR_10, "#", 1);
    FUNC_1(&VAR_10, VAR_6->p, VAR_6->len);
  }

  VAR_9 = 0;

out:
  if (VAR_9 == 0) {
    VAR_8->p = VAR_10.buf;
    VAR_8->len = VAR_10.len;
  } else {
    FUNC_2(&VAR_10);
    VAR_8->p = ((void*)0);
    VAR_8->len = 0;
  }
  return VAR_9;
}
