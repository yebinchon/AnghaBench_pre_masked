
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int size; int length; } ;
struct TYPE_6__ {int const* data; int data_size; } ;
typedef TYPE_1__ PE ;
typedef int DWORD ;
typedef TYPE_2__ BLOB_PARSE_RESULT ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;

BLOB_PARSE_RESULT FUNC_1( PE* VAR_0, const uint8_t* VAR_1) {
 BLOB_PARSE_RESULT VAR_2;
 if (!FUNC_0(VAR_0, VAR_1, 1)) {
  VAR_2.size = 0;
  return VAR_2;
 }

 if ((*VAR_1 & 0x80) == 0x00) {
  VAR_2.length = (DWORD) *VAR_1;
  VAR_2.size = 1;
 } else if ((*VAR_1 & 0xC0) == 0x80) {

  if (!FUNC_0(VAR_0, VAR_1, 2)) {
   VAR_2.size = 0;
   return VAR_2;
  }


  VAR_2.length = ((*VAR_1 & 0x3F) << 8) | *(VAR_1 + 1);
  VAR_2.size = 2;
 } else if (VAR_1 + 4 < VAR_0->data + VAR_0->data_size && (*VAR_1 & 0xE0) == 0xC0) {

  if (!FUNC_0(VAR_0, VAR_1, 4)) {
   VAR_2.size = 0;
   return VAR_2;
  }

  VAR_2.length = ((*VAR_1 & 0x1F) << 24) |
   (*(VAR_1 + 1) << 16) |
   (*(VAR_1 + 2) << 8) |
   *(VAR_1 + 3);
  VAR_2.size = 4;
 } else {

  VAR_2.size = 0;
 }
 return VAR_2;
}
