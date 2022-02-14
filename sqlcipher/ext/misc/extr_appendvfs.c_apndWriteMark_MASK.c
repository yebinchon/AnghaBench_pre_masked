
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_9__ {int iPgOne; int iMark; } ;
struct TYPE_7__ {int (* xWrite ) (TYPE_2__*,unsigned char*,int,int ) ;} ;
typedef TYPE_3__ ApndFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_2(ApndFile *VAR_3, sqlite3_file *VAR_4){
  int VAR_5;
  unsigned char VAR_6[VAR_2];
  FUNC_0(VAR_6, VAR_0, VAR_1);
  for(VAR_5=0; VAR_5<8; VAR_5++){
    VAR_6[VAR_1+VAR_5] = (VAR_3->iPgOne >> (56 - VAR_5*8)) & 0xff;
  }
  return VAR_4->pMethods->xWrite(VAR_4, VAR_6, VAR_2, VAR_3->iMark);
}
