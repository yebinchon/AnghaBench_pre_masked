
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvenc_data {int dummy; } ;
typedef scalar_t__ NVENCSTATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,int,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(struct nvenc_data *VAR_1, NVENCSTATUS VAR_2,
        const char *VAR_3, const char *VAR_4)
{
 if (VAR_2 == VAR_0)
  return 0;

 FUNC_0("%s: %s failed: %d (%s)", VAR_3, VAR_4, (int)VAR_2,
       FUNC_1(VAR_2));
 return 1;
}
