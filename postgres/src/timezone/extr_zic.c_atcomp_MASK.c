
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zic_t ;
struct attype {scalar_t__ at; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const zic_t VAR_2 = ((const struct attype *) VAR_0)->at;
 const zic_t VAR_3 = ((const struct attype *) VAR_1)->at;

 return (VAR_2 < VAR_3) ? -1 : (VAR_2 > VAR_3);
}
