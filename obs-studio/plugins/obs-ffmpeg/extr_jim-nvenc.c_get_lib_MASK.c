
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvenc_data {int dummy; } ;
typedef scalar_t__ HMODULE ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static HANDLE FUNC_3(struct nvenc_data *VAR_0, const char *VAR_1)
{
 HMODULE VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  FUNC_2("Failed to load %s", VAR_1);
 return VAR_2;
}
