
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffalo_tag2 {char* brand; char* product; char* platform; char* ver_major; char* ver_minor; char* language; char* region_code; char* hwv; char* hwv_val; void* crc; int flag; void* len2; void* len1; void* total_len; void* region_mask; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 void* FUNC_1 (int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct buffalo_tag2*,char,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(unsigned char *VAR_13, ssize_t VAR_14)
{
 struct buffalo_tag2 *VAR_15 = (struct buffalo_tag2 *) VAR_13;

 FUNC_3(VAR_15, '\0', sizeof(*VAR_15));

 FUNC_2(VAR_15->brand, VAR_0, FUNC_4(VAR_0));
 FUNC_2(VAR_15->product, VAR_9, FUNC_4(VAR_9));
 FUNC_2(VAR_15->platform, VAR_8, FUNC_4(VAR_8));
 FUNC_2(VAR_15->ver_major, VAR_5, FUNC_4(VAR_5));
 FUNC_2(VAR_15->ver_minor, VAR_6, FUNC_4(VAR_6));
 FUNC_2(VAR_15->language, VAR_4, FUNC_4(VAR_4));

 if (VAR_7 > 1) {
  VAR_15->region_code[0] = 'M';
  VAR_15->region_code[1] = '_';
  VAR_15->region_mask = FUNC_1(VAR_11);
 } else {
  FUNC_2(VAR_15->region_code, VAR_10, 2);
 }

 VAR_15->total_len = FUNC_1(VAR_14);
 VAR_15->len1 = FUNC_1(VAR_2[0]);
 VAR_15->len2 = FUNC_1(VAR_2[1]);
 VAR_15->flag = VAR_1;

 if (VAR_3) {
  FUNC_2(VAR_15->hwv, "hwv", 3);
  FUNC_2(VAR_15->hwv_val, VAR_3, FUNC_4(VAR_3));
 }

 if (!VAR_12)
  VAR_15->crc = FUNC_1(FUNC_0(VAR_13, VAR_14));
}
