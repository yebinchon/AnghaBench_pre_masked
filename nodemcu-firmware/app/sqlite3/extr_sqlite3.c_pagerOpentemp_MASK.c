
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {int pVfs; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(
  Pager *VAR_6,
  sqlite3_file *VAR_7,
  int VAR_8
){
  int VAR_9;





  VAR_8 |= VAR_4 | VAR_1 |
            VAR_3 | VAR_2;
  VAR_9 = FUNC_2(VAR_6->pVfs, 0, VAR_7, VAR_8, 0);
  FUNC_0( VAR_9!=VAR_0 || FUNC_1(VAR_7) );
  return VAR_9;
}
