
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct signature_hdr {scalar_t__ algo; scalar_t__ keyid; } ;
struct shash_desc {int tfm; } ;
struct key {int dummy; } ;
typedef struct key* key_ref_t ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (struct key*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct shash_desc*,unsigned char*) ;
 int FUNC_6 (struct shash_desc*) ;
 int FUNC_7 (struct shash_desc*,char const*,int) ;
 int FUNC_8 (struct key*,char const*,int,unsigned char*,int) ;
 int FUNC_9 (struct key*) ;
 struct key* FUNC_10 (struct key*) ;
 int VAR_6 ;
 struct key* FUNC_11 (int ,int *,char*,int) ;
 int FUNC_12 (struct shash_desc*) ;
 struct shash_desc* FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (struct key*,unsigned long) ;
 int FUNC_15 (char*,char*) ;
 struct key* FUNC_16 (int *,char*,int *) ;
 int VAR_7 ;
 int FUNC_17 (char*,char*,int ) ;

int FUNC_18(struct key *VAR_8, const char *VAR_9, int VAR_10,
      const char *VAR_11, int VAR_12)
{
 int VAR_13 = -VAR_1;
 struct signature_hdr *VAR_14 = (struct signature_hdr *)VAR_9;
 struct shash_desc *VAR_15 = ((void*)0);
 unsigned char VAR_16[VAR_5];
 struct key *VAR_17;
 char VAR_18[20];

 if (VAR_10 < sizeof(*VAR_14) + 2)
  return -VAR_0;

 if (VAR_14->algo != VAR_4)
  return -VAR_2;

 FUNC_17(VAR_18, "%llX", FUNC_3((uint64_t *)VAR_14->keyid));

 if (VAR_8) {

  key_ref_t VAR_19;
  VAR_19 = FUNC_11(FUNC_14(VAR_8, 1UL),
          &VAR_6, VAR_18, 1);
  if (FUNC_1(VAR_19))
   VAR_17 = FUNC_0(VAR_19);
  else
   VAR_17 = FUNC_10(VAR_19);
 } else {
  VAR_17 = FUNC_16(&VAR_6, VAR_18, ((void*)0));
 }
 if (FUNC_1(VAR_17)) {
  FUNC_15("key not found, id: %s\n", VAR_18);
  return FUNC_2(VAR_17);
 }

 VAR_15 = FUNC_13(sizeof(*VAR_15) + FUNC_4(VAR_7),
         VAR_3);
 if (!VAR_15)
  goto err;

 VAR_15->tfm = VAR_7;

 FUNC_6(VAR_15);
 FUNC_7(VAR_15, VAR_11, VAR_12);
 FUNC_7(VAR_15, VAR_9, sizeof(*VAR_14));
 FUNC_5(VAR_15, VAR_16);

 FUNC_12(VAR_15);


 VAR_13 = FUNC_8(VAR_17, VAR_9 + sizeof(*VAR_14), VAR_10 - sizeof(*VAR_14),
        VAR_16, sizeof(VAR_16));

err:
 FUNC_9(VAR_17);

 return VAR_13 ? -VAR_0 : 0;
}
