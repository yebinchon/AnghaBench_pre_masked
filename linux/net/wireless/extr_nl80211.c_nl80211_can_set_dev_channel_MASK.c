
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct wireless_dev *VAR_4)
{
 return !VAR_4 ||
  VAR_4->iftype == VAR_0 ||
  VAR_4->iftype == VAR_1 ||
  VAR_4->iftype == VAR_2 ||
  VAR_4->iftype == VAR_3;
}
