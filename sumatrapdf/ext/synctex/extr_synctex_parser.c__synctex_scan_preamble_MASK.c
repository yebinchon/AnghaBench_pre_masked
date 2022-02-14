
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ synctex_status_t ;
typedef TYPE_1__* synctex_scanner_t ;
typedef int synctex_decoder_t ;
struct TYPE_6__ {int pre_y_offset; int pre_x_offset; int pre_unit; int pre_magnification; int output_fmt; int version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int *,int ) ;

synctex_status_t FUNC_3(synctex_scanner_t VAR_5) {
 synctex_status_t VAR_6 = 0;
 if (((void*)0) == VAR_5) {
  return VAR_0;
 }
 VAR_6 = FUNC_2(VAR_5,"SyncTeX Version:",&(VAR_5->version),(synctex_decoder_t)&VAR_3);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }

 do {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6<VAR_1) {
   return VAR_6;
  }
 } while(VAR_6 == VAR_2);


 VAR_6 = FUNC_2(VAR_5,"Output:",&(VAR_5->output_fmt),(synctex_decoder_t)&VAR_4);
 if (VAR_6<VAR_1) {
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_5,"Magnification:",&(VAR_5->pre_magnification),(synctex_decoder_t)&VAR_3);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_5,"Unit:",&(VAR_5->pre_unit),(synctex_decoder_t)&VAR_3);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_5,"X Offset:",&(VAR_5->pre_x_offset),(synctex_decoder_t)&VAR_3);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_5,"Y Offset:",&(VAR_5->pre_y_offset),(synctex_decoder_t)&VAR_3);
 if (VAR_6<VAR_2) {
  return VAR_6;
 }
 return FUNC_0(VAR_5);
}
