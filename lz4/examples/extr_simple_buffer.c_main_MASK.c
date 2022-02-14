
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const) ;
 int FUNC_1 (char const* const,char*,int const,int const) ;
 int FUNC_2 (char*,char* const,int const,int const) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (char const* const,char* const,int const) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,int const) ;
 scalar_t__ FUNC_9 (char const* const) ;

int FUNC_10(void) {
  const char* const VAR_0 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Lorem ipsum dolor site amat.";

  const int VAR_1 = (int)(FUNC_9(VAR_0) + 1);

  const int VAR_2 = FUNC_0(VAR_1);

  char* VAR_3 = FUNC_4((size_t)VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_8("Failed to allocate memory for *compressed_data.", 1);



  const int VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);

  if (VAR_4 <= 0)
    FUNC_8("A 0 or negative result from LZ4_compress_default() indicates a failure trying to compress the data. ", 1);
  if (VAR_4 > 0)
    FUNC_6("We successfully compressed some data! Ratio: %.2f\n",
        (float) VAR_4/VAR_1);


  VAR_3 = (char *)FUNC_7(VAR_3, (size_t)VAR_4);
  if (VAR_3 == ((void*)0))
    FUNC_8("Failed to re-alloc memory for compressed_data.  Sad :(", 1);
  char* const VAR_5 = FUNC_4(VAR_1);
  if (VAR_5 == ((void*)0))
    FUNC_8("Failed to allocate memory for *regen_buffer.", 1);



  const int VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4, VAR_1);
  FUNC_3(VAR_3);
  if (VAR_6 < 0)
    FUNC_8("A negative result from LZ4_decompress_safe indicates a failure trying to decompress the data.  See exit code (echo $?) for value returned.", VAR_6);
  if (VAR_6 >= 0)
    FUNC_6("We successfully decompressed some data!\n");


  if (VAR_6 != VAR_1)
    FUNC_8("Decompressed data is different from original! \n", 1);



  if (FUNC_5(VAR_0, VAR_5, VAR_1) != 0)
    FUNC_8("Validation failed.  *src and *new_src are not identical.", 1);
  FUNC_6("Validation done. The string we ended up with is:\n%s\n", VAR_5);
  return 0;
}
