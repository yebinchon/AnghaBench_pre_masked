
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* xAccess ) (TYPE_2__*,int ,int ,int*) ;int (* xOpen ) (TYPE_2__*,int ,int *,int,int*) ;int szOsFile; } ;
typedef TYPE_2__ sqlite3_vfs ;
typedef int sqlite3_file ;
struct TYPE_11__ {int flags; TYPE_1__* aReal; int zName; } ;
typedef TYPE_3__ multiplexGroup ;
struct TYPE_12__ {TYPE_2__* pOrigVfs; } ;
struct TYPE_9__ {int * p; int z; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int *,int,int*) ;

__attribute__((used)) static sqlite3_file *FUNC_6(
  multiplexGroup *VAR_7,
  int VAR_8,
  int *VAR_9,
  int *VAR_10,
  int VAR_11
){
  sqlite3_file *VAR_12 = 0;
  sqlite3_vfs *VAR_13 = VAR_6.pOrigVfs;
  *VAR_9 = FUNC_0(VAR_7, VAR_8);
  if( (*VAR_9)==VAR_4 && (VAR_12 = VAR_7->aReal[VAR_8].p)==0 ){
    int VAR_14, VAR_15;
    VAR_14 = VAR_7->flags;
    if( VAR_11 ){
      VAR_14 |= VAR_5;
    }else if( VAR_8==0 ){

    }else if( VAR_7->aReal[VAR_8].z==0 ){
      return 0;
    }else{
      *VAR_9 = VAR_13->xAccess(VAR_13, VAR_7->aReal[VAR_8].z,
                              VAR_0, &VAR_15);
     if( *VAR_9 || !VAR_15 ){
        if( *VAR_9 ){
          FUNC_2(*VAR_9, "multiplexor.xAccess failure on %s",
                      VAR_7->aReal[VAR_8].z);
        }
        return 0;
      }
      VAR_14 &= ~VAR_5;
    }
    VAR_12 = FUNC_3( VAR_13->szOsFile );
    if( VAR_12==0 ){
      *VAR_9 = VAR_2;
      return 0;
    }
    VAR_7->aReal[VAR_8].p = VAR_12;
    *VAR_9 = VAR_13->xOpen(VAR_13, VAR_7->aReal[VAR_8].z, VAR_12,
                          VAR_14, VAR_10);
    if( (*VAR_9)!=VAR_4 ){
      FUNC_2(*VAR_9, "multiplexor.xOpen failure on %s",
                  VAR_7->aReal[VAR_8].z);
      FUNC_1(VAR_12);
      VAR_7->aReal[VAR_8].p = 0;
      return 0;
    }
  }
  return VAR_12;
}
