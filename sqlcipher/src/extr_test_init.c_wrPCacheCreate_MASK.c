
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_3__ {int * (* xCreate ) (int,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ pcache; } ;


 int * FUNC_0 (int,int,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static sqlite3_pcache *FUNC_1(int VAR_1, int VAR_2, int VAR_3){
  return VAR_0.pcache.xCreate(VAR_1, VAR_2, VAR_3);
}
