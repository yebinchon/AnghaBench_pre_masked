
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, const char *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4,
       void *VAR_5)
{
 int VAR_6;

 if (VAR_3 % VAR_4 || VAR_3 < VAR_4) {
  FUNC_0("%s: sizeof(struct %s_device_id)=%lu is not a modulo "
        "of the size of "
        "section __mod_%s__<identifier>_device_table=%lu.\n"
        "Fix definition of struct %s_device_id "
        "in mod_devicetable.h\n",
        VAR_1, VAR_2, VAR_4, VAR_2, VAR_3, VAR_2);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ ) {
  if (*(uint8_t*)(VAR_5+VAR_3-VAR_4+VAR_6)) {
   FUNC_1(VAR_0,"%s: struct %s_device_id is %lu bytes.  "
    "The last of %lu is:\n",
    VAR_1, VAR_2, VAR_4, VAR_3 / VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
    FUNC_1(VAR_0,"0x%02x ",
     *(uint8_t*)(VAR_5+VAR_3-VAR_4+VAR_6) );
   FUNC_1(VAR_0,"\n");
   FUNC_0("%s: struct %s_device_id is not terminated "
    "with a NULL entry!\n", VAR_1, VAR_2);
  }
 }
}
