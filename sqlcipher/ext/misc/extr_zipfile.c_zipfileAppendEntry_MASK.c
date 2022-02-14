
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_7__ {int szCurrent; int const* aBuffer; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_8__ {int iDataOff; } ;
typedef TYPE_2__ ZipfileEntry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*,int) ;
 int FUNC_1 (TYPE_2__*,int const*) ;

__attribute__((used)) static int FUNC_2(
  ZipfileTab *VAR_1,
  ZipfileEntry *VAR_2,
  const u8 *VAR_3,
  int VAR_4
){
  u8 *VAR_5 = VAR_1->aBuffer;
  int VAR_6;
  int VAR_7;

  VAR_6 = FUNC_1(VAR_2, VAR_5);
  VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_6);
  if( VAR_7==VAR_0 ){
    VAR_2->iDataOff = VAR_1->szCurrent;
    VAR_7 = FUNC_0(VAR_1, VAR_3, VAR_4);
  }

  return VAR_7;
}
