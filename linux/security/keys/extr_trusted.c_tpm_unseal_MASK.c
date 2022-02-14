
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tpm_buf {scalar_t__ data; } ;


 int FUNC_0 (struct tpm_buf*) ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (unsigned char*,unsigned char const*,int,unsigned char*,unsigned char*,unsigned char,int,scalar_t__*,int,unsigned char const*,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned char*,unsigned char const*,int,unsigned char const*,int,int,scalar_t__,unsigned int,scalar_t__,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct tpm_buf*,scalar_t__*,unsigned char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct tpm_buf*,int ) ;
 int FUNC_9 (struct tpm_buf*,scalar_t__) ;
 int FUNC_10 (struct tpm_buf*,unsigned char) ;
 int FUNC_11 (struct tpm_buf*,unsigned char const*,int) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(struct tpm_buf *VAR_9,
        uint32_t VAR_10, const unsigned char *VAR_11,
        const unsigned char *VAR_12, int VAR_13,
        const unsigned char *VAR_14,
        unsigned char *VAR_15, unsigned int *VAR_16)
{
 unsigned char VAR_17[VAR_4];
 unsigned char VAR_18[VAR_4];
 unsigned char VAR_19[VAR_4];
 unsigned char VAR_20[VAR_1];
 unsigned char VAR_21[VAR_1];
 uint32_t VAR_22 = 0;
 uint32_t VAR_23 = 0;
 unsigned char VAR_24 = 0;
 uint32_t VAR_25;
 uint32_t VAR_26;
 int VAR_27;


 VAR_27 = FUNC_6(VAR_9, &VAR_22, VAR_18);
 if (VAR_27 < 0) {
  FUNC_7("trusted_key: oiap failed (%d)\n", VAR_27);
  return VAR_27;
 }
 VAR_27 = FUNC_6(VAR_9, &VAR_23, VAR_19);
 if (VAR_27 < 0) {
  FUNC_7("trusted_key: oiap failed (%d)\n", VAR_27);
  return VAR_27;
 }

 VAR_25 = FUNC_4(VAR_5);
 VAR_26 = FUNC_4(VAR_2);
 VAR_27 = FUNC_12(VAR_8, VAR_17, VAR_4);
 if (VAR_27 != VAR_4) {
  FUNC_7("trusted_key: tpm_get_random failed (%d)\n", VAR_27);
  return VAR_27;
 }
 VAR_27 = FUNC_2(VAR_20, VAR_11, VAR_4,
      VAR_18, VAR_17, VAR_24, sizeof(uint32_t),
      &VAR_25, VAR_13, VAR_12, 0, 0);
 if (VAR_27 < 0)
  return VAR_27;
 VAR_27 = FUNC_2(VAR_21, VAR_14, VAR_4,
      VAR_19, VAR_17, VAR_24, sizeof(uint32_t),
      &VAR_25, VAR_13, VAR_12, 0, 0);
 if (VAR_27 < 0)
  return VAR_27;


 FUNC_0(VAR_9);
 FUNC_8(VAR_9, VAR_6);
 FUNC_9(VAR_9, VAR_7 + VAR_13);
 FUNC_9(VAR_9, VAR_5);
 FUNC_9(VAR_9, VAR_10);
 FUNC_11(VAR_9, VAR_12, VAR_13);
 FUNC_9(VAR_9, VAR_22);
 FUNC_11(VAR_9, VAR_17, VAR_4);
 FUNC_10(VAR_9, VAR_24);
 FUNC_11(VAR_9, VAR_20, VAR_1);
 FUNC_9(VAR_9, VAR_23);
 FUNC_11(VAR_9, VAR_17, VAR_4);
 FUNC_10(VAR_9, VAR_24);
 FUNC_11(VAR_9, VAR_21, VAR_1);

 VAR_27 = FUNC_13(VAR_9->data, VAR_0);
 if (VAR_27 < 0) {
  FUNC_7("trusted_key: authhmac failed (%d)\n", VAR_27);
  return VAR_27;
 }

 *VAR_16 = FUNC_1(VAR_9->data, VAR_3);
 VAR_27 = FUNC_3(VAR_9->data, VAR_25, VAR_17,
        VAR_11, VAR_1,
        VAR_14, VAR_1,
        sizeof(uint32_t), VAR_3,
        *VAR_16, VAR_3 + sizeof(uint32_t), 0,
        0);
 if (VAR_27 < 0) {
  FUNC_7("trusted_key: TSS_checkhmac2 failed (%d)\n", VAR_27);
  return VAR_27;
 }
 FUNC_5(VAR_15, VAR_9->data + VAR_3 + sizeof(uint32_t), *VAR_16);
 return 0;
}
