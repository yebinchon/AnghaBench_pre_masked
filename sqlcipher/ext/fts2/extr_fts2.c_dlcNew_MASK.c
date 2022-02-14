
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {int dlw; int plw; int b; } ;
typedef int DocListType ;
typedef TYPE_1__ DLCollector ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static DLCollector *FUNC_4(sqlite_int64 VAR_0, DocListType VAR_1){
  DLCollector *VAR_2 = FUNC_3(sizeof(DLCollector));
  FUNC_0(&VAR_2->b, 0);
  FUNC_1(&VAR_2->dlw, VAR_1, &VAR_2->b);
  FUNC_2(&VAR_2->plw, &VAR_2->dlw, VAR_0);
  return VAR_2;
}
