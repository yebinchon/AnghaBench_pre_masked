
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct user_desc {int contents; int seg_not_present; scalar_t__ seg_32bit; } ;


 int FUNC_0 (struct user_desc const*,int ,int,int) ;

__attribute__((used)) static bool FUNC_1(const struct user_desc *VAR_0, uint32_t VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0, VAR_1, 0, 1);

 if (VAR_0->contents <= 1 && VAR_0->seg_32bit &&
     !VAR_0->seg_not_present) {

  FUNC_0(VAR_0, VAR_1, 0, 0);
 }

 return VAR_2;
}
