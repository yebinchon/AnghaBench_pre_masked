
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbfl_identify_filter ;
struct TYPE_4__ {int filter_list_size; int strict; int ** filter_list; } ;
typedef TYPE_1__ mbfl_encoding_detector ;
typedef int mbfl_encoding ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int) ;

mbfl_encoding_detector *
FUNC_4(const mbfl_encoding **VAR_0, int VAR_1, int VAR_2)
{
 mbfl_encoding_detector *VAR_3;

 int VAR_4, VAR_5;
 mbfl_identify_filter *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 <= 0) {
  return ((void*)0);
 }


 VAR_3 = (mbfl_encoding_detector*)FUNC_3(sizeof(mbfl_encoding_detector));
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_3->filter_list = (mbfl_identify_filter **)FUNC_0(VAR_1, sizeof(mbfl_identify_filter *));
 if (VAR_3->filter_list == ((void*)0)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }


 VAR_4 = 0;
 VAR_5 = 0;
 while (VAR_4 < VAR_1) {
  VAR_6 = FUNC_2(VAR_0[VAR_4]);
  if (VAR_6 != ((void*)0)) {
   VAR_3->filter_list[VAR_5] = VAR_6;
   VAR_5++;
  }
  VAR_4++;
 }
 VAR_3->filter_list_size = VAR_5;


 VAR_3->strict = VAR_2;

 return VAR_3;
}
