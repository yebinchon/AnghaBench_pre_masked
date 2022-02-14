
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int i64 ;
struct TYPE_6__ {int i; scalar_t__ nZero; } ;
struct TYPE_7__ {int flags; scalar_t__ n; TYPE_2__ u; TYPE_1__* db; } ;
struct TYPE_5__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

u32 FUNC_1(Mem *VAR_7, int VAR_8, u32 *VAR_9){
  int VAR_10 = VAR_7->flags;
  u32 VAR_11;

  FUNC_0( VAR_9!=0 );
  if( VAR_10&VAR_3 ){
    *VAR_9 = 0;
    return 0;
  }
  if( VAR_10&VAR_2 ){


    i64 VAR_12 = VAR_7->u.i;
    u64 VAR_13;
    if( VAR_12<0 ){
      VAR_13 = ~VAR_12;
    }else{
      VAR_13 = VAR_12;
    }
    if( VAR_13<=127 ){
      if( (VAR_12&1)==VAR_12 && VAR_8>=4 ){
        *VAR_9 = 0;
        return 8+(u32)VAR_13;
      }else{
        *VAR_9 = 1;
        return 1;
      }
    }
    if( VAR_13<=32767 ){ *VAR_9 = 2; return 2; }
    if( VAR_13<=8388607 ){ *VAR_9 = 3; return 3; }
    if( VAR_13<=2147483647 ){ *VAR_9 = 4; return 4; }
    if( VAR_13<=((((i64)0x00008000)<<32)-1) ){ *VAR_9 = 6; return 5; }
    *VAR_9 = 8;
    return 6;
  }
  if( VAR_10&VAR_4 ){
    *VAR_9 = 8;
    return 7;
  }
  FUNC_0( VAR_7->db->mallocFailed || VAR_10&(VAR_5|VAR_1) );
  FUNC_0( VAR_7->n>=0 );
  VAR_11 = (u32)VAR_7->n;
  if( VAR_10 & VAR_6 ){
    VAR_11 += VAR_7->u.nZero;
  }
  *VAR_9 = VAR_11;
  return ((VAR_11*2) + 12 + ((VAR_10&VAR_5)!=0));
}
