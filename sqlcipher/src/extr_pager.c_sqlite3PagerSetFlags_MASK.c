
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int noSync; int fullSync; int extraSync; int syncFlags; int walSyncFlags; int doNotSpill; scalar_t__ tempFile; } ;
typedef TYPE_1__ Pager ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_0(
  Pager *VAR_10,
  unsigned VAR_11
){
  unsigned VAR_12 = VAR_11 & VAR_5;
  if( VAR_10->tempFile ){
    VAR_10->noSync = 1;
    VAR_10->fullSync = 0;
    VAR_10->extraSync = 0;
  }else{
    VAR_10->noSync = VAR_12==VAR_6 ?1:0;
    VAR_10->fullSync = VAR_12>=VAR_4 ?1:0;
    VAR_10->extraSync = VAR_12==VAR_3 ?1:0;
  }
  if( VAR_10->noSync ){
    VAR_10->syncFlags = 0;
  }else if( VAR_11 & VAR_2 ){
    VAR_10->syncFlags = VAR_8;
  }else{
    VAR_10->syncFlags = VAR_9;
  }
  VAR_10->walSyncFlags = (VAR_10->syncFlags<<2);
  if( VAR_10->fullSync ){
    VAR_10->walSyncFlags |= VAR_10->syncFlags;
  }
  if( (VAR_11 & VAR_1) && !VAR_10->noSync ){
    VAR_10->walSyncFlags |= (VAR_8<<2);
  }
  if( VAR_11 & VAR_0 ){
    VAR_10->doNotSpill &= ~VAR_7;
  }else{
    VAR_10->doNotSpill |= VAR_7;
  }
}
