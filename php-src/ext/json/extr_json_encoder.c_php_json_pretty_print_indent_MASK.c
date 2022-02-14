
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int smart_str ;
struct TYPE_3__ {int depth; } ;
typedef TYPE_1__ php_json_encoder ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static inline void FUNC_1(smart_str *VAR_1, int VAR_2, php_json_encoder *VAR_3)
{
 int VAR_4;

 if (VAR_2 & VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_3->depth; ++VAR_4) {
   FUNC_0(VAR_1, "    ", 4);
  }
 }
}
