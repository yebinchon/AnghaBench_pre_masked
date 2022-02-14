
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char type; unsigned char* data; size_t size; int description; int mime_type; } ;
typedef TYPE_1__ mpg123_picture ;
typedef int mpg123_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned char) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,unsigned char,unsigned char*,int,scalar_t__) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;
 unsigned char VAR_2 ;
 unsigned char* FUNC_8 (unsigned char*,unsigned char,size_t) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(mpg123_handle *VAR_4, unsigned char *VAR_5, size_t VAR_6)
{
 unsigned char VAR_7 = VAR_5[0];
 mpg123_picture *VAR_8 = ((void*)0);
 unsigned char* VAR_9;
 if(VAR_6 == 0)
 {
  FUNC_1("Empty id3 data!");
  return;
 }
 if(VAR_7 > VAR_2)
 {
  if(VAR_0)
   FUNC_3("Unknown text encoding %u, I take no chances, sorry!", VAR_7);
  return;
 }
 if(VAR_1) FUNC_4(VAR_3, "Note: Storing picture from APIC frame.\n");

 VAR_8 = FUNC_0(VAR_4);
 if(VAR_8 == ((void*)0))
 {
  if(VAR_0) FUNC_2("Unable to attach new picture!");
  return;
 }
 VAR_5++; VAR_6--;

 VAR_9 = FUNC_8(VAR_5, 0, VAR_6);
 if (VAR_9 == ((void*)0)) {
  FUNC_9(VAR_4);
  if (VAR_0) FUNC_2("Unable to get mime type for picture; skipping picture.");
  return;
 }
 FUNC_5(&VAR_8->mime_type, 0, VAR_5, VAR_9 - VAR_5, VAR_0);
 VAR_6 -= VAR_9 - VAR_5;
 VAR_5 = VAR_9;

 VAR_8->type = VAR_5[0];
 VAR_5++; VAR_6--;

 VAR_9 = FUNC_8(VAR_5, VAR_7, VAR_6);
 if (VAR_9 == ((void*)0)) {
  if (VAR_0) FUNC_2("Unable to get description for picture; skipping picture.");
  FUNC_9(VAR_4);
  return;
 }
 FUNC_5(&VAR_8->description, VAR_7, VAR_5, VAR_9 - VAR_5, VAR_0);
 VAR_6 -= VAR_9 - VAR_5;
 if (VAR_6 == 0) {
  if (VAR_0) FUNC_2("No picture data defined; skipping picture.");
  FUNC_9(VAR_4);
  return;
 }

 VAR_8->data = (unsigned char*)FUNC_6(VAR_6);
 if (VAR_8->data == ((void*)0)) {
  if (VAR_0) FUNC_2("Unable to allocate memory for picture; skipping picture");
  FUNC_9(VAR_4);
  return;
 }
 FUNC_7(VAR_8->data, VAR_9, VAR_6);
 VAR_8->size = VAR_6;
 if(VAR_1) FUNC_4(VAR_3, "Note: ID3v2 APIC picture frame of type: %d\n", VAR_8->type);
}
