
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 struct shash_desc* FUNC_0 (long) ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 long FUNC_2 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 scalar_t__ FUNC_5 (struct crypto_shash*) ;
 long FUNC_6 (struct shash_desc*) ;
 long FUNC_7 (struct crypto_shash*,int ,int ) ;
 char* VAR_8 ;
 int VAR_9 ;
 struct crypto_shash** VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char** VAR_13 ;
 struct crypto_shash* VAR_14 ;
 int FUNC_8 (struct shash_desc*) ;
 struct shash_desc* FUNC_9 (scalar_t__,int ) ;
 int VAR_15 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char const*,long) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static struct shash_desc *FUNC_14(char VAR_16, uint8_t VAR_17)
{
 long VAR_18;
 const char *VAR_19;
 struct crypto_shash **VAR_20;
 struct shash_desc *VAR_21;

 if (VAR_16 == VAR_5) {
  if (!(VAR_9 & VAR_4)) {
   FUNC_13("HMAC key is not set\n");
   return FUNC_0(-VAR_2);
  }
  VAR_20 = &VAR_14;
  VAR_19 = VAR_8;
 } else {
  if (VAR_17 >= VAR_7)
   return FUNC_0(-VAR_1);

  VAR_20 = &VAR_10[VAR_17];
  VAR_19 = VAR_13[VAR_17];
 }

 if (*VAR_20 == ((void*)0)) {
  FUNC_10(&VAR_15);
  if (*VAR_20)
   goto out;
  *VAR_20 = FUNC_3(VAR_19, 0, VAR_0);
  if (FUNC_1(*VAR_20)) {
   VAR_18 = FUNC_2(*VAR_20);
   FUNC_12("Can not allocate %s (reason: %ld)\n", VAR_19, VAR_18);
   *VAR_20 = ((void*)0);
   FUNC_11(&VAR_15);
   return FUNC_0(VAR_18);
  }
  if (VAR_16 == VAR_5) {
   VAR_18 = FUNC_7(*VAR_20, VAR_11, VAR_12);
   if (VAR_18) {
    FUNC_4(*VAR_20);
    *VAR_20 = ((void*)0);
    FUNC_11(&VAR_15);
    return FUNC_0(VAR_18);
   }
  }
out:
  FUNC_11(&VAR_15);
 }

 VAR_21 = FUNC_9(sizeof(*VAR_21) + FUNC_5(*VAR_20),
   VAR_6);
 if (!VAR_21)
  return FUNC_0(-VAR_3);

 VAR_21->tfm = *VAR_20;

 VAR_18 = FUNC_6(VAR_21);
 if (VAR_18) {
  FUNC_8(VAR_21);
  return FUNC_0(VAR_18);
 }
 return VAR_21;
}
