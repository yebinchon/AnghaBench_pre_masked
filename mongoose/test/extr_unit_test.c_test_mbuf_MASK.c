
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t len; size_t size; int * buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *,char*) ;
 size_t VAR_0 ;
 size_t FUNC_3 (struct mbuf*,char const*,size_t) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int) ;
 size_t FUNC_6 (struct mbuf*,size_t,char const*,int) ;
 int FUNC_7 (struct mbuf*,int) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static const char *FUNC_9(void) {
  struct mbuf VAR_1;
  const char *VAR_2 = "TEST";
  const char *VAR_3 = "MY";
  const char *VAR_4 = "Some long prefix: ";
  size_t VAR_5;

  FUNC_5(&VAR_1, 0);
  FUNC_0(VAR_1.buf == ((void*)0));
  FUNC_1(VAR_1.len, 0);
  FUNC_1(VAR_1.size, 0);
  FUNC_4(&VAR_1);
  FUNC_0(VAR_1.buf == ((void*)0));
  FUNC_1(VAR_1.len, 0);
  FUNC_1(VAR_1.size, 0);

  FUNC_5(&VAR_1, 10);
  FUNC_0(VAR_1.buf != ((void*)0));
  FUNC_1(VAR_1.len, 0);
  FUNC_1(VAR_1.size, 10);
  FUNC_4(&VAR_1);
  FUNC_0(VAR_1.buf == ((void*)0));
  FUNC_1(VAR_1.len, 0);
  FUNC_1(VAR_1.size, 0);

  FUNC_5(&VAR_1, 10);
  FUNC_1(FUNC_3(&VAR_1, ((void*)0), 0), 0);

  FUNC_1(FUNC_3(&VAR_1, ((void*)0), 1125899906842624), 0);

  FUNC_1(FUNC_3(&VAR_1, VAR_2, FUNC_8(VAR_2)), FUNC_8(VAR_2));

  FUNC_7(&VAR_1, 2);
  FUNC_1(VAR_1.size, 10);
  FUNC_1(VAR_1.len, FUNC_8(VAR_2));

  FUNC_1(FUNC_6(&VAR_1, 0, VAR_3, FUNC_8(VAR_3)), FUNC_8(VAR_3));
  FUNC_1(VAR_1.size, 10);
  FUNC_1(VAR_1.len, FUNC_8(VAR_2) + FUNC_8(VAR_3));

  FUNC_1(FUNC_6(&VAR_1, 0, VAR_4, FUNC_8(VAR_4)),
            FUNC_8(VAR_4));
  FUNC_1(VAR_1.size, VAR_0 *
                         (FUNC_8(VAR_4) + FUNC_8(VAR_3) + FUNC_8(VAR_2)));
  FUNC_2(VAR_1.buf, "Some long prefix: MYTEST");

  VAR_5 = VAR_1.size;
  FUNC_1(FUNC_6(&VAR_1, FUNC_8(VAR_4), VAR_2, FUNC_8(VAR_2)),
            FUNC_8(VAR_2));
  FUNC_1(VAR_1.size, VAR_5);
  FUNC_2(VAR_1.buf, "Some long prefix: TESTMYTEST");


  FUNC_1(FUNC_6(&VAR_1, 0, ((void*)0), 1125899906842624), 0);


  FUNC_1(FUNC_6(&VAR_1, 0, ((void*)0), -1), 0);
  FUNC_4(&VAR_1);
  return ((void*)0);
}
