
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef scalar_t__ synctex_node_t ;
struct TYPE_3__ {char* output; char* output_fmt; int version; int pre_unit; int pre_x_offset; int pre_y_offset; int count; double unit; double x_offset; double y_offset; int number_of_lists; scalar_t__* lists_of_friends; int sheet; int input; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (scalar_t__) ;

void FUNC_6(synctex_scanner_t VAR_0) {
 if (((void*)0) == VAR_0) {
  return;
 }
 FUNC_4("The scanner:\noutput:%s\noutput_fmt:%s\nversion:%i\n",VAR_0->output,VAR_0->output_fmt,VAR_0->version);
 FUNC_4("pre_unit:%i\nx_offset:%i\ny_offset:%i\n",VAR_0->pre_unit,VAR_0->pre_x_offset,VAR_0->pre_y_offset);
 FUNC_4("count:%i\npost_magnification:%f\npost_x_offset:%f\npost_y_offset:%f\n",
  VAR_0->count,VAR_0->unit,VAR_0->x_offset,VAR_0->y_offset);
 FUNC_4("The input:\n");
 FUNC_0(VAR_0->input);
 if (VAR_0->count<1000) {
  FUNC_4("The sheets:\n");
  FUNC_0(VAR_0->sheet);
  FUNC_4("The friends:\n");
  if (VAR_0->lists_of_friends) {
   int VAR_1 = VAR_0->number_of_lists;
   synctex_node_t VAR_2;
   while(VAR_1--) {
    FUNC_4("Friend index:%i\n",VAR_1);
    VAR_2 = (VAR_0->lists_of_friends)[VAR_1];
    while(VAR_2) {
     FUNC_4("%s:%i,%i\n",
      FUNC_5(VAR_2),
      FUNC_3(VAR_2),
      FUNC_2(VAR_2)
     );
     VAR_2 = FUNC_1(VAR_2);
    }
   }
  }
 } else {
  FUNC_4("SyncTeX Warning: Too many objects\n");
 }
}
