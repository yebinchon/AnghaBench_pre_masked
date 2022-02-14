
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_3__ {int (* xPagecount ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ pcache; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(sqlite3_pcache *VAR_1){
  return VAR_0.pcache.xPagecount(VAR_1);
}
