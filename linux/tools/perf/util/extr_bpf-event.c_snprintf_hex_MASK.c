
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t,char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, size_t VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, "%02x", VAR_2[VAR_5]);
 return VAR_4;
}
