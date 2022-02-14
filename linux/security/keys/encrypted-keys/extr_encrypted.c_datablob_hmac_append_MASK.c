
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct encrypted_key_payload {int datablob_len; int * format; } ;
typedef int derived_key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int const*,size_t) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct encrypted_key_payload *VAR_2,
    const u8 *VAR_3, size_t VAR_4)
{
 u8 VAR_5[VAR_1];
 u8 *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_3, VAR_4);
 if (VAR_7 < 0)
  goto out;

 VAR_6 = VAR_2->format + VAR_2->datablob_len;
 VAR_7 = FUNC_0(VAR_6, VAR_5, sizeof VAR_5,
   VAR_2->format, VAR_2->datablob_len);
 if (!VAR_7)
  FUNC_1(((void*)0), VAR_6, VAR_1);
out:
 FUNC_3(VAR_5, sizeof(VAR_5));
 return VAR_7;
}
