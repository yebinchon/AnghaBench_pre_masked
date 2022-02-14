
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;



__attribute__((used)) static unsigned int FUNC_0(struct key *VAR_0)
{
 unsigned char *VAR_1 = (unsigned char *)VAR_0;
 unsigned int VAR_2 = sizeof(struct key);
 unsigned int VAR_3 = 0;
 while (VAR_2--)
  VAR_3 = *VAR_1++ + (VAR_3 << 6) + (VAR_3 << 16) - VAR_3;
 return VAR_3;
}
