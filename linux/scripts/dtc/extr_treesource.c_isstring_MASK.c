
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char*,char) ;

__attribute__((used)) static bool FUNC_2(char VAR_0)
{
 return (FUNC_0((unsigned char)VAR_0)
  || (VAR_0 == '\0')
  || FUNC_1("\a\b\t\n\v\f\r", VAR_0));
}
