
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct win_version_info {int major; int minor; } ;


 int FUNC_0 (struct win_version_info*) ;
 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_1(void)
{
 if (!VAR_0) {
  struct win_version_info VAR_1;
  FUNC_0(&VAR_1);
  VAR_0 = (VAR_1.major << 8) | VAR_1.minor;
 }

 return VAR_0;
}
