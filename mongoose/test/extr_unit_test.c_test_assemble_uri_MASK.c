
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ p; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mg_str,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct mg_str*,int *,int *,int ,struct mg_str*,int *,int *,int,struct mg_str*) ;
 struct mg_str FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(void) {
  struct mg_str VAR_0, VAR_1, VAR_2;
  {
    FUNC_0(FUNC_3(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), 0, &VAR_2),
              0);
    FUNC_1(VAR_2, "");
  }

  {
    VAR_0 = FUNC_4("file");
    VAR_1 = FUNC_4("/foo/bar");
    FUNC_0(
        FUNC_3(&VAR_0, ((void*)0), ((void*)0), 0, &VAR_1, ((void*)0), ((void*)0), 0, &VAR_2), 0);
    FUNC_1(VAR_2, "file:///foo/bar");
    FUNC_2((void *) VAR_2.p);
  }

  {
    VAR_0 = FUNC_4("file");
    VAR_1 = FUNC_4("/foo/.././bar/baz");
    FUNC_0(
        FUNC_3(&VAR_0, ((void*)0), ((void*)0), 0, &VAR_1, ((void*)0), ((void*)0), 0, &VAR_2), 0);
    FUNC_1(VAR_2, "file:///foo/.././bar/baz");
    FUNC_2((void *) VAR_2.p);
    FUNC_0(
        FUNC_3(&VAR_0, ((void*)0), ((void*)0), 0, &VAR_1, ((void*)0), ((void*)0), 1, &VAR_2), 0);
    FUNC_1(VAR_2, "file:///bar/baz");
    FUNC_2((void *) VAR_2.p);
  }

  return ((void*)0);
}
