
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct switch_dev*,int ,int ,int ) ;
 int FUNC_2 (struct switch_dev*,int ) ;
 int FUNC_3 (struct switch_dev*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_6, int VAR_7, int VAR_8)
{
 FUNC_3(VAR_6, FUNC_0(VAR_5),
      VAR_3 | (VAR_7 << VAR_1) | VAR_8);

 if (FUNC_1(VAR_6, FUNC_0(VAR_5),
     VAR_2, 0) < 0)
  return -VAR_0;

 return FUNC_2(VAR_6, FUNC_0(VAR_4));
}
