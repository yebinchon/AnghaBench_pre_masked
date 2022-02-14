
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int socket; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hist_entry *VAR_1, int VAR_2, const void *VAR_3)
{
 int VAR_4 = *(const int *)VAR_3;

 if (VAR_2 != VAR_0)
  return -1;

 return VAR_4 >= 0 && VAR_1->socket != VAR_4;
}
