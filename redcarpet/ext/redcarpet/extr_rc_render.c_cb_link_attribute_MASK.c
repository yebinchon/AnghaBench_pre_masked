
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int dummy; } ;
typedef scalar_t__ VALUE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct buf*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(VALUE VAR_0, VALUE VAR_1, VALUE VAR_2)
{
 struct buf *VAR_3 = (struct buf *)VAR_2;
 VAR_0 = FUNC_2(VAR_0);
 VAR_1 = FUNC_2(VAR_1);
 FUNC_1(VAR_3, " %s=\"%s\"", FUNC_0(VAR_0), FUNC_0(VAR_1));
 return 0;
}
