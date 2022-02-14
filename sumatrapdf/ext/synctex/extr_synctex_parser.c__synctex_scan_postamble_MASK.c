
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int synctex_decoder_t ;
struct TYPE_7__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(synctex_scanner_t VAR_4) {
 int VAR_5 = 0;
 if (((void*)0) == VAR_4) {
  return VAR_0;
 }
 VAR_5 = FUNC_0(VAR_4,"Postamble:");
 if (VAR_5 < VAR_2) {
  return VAR_5;
 }
count_again:
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < VAR_2) {
  return VAR_5;
 }
 VAR_5 = FUNC_2(VAR_4,"Count:",&(VAR_4->count),(synctex_decoder_t)&VAR_3);
 if (VAR_5 < VAR_1) {
  return VAR_5;
 } else if (VAR_5 < VAR_2) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5<VAR_2) {
   return VAR_5;
  }
  goto count_again;
 }

 return FUNC_3(VAR_4);
}
