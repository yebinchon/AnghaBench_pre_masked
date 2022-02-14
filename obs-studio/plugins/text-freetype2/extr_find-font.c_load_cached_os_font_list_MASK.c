
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef scalar_t__ uint32_t ;
struct serializer {int dummy; } ;
typedef int old_checksum ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct serializer*) ;
 int FUNC_2 (struct serializer*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct serializer*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (struct serializer*,scalar_t__*,int) ;
 int FUNC_7 (struct serializer*,scalar_t__*,int) ;

bool FUNC_8(void)
{
 char *VAR_1 = FUNC_5("font_data.bin");
 uint32_t VAR_2;
 uint32_t VAR_3;
 struct serializer VAR_4;
 uint32_t VAR_5;
 bool VAR_6;

 VAR_6 = FUNC_2(&VAR_4, VAR_1);
 FUNC_0(VAR_1);

 if (!VAR_6)
  return 0;

 VAR_6 = FUNC_6(&VAR_4, &VAR_5, sizeof(VAR_5));

 if (!VAR_6 || VAR_5 != VAR_0) {
  VAR_6 = 0;
  goto finish;
 }

 VAR_6 = FUNC_7(&VAR_4, &VAR_2, sizeof(VAR_2));
 VAR_3 = FUNC_3();

 if (!VAR_6 || VAR_2 != VAR_3) {
  VAR_6 = 0;
  goto finish;
 }

 VAR_6 = FUNC_4(&VAR_4);

finish:
 FUNC_1(&VAR_4);
 return VAR_6;
}
