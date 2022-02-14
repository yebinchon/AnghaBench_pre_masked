
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ synctex_status_t ;
typedef TYPE_2__* synctex_scanner_t ;
struct TYPE_20__ {TYPE_2__* scanner; } ;
struct TYPE_18__ {int has_parsed; } ;
struct TYPE_19__ {int pre_magnification; int pre_unit; int pre_x_offset; int pre_y_offset; float x_offset; float y_offset; double unit; TYPE_6__* class; TYPE_1__ flags; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_6__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_6__ VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_6__ VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_6 (TYPE_2__*) ;

synctex_scanner_t FUNC_7(synctex_scanner_t VAR_26) {
 synctex_status_t VAR_27 = 0;
 if (!VAR_26 || VAR_26->flags.has_parsed) {
  return VAR_26;
 }
 VAR_26->flags.has_parsed=1;
 VAR_26->pre_magnification = 1000;
 VAR_26->pre_unit = 8192;
 VAR_26->pre_x_offset = VAR_26->pre_y_offset = 578;


 VAR_26->x_offset = VAR_26->y_offset = 6.027e23f;
 VAR_26->class[VAR_22] = VAR_12;
 VAR_26->class[VAR_19] = VAR_9;
 (VAR_26->class[VAR_19]).scanner = VAR_26;
 (VAR_26->class[VAR_22]).scanner = VAR_26;
 VAR_26->class[VAR_23] = VAR_13;
 (VAR_26->class[VAR_23]).scanner = VAR_26;
 VAR_26->class[VAR_25] = VAR_15;
 (VAR_26->class[VAR_25]).scanner = VAR_26;
 VAR_26->class[VAR_18] = VAR_8;
 (VAR_26->class[VAR_18]).scanner = VAR_26;
 VAR_26->class[VAR_24] = VAR_14;
 (VAR_26->class[VAR_24]).scanner = VAR_26;
 VAR_26->class[VAR_20] = VAR_10;
 (VAR_26->class[VAR_20]).scanner = VAR_26;
 VAR_26->class[VAR_17] = VAR_7;
 (VAR_26->class[VAR_17]).scanner = VAR_26;
 VAR_26->class[VAR_21] = VAR_11;
 (VAR_26->class[VAR_21]).scanner = VAR_26;
 VAR_26->class[VAR_16] = VAR_6;
 (VAR_26->class[VAR_16]).scanner = VAR_26;
 VAR_4 = (char *)FUNC_5(VAR_0+1);
 if (((void*)0) == VAR_4) {
  FUNC_0("SyncTeX: malloc error");
  FUNC_6(VAR_26);
  return ((void*)0);
 }
 VAR_2 = VAR_4+VAR_0;



 *VAR_2 = '\0';
 VAR_1 = VAR_2;
 VAR_27 = FUNC_2(VAR_26);
 if (VAR_27<VAR_5) {
  FUNC_0("SyncTeX Error: Bad preamble\n");
bailey:
  FUNC_6(VAR_26);
  return ((void*)0);
 }
 VAR_27 = FUNC_1(VAR_26);
 if (VAR_27<VAR_5) {
  FUNC_0("SyncTeX Error: Bad content\n");
  goto bailey;
 }

 FUNC_3((void *)VAR_4);
 VAR_4 = VAR_1 = VAR_2 = ((void*)0);
 FUNC_4(VAR_3);
 VAR_3 = ((void*)0);



 if (VAR_26->pre_unit<=0) {
  VAR_26->pre_unit = 8192;
 }
 if (VAR_26->pre_magnification<=0) {
  VAR_26->pre_magnification = 1000;
 }
 if (VAR_26->unit <= 0) {

  VAR_26->unit = VAR_26->pre_unit / 65781.76;
 } else {

  VAR_26->unit *= VAR_26->pre_unit / 65781.76;
 }
 VAR_26->unit *= VAR_26->pre_magnification / 1000.0;
 if (VAR_26->x_offset > 6e23) {

  VAR_26->x_offset = VAR_26->pre_x_offset * (VAR_26->pre_unit / 65781.76);
  VAR_26->y_offset = VAR_26->pre_y_offset * (VAR_26->pre_unit / 65781.76);
 } else {

  VAR_26->x_offset /= 65781.76f;
  VAR_26->y_offset /= 65781.76f;
 }
 return VAR_26;

}
