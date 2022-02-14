
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct encrypted_key_payload {unsigned short datablob_len; char* master_desc; char* format; } ;
typedef int digest ;
typedef int derived_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int,char*,unsigned short) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,char const*,size_t) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct encrypted_key_payload *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5,
    size_t VAR_6)
{
 u8 VAR_7[VAR_2];
 u8 VAR_8[VAR_2];
 int VAR_9;
 char *VAR_10;
 unsigned short VAR_11;

 VAR_9 = FUNC_3(VAR_7, VAR_0, VAR_5, VAR_6);
 if (VAR_9 < 0)
  goto out;

 VAR_11 = VAR_3->datablob_len;
 if (!VAR_4) {
  VAR_10 = VAR_3->master_desc;
  VAR_11 -= FUNC_5(VAR_3->format) + 1;
 } else
  VAR_10 = VAR_3->format;

 VAR_9 = FUNC_0(VAR_8, VAR_7, sizeof VAR_7, VAR_10, VAR_11);
 if (VAR_9 < 0)
  goto out;
 VAR_9 = FUNC_1(VAR_8, VAR_3->format + VAR_3->datablob_len,
       sizeof(VAR_8));
 if (VAR_9) {
  VAR_9 = -VAR_1;
  FUNC_2("datablob",
     VAR_3->format + VAR_3->datablob_len,
     VAR_2);
  FUNC_2("calc", VAR_8, VAR_2);
 }
out:
 FUNC_4(VAR_7, sizeof(VAR_7));
 return VAR_9;
}
