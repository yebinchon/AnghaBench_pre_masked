
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_buf {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct tpm_buf*) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned char*,int *,int ) ;
 int FUNC_3 (struct tpm_buf*,int ) ;
 int FUNC_4 (struct tpm_buf*,int ) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct tpm_buf *VAR_8, uint32_t *VAR_9, unsigned char *VAR_10)
{
 int VAR_11;

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_8);
 FUNC_3(VAR_8, VAR_6);
 FUNC_4(VAR_8, VAR_4);
 FUNC_4(VAR_8, VAR_5);
 VAR_11 = FUNC_5(VAR_8->data, VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 *VAR_9 = FUNC_1(VAR_8->data, VAR_2);
 FUNC_2(VAR_10, &VAR_8->data[VAR_2 + sizeof(uint32_t)],
        VAR_3);
 return 0;
}
