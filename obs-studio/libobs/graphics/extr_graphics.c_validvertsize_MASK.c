
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ using_immediate; } ;
typedef TYPE_1__ graphics_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,size_t) ;

__attribute__((used)) static inline bool FUNC_1(graphics_t *VAR_2, size_t VAR_3,
     const char *VAR_4)
{
 if (VAR_2->using_immediate && VAR_3 == VAR_0) {
  FUNC_0(VAR_1,
       "%s: tried to use over %u "
       "for immediate rendering",
       VAR_4, VAR_0);
  return 0;
 }

 return 1;
}
