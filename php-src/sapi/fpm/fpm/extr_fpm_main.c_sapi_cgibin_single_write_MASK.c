
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
typedef int fcgi_request ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ,char const*,int ) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (char const*,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static inline size_t FUNC_5(const char *VAR_5, uint32_t VAR_6)
{
 ssize_t VAR_7;


 if (VAR_2) {
  fcgi_request *VAR_8 = (fcgi_request*) FUNC_1(VAR_3);
  VAR_7 = FUNC_2(VAR_8, VAR_0, VAR_5, VAR_6);
  if (VAR_7 <= 0) {
   return 0;
  }
  return (size_t)VAR_7;
 }
 return FUNC_3(VAR_5, 1, FUNC_0(VAR_6, 16384), VAR_4);

}
