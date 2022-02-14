
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static const char *FUNC_3(void) {
  FUNC_0(FUNC_2("foo", FUNC_1("foo")));
  FUNC_0(FUNC_2("/foo", FUNC_1("/foo")));
  FUNC_0(FUNC_2("+/foo", FUNC_1("/foo")));
  FUNC_0(!FUNC_2("foo", FUNC_1("foobar")));
  FUNC_0(FUNC_2("foo", FUNC_1("foo/")));
  FUNC_0(FUNC_2("foo", FUNC_1("foo//")));
  FUNC_0(!FUNC_2("foo", FUNC_1("foo/bar")));
  FUNC_0(!FUNC_2("foo", FUNC_1("foo/+")));
  FUNC_0(FUNC_2("foo/bar", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("foo/+", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("+/bar", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("+/+", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("foo/+/bar", FUNC_1("foo//bar")));
  FUNC_0(!FUNC_2("foo/+/+", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("foo/+/#", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("+/foo/bar", FUNC_1("/foo/bar")));

  FUNC_0(!FUNC_2("", FUNC_1("")));
  FUNC_0(FUNC_2("/", FUNC_1("")));
  FUNC_0(FUNC_2("/", FUNC_1("/")));

  FUNC_0(FUNC_2("#", FUNC_1("")));
  FUNC_0(FUNC_2("#", FUNC_1("foo")));
  FUNC_0(FUNC_2("#", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("foo/#", FUNC_1("foo")));
  FUNC_0(FUNC_2("foo/#", FUNC_1("foo/")));
  FUNC_0(FUNC_2("foo/#", FUNC_1("foo/bar")));
  FUNC_0(FUNC_2("foo/#", FUNC_1("foo/bar/baz")));
  FUNC_0(!FUNC_2("#/foo", FUNC_1("foo")));
  FUNC_0(!FUNC_2("#/foo", FUNC_1("bar/foo")));

  return ((void*)0);
}
