
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0 - sizeof(struct hws_trailer_entry);

 if (VAR_3 - (VAR_2 & (VAR_0 - 1)) < VAR_1)
  return 0;
 return 1;
}
