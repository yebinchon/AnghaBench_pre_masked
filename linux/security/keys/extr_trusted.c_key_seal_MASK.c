
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trusted_key_payload {size_t key_len; int blob_len; int blob; int * key; int migratable; } ;
struct trusted_key_options {int pcrinfo_len; int pcrinfo; int blobauth; int keyauth; int keyhandle; int keytype; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tpm_buf* FUNC_0 (int,int ) ;
 int FUNC_1 (struct tpm_buf*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct tpm_buf*,int ,int ,int ,int *,size_t,int ,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct trusted_key_payload *VAR_2,
      struct trusted_key_options *VAR_3)
{
 struct tpm_buf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_2->key[VAR_2->key_len] = VAR_2->migratable;

 VAR_5 = FUNC_3(VAR_4, VAR_3->keytype, VAR_3->keyhandle, VAR_3->keyauth,
         VAR_2->key, VAR_2->key_len + 1, VAR_2->blob, &VAR_2->blob_len,
         VAR_3->blobauth, VAR_3->pcrinfo, VAR_3->pcrinfo_len);
 if (VAR_5 < 0)
  FUNC_2("trusted_key: srkseal failed (%d)\n", VAR_5);

 FUNC_1(VAR_4);
 return VAR_5;
}
