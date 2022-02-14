
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*) ;

__attribute__((used)) static const char *FUNC_1(void) {
  FUNC_0("", 0, "");
  FUNC_0("x", 0, "");
  FUNC_0("/", 1, "/");
  FUNC_0("//", 1, "//");
  FUNC_0("/.", 1, "/");
  FUNC_0("//.", 1, "//");
  FUNC_0("/..", 1, "/");
  FUNC_0("//..", 1, "/");
  FUNC_0("///..", 1, "//");
  FUNC_0("/./", 1, "/");
  FUNC_0("/.//", 1, "//");
  FUNC_0("/./.", 1, "/");
  FUNC_0("/.//.", 1, "//");
  FUNC_0("/foo", 1, "/foo");
  FUNC_0("/foo/", 1, "/foo/");
  FUNC_0("/foo/.", 1, "/foo/");
  FUNC_0("/foo/./", 1, "/foo/");
  FUNC_0("/foo/..", 1, "/");
  FUNC_0("/foo/../", 1, "/");
  FUNC_0("/foo/../bar", 1, "/bar");
  FUNC_0("/foo/../bar/", 1, "/bar/");
  FUNC_0("/foo/../../bar", 1, "/bar");
  FUNC_0("/foo////bar/", 1, "/foo////bar/");

  FUNC_0("/fo%2fo/%2e%2e/%2e/bar", 1, "/fo%2fo/%2e%2e/%2e/bar");
  return ((void*)0);
}
