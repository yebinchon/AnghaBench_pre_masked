
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,char*,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,size_t,char*,char const*) ;

__attribute__((used)) static int FUNC_3(u64 VAR_3, char *VAR_4, size_t VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8 = (VAR_3 >> 0) & 0xff;
 const char *VAR_9 = "unknown-ext-hardware-cache-type";

 if (VAR_8 >= VAR_0)
  goto out_err;

 VAR_6 = (VAR_3 >> 8) & 0xff;
 VAR_9 = "unknown-ext-hardware-cache-op";
 if (VAR_6 >= VAR_1)
  goto out_err;

 VAR_7 = (VAR_3 >> 16) & 0xff;
 VAR_9 = "unknown-ext-hardware-cache-result";
 if (VAR_7 >= VAR_2)
  goto out_err;

 VAR_9 = "invalid-cache";
 if (!FUNC_1(VAR_8, VAR_6))
  goto out_err;

 return FUNC_0(VAR_8, VAR_6, VAR_7, VAR_4, VAR_5);
out_err:
 return FUNC_2(VAR_4, VAR_5, "%s", VAR_9);
}
