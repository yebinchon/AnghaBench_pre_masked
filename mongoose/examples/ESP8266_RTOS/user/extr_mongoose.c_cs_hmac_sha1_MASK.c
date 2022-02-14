
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_key ;
typedef int cs_sha1_ctx ;
typedef int buf2 ;
typedef int buf1 ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_4 (unsigned char*,int ,int) ;

void FUNC_5(const unsigned char *VAR_0, size_t VAR_1,
                  const unsigned char *VAR_2, size_t VAR_3,
                  unsigned char VAR_4[20]) {
  cs_sha1_ctx VAR_5;
  unsigned char VAR_6[64], VAR_7[64], VAR_8[20], VAR_9;

  if (VAR_1 > sizeof(VAR_6)) {
    FUNC_1(&VAR_5);
    FUNC_2(&VAR_5, VAR_0, VAR_1);
    FUNC_0(VAR_8, &VAR_5);
    VAR_0 = VAR_8;
    VAR_1 = sizeof(VAR_8);
  }

  FUNC_4(VAR_6, 0, sizeof(VAR_6));
  FUNC_4(VAR_7, 0, sizeof(VAR_7));
  FUNC_3(VAR_6, VAR_0, VAR_1);
  FUNC_3(VAR_7, VAR_0, VAR_1);

  for (VAR_9 = 0; VAR_9 < sizeof(VAR_6); VAR_9++) {
    VAR_6[VAR_9] ^= 0x36;
    VAR_7[VAR_9] ^= 0x5c;
  }

  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_6, sizeof(VAR_6));
  FUNC_2(&VAR_5, VAR_2, VAR_3);
  FUNC_0(VAR_4, &VAR_5);

  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_7, sizeof(VAR_7));
  FUNC_2(&VAR_5, VAR_4, 20);
  FUNC_0(VAR_4, &VAR_5);
}
