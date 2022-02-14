
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ NVENCSTATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,int,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(NVENCSTATUS VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 if (VAR_1 == VAR_0)
  return 0;

 FUNC_0("%s: %s failed: %d (%s)", VAR_2, VAR_3, (int)VAR_1,
       FUNC_1(VAR_1));
 return 1;
}
