
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int device_name; } ;
typedef scalar_t__ OSStatus ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int ,char const*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(OSStatus VAR_2, struct coreaudio_data *VAR_3,
         const char *VAR_4, const char *VAR_5)
{
 if (VAR_2 != VAR_1) {
  FUNC_0(VAR_0, "[%s]:[device '%s'] %s failed: %d", VAR_4,
       VAR_3->device_name, VAR_5, (int)VAR_2);
  return 0;
 }

 return 1;
}
