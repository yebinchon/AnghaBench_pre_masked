
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int data_size; int const* data; } ;
typedef TYPE_1__ PE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (void*,size_t,char*,int) ;

char* FUNC_1( PE* VAR_0, const uint8_t* VAR_1, DWORD VAR_2) {

 if (!(VAR_1 + VAR_2 >= VAR_0->data &&
   VAR_1 + VAR_2 < VAR_0->data + VAR_0->data_size)) {
  return ((void*)0);
 }

 size_t VAR_3 = (VAR_0->data + VAR_0->data_size) - (VAR_1 + VAR_2);


 char *VAR_4 = (char*) (VAR_1 + VAR_2);
 char *VAR_5 = (char*) FUNC_0((void*) VAR_4, VAR_3, "\0", 1);

 return VAR_5? VAR_4: ((void*)0);
}
