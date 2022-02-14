
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_prop ;
typedef int fdt32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int) ;
 char* FUNC_2 (void*,int,char const*,int*) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*,char const*,int ) ;
 int FUNC_5 (void*,int,char const*,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, void *VAR_3,
         int VAR_4,
         const char *VAR_5, uint32_t VAR_6,
         const char *VAR_7, uint32_t VAR_8,
         int VAR_9, const char *VAR_10)
{
 const char *VAR_11;
 uint32_t VAR_12;
 fdt32_t VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 if (VAR_4 < 0)
  return VAR_4;

 VAR_11 = FUNC_2(VAR_2, VAR_4, VAR_10,
      &VAR_16);
 if (!VAR_11)
  return VAR_16;

 VAR_14 = FUNC_3(VAR_2, VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12 = FUNC_1(VAR_2, VAR_14);
 if (!VAR_12)
  return -VAR_1;

 VAR_15 = FUNC_4(VAR_3, VAR_5, VAR_6);
 if (VAR_15 == -VAR_1)
  return -VAR_0;
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = FUNC_0(VAR_12);
 return FUNC_5(VAR_3, VAR_15,
         VAR_7, VAR_8, VAR_9,
         &VAR_13,
         sizeof(VAR_13));
}
