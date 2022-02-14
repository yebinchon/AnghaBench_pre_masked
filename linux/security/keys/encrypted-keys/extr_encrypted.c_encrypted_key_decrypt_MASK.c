
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct key {int sem; } ;
struct encrypted_key_payload {int datablob_len; int * format; int * encrypted_data; int * iv; int decrypted_datalen; } ;
typedef int derived_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int VAR_3 ;
 int FUNC_2 (struct encrypted_key_payload*,char const*,int const*,size_t) ;
 int FUNC_3 (struct encrypted_key_payload*,int *,int) ;
 int FUNC_4 (int *,int ,int const*,size_t) ;
 int FUNC_5 (int *,char const*,int) ;
 int VAR_4 ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,int) ;
 struct key* FUNC_9 (struct encrypted_key_payload*,int const**,size_t*) ;
 unsigned int FUNC_10 (int ,int ) ;
 size_t FUNC_11 (char const*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct encrypted_key_payload *VAR_5,
     const char *VAR_6, const char *VAR_7)
{
 struct key *VAR_8;
 u8 VAR_9[VAR_2];
 const u8 *VAR_10;
 u8 *VAR_11;
 const char *VAR_12;
 unsigned int VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 int VAR_16;

 VAR_13 = FUNC_10(VAR_5->decrypted_datalen, VAR_3);
 VAR_15 = (VAR_4 + 1 + VAR_13 + VAR_2) * 2;
 if (FUNC_11(VAR_7) != VAR_15)
  return -VAR_0;

 VAR_12 = VAR_7 + (2 * VAR_4) + 2;
 VAR_16 = FUNC_5(VAR_5->iv, VAR_7, VAR_4);
 if (VAR_16 < 0)
  return -VAR_0;
 VAR_16 = FUNC_5(VAR_5->encrypted_data, VAR_12,
        VAR_13);
 if (VAR_16 < 0)
  return -VAR_0;

 VAR_11 = VAR_5->format + VAR_5->datablob_len;
 VAR_16 = FUNC_5(VAR_11, VAR_12 + (VAR_13 * 2),
        VAR_2);
 if (VAR_16 < 0)
  return -VAR_0;

 VAR_8 = FUNC_9(VAR_5, &VAR_10, &VAR_14);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_16 = FUNC_2(VAR_5, VAR_6, VAR_10, VAR_14);
 if (VAR_16 < 0) {
  FUNC_8("encrypted_key: bad hmac (%d)\n", VAR_16);
  goto out;
 }

 VAR_16 = FUNC_4(VAR_9, VAR_1, VAR_10, VAR_14);
 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_3(VAR_5, VAR_9, sizeof VAR_9);
 if (VAR_16 < 0)
  FUNC_8("encrypted_key: failed to decrypt key (%d)\n", VAR_16);
out:
 FUNC_12(&VAR_8->sem);
 FUNC_6(VAR_8);
 FUNC_7(VAR_9, sizeof(VAR_9));
 return VAR_16;
}
