
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; scalar_t__ array; } ;
struct update_info {TYPE_1__ file_data; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_3(struct update_info *VAR_0,
       const char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_3, (char *)VAR_0->file_data.array,
     VAR_0->file_data.num - 1, 0);
 FUNC_0(VAR_3);
}
