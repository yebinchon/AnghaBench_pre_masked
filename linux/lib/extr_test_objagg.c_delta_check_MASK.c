
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tokey {int id; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(void *VAR_1, const void *VAR_2, const void *VAR_3)
{
 const struct tokey *VAR_4 = VAR_2;
 const struct tokey *VAR_5 = VAR_3;
 int VAR_6 = VAR_5->id - VAR_4->id;

 return VAR_6 >= 0 && VAR_6 <= VAR_0;
}
