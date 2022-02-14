
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;
typedef int LZ4_stream_t ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (size_t const) ;
 int FUNC_1 (char const*,char*,size_t const,size_t const) ;
 int FUNC_2 (char const*,char*,size_t const,size_t const,int) ;
 int FUNC_3 (int *,char const*,char*,size_t const,size_t const,int) ;
 int FUNC_4 (char*) ;
 double FUNC_5 (char const*,int ,int,char const*,char*,size_t const,size_t const,size_t const) ;
 char* FUNC_6 (int,size_t const) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int ,size_t const) ;
 int FUNC_9 (char const*,...) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_7, char **VAR_8) {

  int VAR_9 = 1000000;
  if (VAR_7 > 1)
    VAR_9 = FUNC_4(VAR_8[1]);
  if (VAR_9 < 1)
    FUNC_13("Argument 1 (iterations) must be > 0.");


  const char *VAR_10 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed luctus purus et risus vulputate, et mollis orci ullamcorper. Nulla facilisi. Fusce in ligula sed purus varius aliquet interdum vitae justo. Proin quis diam velit. Nulla varius iaculis auctor. Cras volutpat, justo eu dictum pulvinar, elit sem porttitor metus, et imperdiet metus sapien et ante. Nullam nisi nulla, ornare eu tristique eu, dignissim vitae diam. Nulla sagittis porta libero, a accumsan felis sagittis scelerisque.  Integer laoreet eleifend congue. Etiam rhoncus leo vel dolor fermentum, quis luctus nisl iaculis. Praesent a erat sapien. Aliquam semper mi in lorem ultrices ultricies. Lorem ipsum dolor sit amet, consectetur adipiscing elit. In feugiat risus sed enim ultrices, at sodales nulla tristique. Maecenas eget pellentesque justo, sed pellentesque lectus. Fusce sagittis sit amet elit vel varius. Donec sed ligula nec ligula vulputate rutrum sed ut lectus. Etiam congue pharetra leo vitae cursus. Morbi enim ante, porttitor ut varius vel, tincidunt quis justo. Nunc iaculis, risus id ultrices semper, metus est efficitur ligula, vel posuere risus nunc eget purus. Ut lorem turpis, condimentum at sem sed, porta aliquam turpis. In ut sapien a nulla dictum tincidunt quis sit amet lorem. Fusce at est egestas, luctus neque eu, consectetur tortor. Phasellus eleifend ultricies nulla ac lobortis.  Morbi maximus quam cursus vehicula iaculis. Maecenas cursus vel justo ut rutrum. Curabitur magna orci, dignissim eget dapibus vitae, finibus id lacus. Praesent rhoncus mattis augue vitae bibendum. Praesent porta mauris non ultrices fermentum. Quisque vulputate ipsum in sodales pulvinar. Aliquam nec mollis felis. Donec vitae augue pulvinar, congue nisl sed, pretium purus. Fusce lobortis mi ac neque scelerisque semper. Pellentesque vel est vitae magna aliquet aliquet. Nam non dolor. Nulla facilisi. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Morbi ac lacinia felis metus.";
  const char *VAR_11 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

  const size_t VAR_12 = FUNC_12(VAR_10) + 1;
  const size_t VAR_13 = FUNC_0(VAR_12);
  int VAR_14 = 0;

  char *VAR_15 = FUNC_6(1, VAR_13);
  char *VAR_16 = FUNC_6(1, VAR_13);
  char *VAR_17 = FUNC_6(1, VAR_13);
  if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
    FUNC_10("Couldn't allocate memory for the destination buffers.  Sad :(", 1);


  VAR_14 = FUNC_1(VAR_10, VAR_16, VAR_12, VAR_13);
  if (VAR_14 < 1)
    FUNC_10("Couldn't create a known-good destination buffer for comparison... this is bad.", 1);
  const size_t VAR_18 = VAR_14;
  VAR_14 = FUNC_1(VAR_11, VAR_17, VAR_12, VAR_13);
  if (VAR_14 < 1)
    FUNC_10("Couldn't create a known-good (highly compressible) destination buffer for comparison... this is bad.", 1);
  const size_t VAR_19 = VAR_14;







  FUNC_8(VAR_15, 0, VAR_13);
  VAR_14 = FUNC_2(VAR_10, VAR_15, VAR_12, VAR_13, 1);
  if (VAR_14 < 1)
    FUNC_10("Failed to compress src using LZ4_compress_fast.  echo $? for return code.", VAR_14);
  if (FUNC_7(VAR_15, VAR_16, VAR_14) != 0)
    FUNC_10("According to memcmp(), the value we got in dst from LZ4_compress_fast doesn't match the known-good value.  This is bad.", 1);



  FUNC_8(VAR_15, 0, VAR_13);
  LZ4_stream_t VAR_20;
  VAR_14 = FUNC_3(&VAR_20, VAR_10, VAR_15, VAR_12, VAR_13, 1);
  if (VAR_14 < 1)
    FUNC_10("Failed to compress src using LZ4_compress_fast_extState.  echo $? for return code.", VAR_14);
  if (FUNC_7(VAR_15, VAR_16, VAR_14) != 0)
    FUNC_10("According to memcmp(), the value we got in dst from LZ4_compress_fast_extState doesn't match the known-good value.  This is bad.", 1);
  char *VAR_21 = FUNC_6(1, VAR_12);
  FUNC_8(VAR_15, 0, VAR_13);
  FUNC_9("\nStarting suite A:  Normal compressible text.\n");
  uint64_t VAR_22 = FUNC_5(VAR_16, VAR_1, VAR_9, VAR_10, VAR_15, VAR_12, VAR_13, VAR_18);
  uint64_t VAR_23 = FUNC_5(VAR_16, VAR_2, VAR_9, VAR_10, VAR_15, VAR_12, VAR_13, VAR_18);
  uint64_t VAR_24 = FUNC_5(VAR_16, VAR_3, VAR_9, VAR_10, VAR_15, VAR_12, VAR_13, VAR_18);

  uint64_t VAR_25 = FUNC_5(VAR_10, VAR_5, VAR_9, VAR_16, VAR_21, VAR_12, VAR_13, VAR_18);
  uint64_t VAR_26 = FUNC_5(VAR_10, VAR_4, VAR_9, VAR_16, VAR_21, VAR_12, VAR_13, VAR_18);

  FUNC_8(VAR_15, 0, VAR_13);
  FUNC_9("\nStarting suite B:  Highly compressible text.\n");
  uint64_t VAR_27 = FUNC_5(VAR_17, VAR_1, VAR_9, VAR_11, VAR_15, VAR_12, VAR_13, VAR_19);
  uint64_t VAR_28 = FUNC_5(VAR_17, VAR_2, VAR_9, VAR_11, VAR_15, VAR_12, VAR_13, VAR_19);
  uint64_t VAR_29 = FUNC_5(VAR_17, VAR_3, VAR_9, VAR_11, VAR_15, VAR_12, VAR_13, VAR_19);

  uint64_t VAR_30 = FUNC_5(VAR_11, VAR_5, VAR_9, VAR_17, VAR_21, VAR_12, VAR_13, VAR_19);
  uint64_t VAR_31 = FUNC_5(VAR_11, VAR_4, VAR_9, VAR_17, VAR_21, VAR_12, VAR_13, VAR_19);


  FUNC_11(VAR_6, "");
  const char *VAR_32 = "|%-14s|%-30s|%'14.9f|%'16d|%'14d|%'13.2f%%|\n";
  const char *VAR_33 = "|%-14s|%-30s|%14s|%16s|%14s|%14s|\n";
  const char *VAR_34 = "+--------------+------------------------------+--------------+----------------+--------------+--------------+\n";
  FUNC_9("\n");
  FUNC_9("%s", VAR_34);
  FUNC_9(VAR_33, "Source", "Function Benchmarked", "Total Seconds", "Iterations/sec", "ns/Iteration", "% of default");
  FUNC_9("%s", VAR_34);
  FUNC_9(VAR_32, "Normal Text", "LZ4_compress_default()", (double)VAR_22 / VAR_0, (int)(VAR_9 / ((double)VAR_22 /VAR_0)), (int)VAR_22 / VAR_9, (double)VAR_22 * 100 / VAR_22);
  FUNC_9(VAR_32, "Normal Text", "LZ4_compress_fast()", (double)VAR_23 / VAR_0, (int)(VAR_9 / ((double)VAR_23 /VAR_0)), (int)VAR_23 / VAR_9, (double)VAR_23 * 100 / VAR_22);
  FUNC_9(VAR_32, "Normal Text", "LZ4_compress_fast_extState()", (double)VAR_24 / VAR_0, (int)(VAR_9 / ((double)VAR_24 /VAR_0)), (int)VAR_24 / VAR_9, (double)VAR_24 * 100 / VAR_22);

  FUNC_9(VAR_32, "Normal Text", "LZ4_decompress_safe()", (double)VAR_25 / VAR_0, (int)(VAR_9 / ((double)VAR_25 /VAR_0)), (int)VAR_25 / VAR_9, (double)VAR_25 * 100 / VAR_22);
  FUNC_9(VAR_32, "Normal Text", "LZ4_decompress_fast()", (double)VAR_26 / VAR_0, (int)(VAR_9 / ((double)VAR_26 /VAR_0)), (int)VAR_26 / VAR_9, (double)VAR_26 * 100 / VAR_22);
  FUNC_9(VAR_33, "", "", "", "", "", "");
  FUNC_9(VAR_32, "Compressible", "LZ4_compress_default()", (double)VAR_27 / VAR_0, (int)(VAR_9 / ((double)VAR_27 /VAR_0)), (int)VAR_27 / VAR_9, (double)VAR_27 * 100 / VAR_27);
  FUNC_9(VAR_32, "Compressible", "LZ4_compress_fast()", (double)VAR_28 / VAR_0, (int)(VAR_9 / ((double)VAR_28 /VAR_0)), (int)VAR_28 / VAR_9, (double)VAR_28 * 100 / VAR_27);
  FUNC_9(VAR_32, "Compressible", "LZ4_compress_fast_extState()", (double)VAR_29 / VAR_0, (int)(VAR_9 / ((double)VAR_29 /VAR_0)), (int)VAR_29 / VAR_9, (double)VAR_29 * 100 / VAR_27);

  FUNC_9(VAR_32, "Compressible", "LZ4_decompress_safe()", (double)VAR_30 / VAR_0, (int)(VAR_9 / ((double)VAR_30 /VAR_0)), (int)VAR_30 / VAR_9, (double)VAR_30 * 100 / VAR_27);
  FUNC_9(VAR_32, "Compressible", "LZ4_decompress_fast()", (double)VAR_31 / VAR_0, (int)(VAR_9 / ((double)VAR_31 /VAR_0)), (int)VAR_31 / VAR_9, (double)VAR_31 * 100 / VAR_27);
  FUNC_9("%s", VAR_34);
  FUNC_9("\n");
  FUNC_9("All done, ran %d iterations per test.\n", VAR_9);
  return 0;
}
