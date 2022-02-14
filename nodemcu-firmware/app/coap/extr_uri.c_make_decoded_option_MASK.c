
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*,size_t) ;
 size_t FUNC_3 (int ,int,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char const*,size_t,unsigned char*) ;

int FUNC_5(const unsigned char *VAR_0, size_t VAR_1,
      unsigned char *VAR_2, size_t VAR_3) {
  int VAR_4;
  size_t VAR_5;

  if (!VAR_3) {
    FUNC_0("make_decoded_option(): buflen is 0!\n");
    return -1;
  }

  VAR_4 = FUNC_2(VAR_0, VAR_1);
  if (VAR_4 < 0)
    return -1;



  VAR_5 = FUNC_3(0, VAR_4, VAR_2, VAR_3);

  FUNC_1(VAR_5 <= VAR_3);

  if (!VAR_5)
    return -1;

  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;

  if (VAR_3 < (size_t)VAR_4) {
    FUNC_0("buffer too small for option\n");
    return -1;
  }

  FUNC_4(VAR_0, VAR_1, VAR_2);

  return VAR_5 + VAR_4;
}
