
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,size_t,int *,size_t,int ,void**,size_t*,int*) ;
 int * FUNC_2 (char const*,size_t*) ;
 int FUNC_3 (char*,...) ;

void* FUNC_4(const uint8_t* VAR_0, size_t VAR_1, const char* VAR_2, uint8_t VAR_3, size_t* VAR_4)
{
 void* VAR_5 = ((void*)0);
 uint8_t* VAR_6 = ((void*)0);
 size_t VAR_7 = 0;
 BOOL VAR_8 = ((VAR_2 == ((void*)0)) || (VAR_2[0] == 0));

 if (VAR_1 >= 65536) {
  FUNC_3("get_data_from_asn1: Buffers larger than 64KB are not supported");
  return ((void*)0);
 }

 if (!VAR_8) {

  VAR_6 = FUNC_2(VAR_2, &VAR_7);
  if (VAR_6 == ((void*)0)) {
   FUNC_3("get_data_from_asn1: Could not convert OID string '%s'", VAR_2);
   return ((void*)0);
  }
 }


 FUNC_1(VAR_0, VAR_1, VAR_6, VAR_7, VAR_3, &VAR_5, VAR_4, &VAR_8);
 FUNC_0(VAR_6);
 return VAR_5;
}
