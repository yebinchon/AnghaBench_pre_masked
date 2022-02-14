
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct mbfl_convert_vtbl {scalar_t__ from; scalar_t__ to; } ;
struct TYPE_6__ {scalar_t__ no_encoding; struct mbfl_convert_vtbl const* output_filter; struct mbfl_convert_vtbl const* input_filter; } ;
typedef TYPE_1__ mbfl_encoding ;


 TYPE_1__ const VAR_0 ;
 TYPE_1__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mbfl_convert_vtbl** VAR_7 ;
 struct mbfl_convert_vtbl const VAR_8 ;

const struct mbfl_convert_vtbl * FUNC_0(
  const mbfl_encoding *VAR_9, const mbfl_encoding *VAR_10)
{
 if (VAR_10->no_encoding == VAR_3 ||
     VAR_10->no_encoding == VAR_4 ||
     VAR_10->no_encoding == VAR_2) {
  VAR_9 = &VAR_0;
 } else if (VAR_9->no_encoding == VAR_3 ||
      VAR_9->no_encoding == VAR_4 ||
      VAR_9->no_encoding == VAR_5) {
  VAR_10 = &VAR_0;
 }

 if (VAR_10 == VAR_9 && (VAR_10 == &VAR_1 || VAR_10 == &VAR_0)) {
  return &VAR_8;
 }

 if (VAR_10->no_encoding == VAR_6) {
  return VAR_9->input_filter;
 } else if (VAR_9->no_encoding == VAR_6) {
  return VAR_10->output_filter;
 } else {
  int VAR_11 = 0;
  const struct mbfl_convert_vtbl *VAR_12;
  while ((VAR_12 = VAR_7[VAR_11++]) != ((void*)0)){
   if (VAR_12->from == VAR_9->no_encoding && VAR_12->to == VAR_10->no_encoding) {
    return VAR_12;
   }
  }
  return ((void*)0);
 }
}
