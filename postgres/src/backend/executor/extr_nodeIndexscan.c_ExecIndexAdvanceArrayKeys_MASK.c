
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int next_elem; int num_elems; int* elem_nulls; int * elem_values; TYPE_1__* scan_key; } ;
struct TYPE_4__ {int sk_flags; int sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef TYPE_2__ IndexArrayKeyInfo ;
typedef int Datum ;


 int VAR_0 ;

bool
FUNC_0(IndexArrayKeyInfo *VAR_1, int VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;







 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--)
 {
  ScanKey VAR_5 = VAR_1[VAR_4].scan_key;
  int VAR_6 = VAR_1[VAR_4].next_elem;
  int VAR_7 = VAR_1[VAR_4].num_elems;
  Datum *VAR_8 = VAR_1[VAR_4].elem_values;
  bool *VAR_9 = VAR_1[VAR_4].elem_nulls;

  if (VAR_6 >= VAR_7)
  {
   VAR_6 = 0;
   VAR_3 = 0;
  }
  else
   VAR_3 = 1;
  VAR_5->sk_argument = VAR_8[VAR_6];
  if (VAR_9[VAR_6])
   VAR_5->sk_flags |= VAR_0;
  else
   VAR_5->sk_flags &= ~VAR_0;
  VAR_1[VAR_4].next_elem = VAR_6 + 1;
  if (VAR_3)
   break;
 }

 return VAR_3;
}
