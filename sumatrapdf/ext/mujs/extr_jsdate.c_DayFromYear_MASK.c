
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
 return 365 * (VAR_0 - 1970) +
  FUNC_0((VAR_0 - 1969) / 4.0) -
  FUNC_0((VAR_0 - 1901) / 100.0) +
  FUNC_0((VAR_0 - 1601) / 400.0);
}
