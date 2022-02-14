
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntups; int numAttributes; int noticeHooks; } ;
typedef TYPE_1__ PGresult ;


 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static int
FUNC_1(const PGresult *VAR_0,
       int VAR_1, int VAR_2)
{
 if (!VAR_0)
  return 0;
 if (VAR_1 < 0 || VAR_1 >= VAR_0->ntups)
 {
  FUNC_0(&VAR_0->noticeHooks,
       "row number %d is out of range 0..%d",
       VAR_1, VAR_0->ntups - 1);
  return 0;
 }
 if (VAR_2 < 0 || VAR_2 >= VAR_0->numAttributes)
 {
  FUNC_0(&VAR_0->noticeHooks,
       "column number %d is out of range 0..%d",
       VAR_2, VAR_0->numAttributes - 1);
  return 0;
 }
 return 1;
}
