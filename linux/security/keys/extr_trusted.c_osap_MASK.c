
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct tpm_buf {int * data; } ;
struct osapsess {unsigned char* enonce; int secret; int handle; } ;


 int FUNC_0 (struct tpm_buf*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,unsigned char const*,int ,int,unsigned char*,int,unsigned char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int FUNC_4 (struct tpm_buf*,int ) ;
 int FUNC_5 (struct tpm_buf*,int ) ;
 int FUNC_6 (struct tpm_buf*,unsigned char*,int) ;
 int FUNC_7 (int ,unsigned char*,int) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct tpm_buf *VAR_8, struct osapsess *VAR_9,
  const unsigned char *VAR_10, uint16_t VAR_11, uint32_t VAR_12)
{
 unsigned char VAR_13[VAR_3];
 unsigned char VAR_14[VAR_3];
 int VAR_15;

 VAR_15 = FUNC_7(VAR_7, VAR_14, VAR_3);
 if (VAR_15 != VAR_3)
  return VAR_15;

 FUNC_0(VAR_8);
 FUNC_4(VAR_8, VAR_6);
 FUNC_5(VAR_8, VAR_5);
 FUNC_5(VAR_8, VAR_4);
 FUNC_4(VAR_8, VAR_11);
 FUNC_5(VAR_8, VAR_12);
 FUNC_6(VAR_8, VAR_14, VAR_3);

 VAR_15 = FUNC_8(VAR_8->data, VAR_0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_9->handle = FUNC_1(VAR_8->data, VAR_2);
 FUNC_3(VAR_9->enonce, &(VAR_8->data[VAR_2 + sizeof(uint32_t)]),
        VAR_3);
 FUNC_3(VAR_13, &(VAR_8->data[VAR_2 + sizeof(uint32_t) +
      VAR_3]), VAR_3);
 return FUNC_2(VAR_9->secret, VAR_10, VAR_1, VAR_3,
      VAR_13, VAR_3, VAR_14, 0, 0);
}
