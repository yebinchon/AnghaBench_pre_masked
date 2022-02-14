
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef enum derived_key_type { ____Placeholder_derived_key_type } derived_key_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,char*,unsigned int) ;
 int VAR_3 ;
 char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(u8 *VAR_4, enum derived_key_type VAR_5,
      const u8 *VAR_6, size_t VAR_7)
{
 u8 *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5("AUTH_KEY") + 1 + VAR_7;
 if (VAR_9 < VAR_2)
  VAR_9 = VAR_2;

 VAR_8 = FUNC_1(VAR_9, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_5)
  FUNC_4(VAR_8, "AUTH_KEY");
 else
  FUNC_4(VAR_8, "ENC_KEY");

 FUNC_3(VAR_8 + FUNC_5(VAR_8) + 1, VAR_6,
        VAR_7);
 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_8, VAR_9);
 FUNC_2(VAR_8);
 return VAR_10;
}
