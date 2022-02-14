
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,int ,int ) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_7,
       u32 *VAR_8, u32 *VAR_9)
{
 u32 VAR_10, VAR_11;


 if (!VAR_7[VAR_6])
  return -VAR_0;

 VAR_10 = FUNC_0(FUNC_2(VAR_7[VAR_3]));
 VAR_11 = FUNC_0(FUNC_2(VAR_7[VAR_6]));

 *VAR_8 = 0;
 *VAR_9 = 0;

 FUNC_1(VAR_10, VAR_11, VAR_8, VAR_9,
   VAR_5, VAR_2);
 FUNC_1(VAR_10, VAR_11, VAR_8, VAR_9,
   VAR_4,
   VAR_1);

 return 0;
}
