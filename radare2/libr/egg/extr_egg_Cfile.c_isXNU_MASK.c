
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline bool FUNC_1(const char *VAR_0) {
 return (!FUNC_0 (VAR_0, "darwin") || !FUNC_0 (VAR_0, "macos")
  || !FUNC_0 (VAR_0, "tvos") || !FUNC_0 (VAR_0, "watchos") || !FUNC_0 (VAR_0, "ios"));
}
