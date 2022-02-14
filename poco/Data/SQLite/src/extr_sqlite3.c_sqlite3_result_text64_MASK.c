
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
struct TYPE_9__ {TYPE_2__* pOut; } ;
typedef TYPE_3__ sqlite3_context ;
struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;


 void FUNC_0 (void*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,void (*) (void*),TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char const*,int,unsigned char,void (*) (void*)) ;
 int FUNC_4 (int ) ;

void FUNC_5(
  sqlite3_context *VAR_2,
  const char *VAR_3,
  sqlite3_uint64 VAR_4,
  void (*VAR_5)(void *),
  unsigned char VAR_6
){
  FUNC_1( FUNC_4(VAR_2->pOut->db->mutex) );
  FUNC_1( VAR_5!=FUNC_0 );
  if( VAR_6==VAR_0 ) VAR_6 = VAR_1;
  if( VAR_4>0x7fffffff ){
    (void)FUNC_2(VAR_3, VAR_5, VAR_2);
  }else{
    FUNC_3(VAR_2, VAR_3, (int)VAR_4, VAR_6, VAR_5);
  }
}
