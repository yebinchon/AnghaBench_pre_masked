
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
struct cdb_make {scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct cdb_make *VAR_2, uint32 VAR_3)
{
 uint32 VAR_4 = VAR_2->pos + VAR_3;
 if (VAR_4 < VAR_3) {
  VAR_1 = VAR_0;
  return -1;
 }
 VAR_2->pos = VAR_4;
 return 0;
}
