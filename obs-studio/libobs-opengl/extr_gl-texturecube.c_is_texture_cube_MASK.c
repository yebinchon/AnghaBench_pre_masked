
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ gs_texture_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const gs_texture_t *VAR_2, const char *VAR_3)
{
 bool VAR_4 = VAR_2->type == VAR_0;
 if (!VAR_4)
  FUNC_0(VAR_1, "%s (GL) failed:  Not a cubemap texture", VAR_3);
 return VAR_4;
}
