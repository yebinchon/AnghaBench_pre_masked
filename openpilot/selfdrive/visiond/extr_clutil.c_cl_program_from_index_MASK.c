
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int cl_program ;
typedef int cl_device_id ;
typedef int cl_context ;
struct TYPE_3__ {scalar_t__ index_hash; int * bin_data; int * bin_end; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int,int *,size_t*,int const**,int *,int*) ;
 TYPE_1__* VAR_0 ;

cl_program FUNC_4(cl_context VAR_1, cl_device_id VAR_2, uint64_t VAR_3) {
  int VAR_4;

  int VAR_5;
  for (VAR_5=0; VAR_5<FUNC_0(VAR_0); VAR_5++) {
    if (VAR_0[VAR_5].index_hash == VAR_3) {
      break;
    }
  }
  if (VAR_5 >= FUNC_0(VAR_0)) {
    FUNC_1(0);
  }

  size_t VAR_6 = VAR_0[VAR_5].bin_end - VAR_0[VAR_5].bin_data;
  const uint8_t *VAR_7 = VAR_0[VAR_5].bin_data;

  cl_program VAR_8 = FUNC_3(VAR_1, 1, &VAR_2, &VAR_6, (const uint8_t**)&VAR_7, ((void*)0), &VAR_4);
  FUNC_1(VAR_4 == 0);

  VAR_4 = FUNC_2(VAR_8, 1, &VAR_2, ((void*)0), ((void*)0), ((void*)0));
  FUNC_1(VAR_4 == 0);

  return VAR_8;
}
