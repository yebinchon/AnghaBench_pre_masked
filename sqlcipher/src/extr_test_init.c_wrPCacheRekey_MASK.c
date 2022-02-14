
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_pcache_page ;
typedef int sqlite3_pcache ;
struct TYPE_3__ {int (* xRekey ) (int *,int *,unsigned int,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ pcache; } ;


 int FUNC_0 (int *,int *,unsigned int,unsigned int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(
  sqlite3_pcache *VAR_1,
  sqlite3_pcache_page *VAR_2,
  unsigned VAR_3,
  unsigned VAR_4
){
  VAR_0.pcache.xRekey(VAR_1, VAR_2, VAR_3, VAR_4);
}
