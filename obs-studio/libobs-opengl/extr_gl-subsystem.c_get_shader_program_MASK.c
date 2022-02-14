
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_program {int dummy; } ;
struct gs_device {int dummy; } ;


 struct gs_program* FUNC_0 (struct gs_device*) ;
 struct gs_program* FUNC_1 (struct gs_device*) ;

__attribute__((used)) static inline struct gs_program *FUNC_2(struct gs_device *VAR_0)
{
 struct gs_program *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
