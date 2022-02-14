
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* FUNC_0 (int ) ;
 int FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,char*) ;
 size_t FUNC_3 (char const*,int,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static size_t FUNC_5(const char *VAR_3, size_t VAR_4)
{
 if (FUNC_0(VAR_2)) {
  FUNC_4(FUNC_0(VAR_2), VAR_3, VAR_4);
  return VAR_4;
 }

 if (FUNC_0(VAR_0) && *FUNC_0(VAR_0) && !VAR_1) {
  VAR_1 = FUNC_2(FUNC_0(VAR_0), "w");
 }
 if (VAR_1) {
  return FUNC_3(VAR_3, 1, FUNC_1(VAR_4, 16384), VAR_1);
 }

 return -1;
}
