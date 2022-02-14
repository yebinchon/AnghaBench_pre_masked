
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_data {double n; double inc; double end; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 struct seq_data* FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,char*,double*,double*,double*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,void*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  double VAR_7=1, VAR_8=-1, VAR_9=1, VAR_10;
  struct seq_data* VAR_11;

  FUNC_1(VAR_3, VAR_4, VAR_5, "|fff", &VAR_7, &VAR_8, &VAR_10);
  switch (VAR_4) {
  case 1:
    VAR_8 = VAR_7;
    VAR_7 = 1;
    break;
  case 3:
    VAR_9 = VAR_8;
    VAR_8 = VAR_10;
    break;
  default:
    break;
  }
  VAR_11 = FUNC_0(sizeof(*VAR_11));
  VAR_11->n = VAR_7;
  VAR_11->inc = VAR_9;
  VAR_11->end = VAR_8;
  *VAR_6 = FUNC_3(FUNC_2(VAR_2, VAR_1, ((void*)0), (void*)VAR_11));
  return VAR_0;
}
