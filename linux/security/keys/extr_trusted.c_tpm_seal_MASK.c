
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct tpm_digests {unsigned char* xorwork; unsigned char const* xorhash; unsigned char const* nonceodd; unsigned char* encauth; unsigned char const* pubauth; } ;
struct tpm_buf {scalar_t__ data; } ;
struct osapsess {int handle; scalar_t__ secret; scalar_t__ enonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_buf*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (unsigned char const*,scalar_t__,int,scalar_t__,unsigned char const*,unsigned char,int,int*,int,unsigned char*,int,int*,int,...) ;
 int FUNC_3 (scalar_t__,int,unsigned char const*,scalar_t__,int,int,scalar_t__,int ,int ) ;
 int FUNC_4 (unsigned char*,int,unsigned char const*) ;
 int VAR_9 ;
 int FUNC_5 (struct osapsess*) ;
 int FUNC_6 (int) ;
 struct tpm_digests* FUNC_7 (int,int ) ;
 int FUNC_8 (struct tpm_digests*) ;
 int FUNC_9 (unsigned char*,scalar_t__,int) ;
 int FUNC_10 (struct tpm_buf*,struct osapsess*,unsigned char const*,int ,int) ;
 int FUNC_11 (struct tpm_buf*,int ) ;
 int FUNC_12 (struct tpm_buf*,int) ;
 int FUNC_13 (struct tpm_buf*,unsigned char) ;
 int FUNC_14 (struct tpm_buf*,unsigned char const*,int) ;
 int FUNC_15 (int ,unsigned char const*,int) ;
 int FUNC_16 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_17(struct tpm_buf *VAR_10, uint16_t VAR_11,
      uint32_t VAR_12, const unsigned char *VAR_13,
      const unsigned char *VAR_14, uint32_t VAR_15,
      unsigned char *VAR_16, uint32_t *VAR_17,
      const unsigned char *VAR_18,
      const unsigned char *VAR_19, uint32_t VAR_20)
{
 struct osapsess VAR_21;
 struct tpm_digests *VAR_22;
 unsigned char VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;


 VAR_22 = FUNC_7(sizeof *VAR_22, VAR_1);
 if (!VAR_22)
  return -VAR_0;


 VAR_30 = FUNC_10(VAR_10, &VAR_21, VAR_13, VAR_11, VAR_12);
 if (VAR_30 < 0)
  goto out;
 FUNC_5(&VAR_21);


 FUNC_9(VAR_22->xorwork, VAR_21.secret, VAR_3);
 FUNC_9(VAR_22->xorwork + VAR_3, VAR_21.enonce, VAR_3);
 VAR_30 = FUNC_4(VAR_22->xorwork, VAR_3 * 2, VAR_22->xorhash);
 if (VAR_30 < 0)
  goto out;

 VAR_30 = FUNC_15(VAR_9, VAR_22->nonceodd, VAR_5);
 if (VAR_30 != VAR_5)
  goto out;
 VAR_24 = FUNC_6(VAR_6);
 VAR_26 = FUNC_6(VAR_15);
 VAR_25 = FUNC_6(VAR_20);
 VAR_23 = 0;


 for (VAR_31 = 0; VAR_31 < VAR_3; ++VAR_31)
  VAR_22->encauth[VAR_31] = VAR_22->xorhash[VAR_31] ^ VAR_18[VAR_31];


 if (VAR_20 == 0) {

  VAR_30 = FUNC_2(VAR_22->pubauth, VAR_21.secret, VAR_3,
       VAR_21.enonce, VAR_22->nonceodd, VAR_23,
       sizeof(uint32_t), &VAR_24, VAR_3,
       VAR_22->encauth, sizeof(uint32_t), &VAR_25,
       sizeof(uint32_t), &VAR_26, VAR_15, VAR_14, 0,
       0);
 } else {

  VAR_30 = FUNC_2(VAR_22->pubauth, VAR_21.secret, VAR_3,
       VAR_21.enonce, VAR_22->nonceodd, VAR_23,
       sizeof(uint32_t), &VAR_24, VAR_3,
       VAR_22->encauth, sizeof(uint32_t), &VAR_25,
       VAR_20, VAR_19, sizeof(uint32_t),
       &VAR_26, VAR_15, VAR_14, 0, 0);
 }
 if (VAR_30 < 0)
  goto out;


 FUNC_0(VAR_10);
 FUNC_11(VAR_10, VAR_8);
 FUNC_12(VAR_10, VAR_7 + VAR_20 + VAR_15);
 FUNC_12(VAR_10, VAR_6);
 FUNC_12(VAR_10, VAR_12);
 FUNC_14(VAR_10, VAR_22->encauth, VAR_3);
 FUNC_12(VAR_10, VAR_20);
 FUNC_14(VAR_10, VAR_19, VAR_20);
 FUNC_12(VAR_10, VAR_15);
 FUNC_14(VAR_10, VAR_14, VAR_15);
 FUNC_12(VAR_10, VAR_21.handle);
 FUNC_14(VAR_10, VAR_22->nonceodd, VAR_5);
 FUNC_13(VAR_10, VAR_23);
 FUNC_14(VAR_10, VAR_22->pubauth, VAR_3);

 VAR_30 = FUNC_16(VAR_10->data, VAR_2);
 if (VAR_30 < 0)
  goto out;


 VAR_27 = FUNC_1(VAR_10->data, VAR_4 + sizeof(uint32_t));
 VAR_28 = FUNC_1(VAR_10->data, VAR_4 + sizeof(uint32_t) +
        sizeof(uint32_t) + VAR_27);
 VAR_29 = sizeof(uint32_t) + sizeof(uint32_t) + VAR_27 +
     sizeof(uint32_t) + VAR_28;


 VAR_30 = FUNC_3(VAR_10->data, VAR_24, VAR_22->nonceodd, VAR_21.secret,
        VAR_3, VAR_29, VAR_4, 0,
        0);


 if (!VAR_30) {
  FUNC_9(VAR_16, VAR_10->data + VAR_4, VAR_29);
  *VAR_17 = VAR_29;
 }
out:
 FUNC_8(VAR_22);
 return VAR_30;
}
