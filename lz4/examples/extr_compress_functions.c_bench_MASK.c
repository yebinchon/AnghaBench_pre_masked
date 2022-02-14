
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int LZ4_stream_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char const*,char*,size_t const,size_t const) ;
 int FUNC_1 (char const*,char*,size_t const,size_t const,int const) ;
 int FUNC_2 (int *,char const*,char*,size_t const,size_t const,int const) ;
 int FUNC_3 (char const*,char*,size_t const) ;
 int FUNC_4 (char const*,char*,size_t const,size_t const) ;
 int FUNC_5 (int ,struct timespec*) ;
 int FUNC_6 (char const*,char*,size_t const) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;

uint64_t FUNC_9(
    const char *VAR_2,
    const int VAR_3,
    const int VAR_4,
    const char *VAR_5,
    char *VAR_6,
    const size_t VAR_7,
    const size_t VAR_8,
    const size_t VAR_9
  ) {
  uint64_t VAR_10 = 0;
  int VAR_11 = 0;
  const int VAR_12 = 5000;
  struct timespec VAR_13, VAR_14;
  const int VAR_15 = 1;
  LZ4_stream_t VAR_16;



  switch(VAR_3) {
    case 132:
      FUNC_7("Starting benchmark for function: LZ4_compress_default()\n");
      for(int VAR_17=0; VAR_17<VAR_12; VAR_17++)
        VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
      if (VAR_11 < 1)
        FUNC_8("Couldn't run LZ4_compress_default()... error code received is in exit code.", VAR_11);
      if (FUNC_6(VAR_2, VAR_6, VAR_8) != 0)
        FUNC_8("According to memcmp(), the compressed dst we got doesn't match the known_good_dst... ruh roh.", 1);
      FUNC_5(VAR_1, &VAR_13);
      for (int VAR_18=1; VAR_18<=VAR_4; VAR_18++)
        FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
      break;

    case 131:
      FUNC_7("Starting benchmark for function: LZ4_compress_fast()\n");
      for(int VAR_19=0; VAR_19<VAR_12; VAR_19++)
        VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_15);
      if (VAR_11 < 1)
        FUNC_8("Couldn't run LZ4_compress_fast()... error code received is in exit code.", VAR_11);
      if (FUNC_6(VAR_2, VAR_6, VAR_8) != 0)
        FUNC_8("According to memcmp(), the compressed dst we got doesn't match the known_good_dst... ruh roh.", 1);
      FUNC_5(VAR_1, &VAR_13);
      for (int VAR_20=1; VAR_20<=VAR_4; VAR_20++)
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_15);
      break;

    case 130:
      FUNC_7("Starting benchmark for function: LZ4_compress_fast_extState()\n");
      for(int VAR_21=0; VAR_21<VAR_12; VAR_21++)
        VAR_11 = FUNC_2(&VAR_16, VAR_5, VAR_6, VAR_7, VAR_8, VAR_15);
      if (VAR_11 < 1)
        FUNC_8("Couldn't run LZ4_compress_fast_extState()... error code received is in exit code.", VAR_11);
      if (FUNC_6(VAR_2, VAR_6, VAR_8) != 0)
        FUNC_8("According to memcmp(), the compressed dst we got doesn't match the known_good_dst... ruh roh.", 1);
      FUNC_5(VAR_1, &VAR_13);
      for (int VAR_22=1; VAR_22<=VAR_4; VAR_22++)
        FUNC_2(&VAR_16, VAR_5, VAR_6, VAR_7, VAR_8, VAR_15);
      break;
    case 128:
      FUNC_7("Starting benchmark for function: LZ4_decompress_safe()\n");
      for(int VAR_23=0; VAR_23<VAR_12; VAR_23++)
        VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_9, VAR_7);
      if (VAR_11 < 1)
        FUNC_8("Couldn't run LZ4_decompress_safe()... error code received is in exit code.", VAR_11);
      if (FUNC_6(VAR_2, VAR_6, VAR_7) != 0)
        FUNC_8("According to memcmp(), the compressed dst we got doesn't match the known_good_dst... ruh roh.", 1);
      FUNC_5(VAR_1, &VAR_13);
      for (int VAR_24=1; VAR_24<=VAR_4; VAR_24++)
        FUNC_4(VAR_5, VAR_6, VAR_9, VAR_7);
      break;

    case 129:
      FUNC_7("Starting benchmark for function: LZ4_decompress_fast()\n");
      for(int VAR_25=0; VAR_25<VAR_12; VAR_25++)
        VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7);
      if (VAR_11 < 1)
        FUNC_8("Couldn't run LZ4_decompress_fast()... error code received is in exit code.", VAR_11);
      if (FUNC_6(VAR_2, VAR_6, VAR_7) != 0)
        FUNC_8("According to memcmp(), the compressed dst we got doesn't match the known_good_dst... ruh roh.", 1);
      FUNC_5(VAR_1, &VAR_13);
      for (int VAR_26=1; VAR_26<=VAR_4; VAR_26++)
        FUNC_3(VAR_5, VAR_6, VAR_7);
      break;

    default:
      FUNC_8("The test specified isn't valid.  Please check your code.", 1);
      break;
  }


  FUNC_5(VAR_1, &VAR_14);
  VAR_10 = VAR_0 *(VAR_14.tv_sec - VAR_13.tv_sec) + VAR_14.tv_nsec - VAR_13.tv_nsec;

  return VAR_10;
}
