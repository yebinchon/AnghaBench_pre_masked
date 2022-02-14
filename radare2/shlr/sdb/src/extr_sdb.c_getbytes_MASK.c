
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int db; } ;
typedef TYPE_1__ Sdb ;


 int FUNC_0 (int *,char*,int,int) ;

__attribute__((used)) static int FUNC_1(Sdb *VAR_0, char *VAR_1, int VAR_2) {
 if (!FUNC_0 (&VAR_0->db, VAR_1, VAR_2, VAR_0->pos)) {
  return -1;
 }
 VAR_0->pos += VAR_2;
 return VAR_2;
}
