
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ synctex_status_t ;
typedef int * synctex_scanner_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,size_t*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 char* FUNC_3 (int ,char*) ;
 float FUNC_4 (char*,char**) ;

synctex_status_t FUNC_5(synctex_scanner_t VAR_7, float * VAR_8) {
 synctex_status_t VAR_9 = 0;
 char * VAR_10 = ((void*)0);
 float VAR_11 = 0;



 size_t VAR_12 = 0;
 if (((void*)0) == VAR_7 || ((void*)0) == VAR_8) {
  return VAR_3;
 }
 VAR_12 = VAR_1;
 VAR_9 = FUNC_0(VAR_7, &VAR_12);
 if (VAR_9<VAR_4) {
  FUNC_1("problem with float.");
  return VAR_9;
 }



 VAR_11 = FUNC_4(VAR_2,&VAR_10);



 if (VAR_10 == VAR_2) {
  FUNC_1("a float was expected.");
  return VAR_5;
 }
 VAR_2 = VAR_10;
 if ((VAR_9 = FUNC_2(VAR_7,"in")) >= VAR_6) {
  VAR_11 *= 72.27f*65536;
 } else if (VAR_9<VAR_4) {
report_unit_error:
  FUNC_1("problem with unit.");
  return VAR_9;
 } else if ((VAR_9 = FUNC_2(VAR_7,"cm")) >= VAR_6) {
  VAR_11 *= 72.27f*65536/2.54f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"mm")) >= VAR_6) {
  VAR_11 *= 72.27f*65536/25.4f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"pt")) >= VAR_6) {
  VAR_11 *= 65536.0f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"bp")) >= VAR_6) {
  VAR_11 *= 72.27f/72*65536.0f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"pc")) >= VAR_6) {
  VAR_11 *= 12.0*65536.0f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"sp")) >= VAR_6) {
  VAR_11 *= 1.0f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"dd")) >= VAR_6) {
  VAR_11 *= 1238.0f/1157*65536.0f;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"cc")) >= VAR_6) {
  VAR_11 *= 14856.0f/1157*65536;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"nd")) >= VAR_6) {
  VAR_11 *= 685.0f/642*65536;
 } else if (VAR_9<0) {
  goto report_unit_error;
 } else if ((VAR_9 = FUNC_2(VAR_7,"nc")) >= VAR_6) {
  VAR_11 *= 1370.0f/107*65536;
 } else if (VAR_9<0) {
  goto report_unit_error;
 }
 *VAR_8 = VAR_11;
 return VAR_6;
}
