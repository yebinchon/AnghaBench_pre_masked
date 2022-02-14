
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_3__ {int * init; } ;
typedef TYPE_1__ TIFFCodec ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

int
FUNC_1(uint16 VAR_1)
{
 const TIFFCodec* VAR_2 = FUNC_0(VAR_1);

 if(VAR_2 == ((void*)0)) {
  return 0;
 }
 if(VAR_2->init == ((void*)0)) {
  return 0;
 }
 if(VAR_2->init != VAR_0){
  return 1;
 }
 return 0;
}
