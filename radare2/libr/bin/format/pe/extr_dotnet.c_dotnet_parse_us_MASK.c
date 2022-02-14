
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut64 ;
typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ size; int length; } ;
struct TYPE_10__ {int* data; int object; } ;
struct TYPE_9__ {int Offset; int Size; } ;
typedef TYPE_1__* PSTREAM_HEADER ;
typedef TYPE_2__ PE ;
typedef TYPE_3__ BLOB_PARSE_RESULT ;


 TYPE_3__ FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (char*,scalar_t__,int ,char*,int) ;

void FUNC_4( PE* VAR_0, ut64 VAR_1, PSTREAM_HEADER VAR_2) {
 BLOB_PARSE_RESULT VAR_3;
 int VAR_4 = 0;

 const uint8_t* VAR_5 = VAR_0->data + VAR_1 + VAR_2->Offset;
 const uint8_t* VAR_6 = VAR_5 + VAR_2->Size;



 if (!FUNC_1(VAR_0, VAR_5, VAR_2->Size) || *VAR_5 != 0x00) {
  return;
 }

 VAR_5++;

 while (VAR_5 < VAR_6) {
  VAR_3 = FUNC_0(VAR_0, VAR_5);

  if (VAR_3.size == 0 || !FUNC_1(VAR_0, VAR_5, VAR_3.length)) {
   FUNC_2(VAR_4, VAR_0->object, "number_of_user_strings");
   return;
  }

  VAR_5 += VAR_3.size;



  if (VAR_3.length > 0) {
   FUNC_3(
     (char*) VAR_5,
     VAR_3.length,
     VAR_0->object,
     "user_strings[%i]",
     VAR_4);

   VAR_5 += VAR_3.length;
   VAR_4++;
  }
 }

 FUNC_2(VAR_4, VAR_0->object, "number_of_user_strings");
}
