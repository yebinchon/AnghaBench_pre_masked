
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct btf const*) ;
 struct btf_type* FUNC_1 (struct btf const*,int) ;
 int FUNC_2 (struct btf const*,int,struct btf_type const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct btf *VAR_2,
   __u32 *VAR_3, int VAR_4)
{
 const struct btf_type *VAR_5;
 int VAR_6;

 if (VAR_0) {
  FUNC_7(VAR_1);
  FUNC_5(VAR_1, "types");
  FUNC_6(VAR_1);
 }

 if (VAR_4) {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   VAR_5 = FUNC_1(VAR_2, VAR_3[VAR_6]);
   FUNC_2(VAR_2, VAR_3[VAR_6], VAR_5);
  }
 } else {
  int VAR_7 = FUNC_0(VAR_2);

  for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++) {
   VAR_5 = FUNC_1(VAR_2, VAR_6);
   FUNC_2(VAR_2, VAR_6, VAR_5);
  }
 }

 if (VAR_0) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
 }
 return 0;
}
